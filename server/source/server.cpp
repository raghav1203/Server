#ifndef __SERVER_CPP_INCLUDE__
#define __SERVER_CPP_INCLUDE__

#include <string>
#include <iostream>
#include <fstream>

#include "server.h"

namespace server
{
	usinf namespace std;
	
	bool server::start(){
		if (!loadConfigFromFile(configPath)) {
			return false;
		}
		configFilePath = configPath;
		try {
			if (AppConfig.LICENSE_KEY.length() > 0) {
				LicensePolicy.getInstance().acquireLicense(AppConfig.LICENSE_KEY);
			} else {
				throw new Exception("no license key in AppConfig.json");
			}
		} catch (Exception ex) {
			Util.logWarn("Error in loading license from server     			license key may not be mentioned in config file");
			Util.logWarn("Running with " + LicensePolicy.getInstance().getCCULimit() + " CCU limit");
		}
		NonBlockingServer tcpServer = new TCPServer();
		NonBlockingServer udpServer = new UDPServer();
		if (_handler == null) {
			_handler = new GCProtocolHandler(adaptor);
			_handler.bootstrap();
		}

		// Logger minaLogger = (Logger) LoggerFactory.getLogger("org.apache.mina");
		// if (minaLogger != null) {
		// minaLogger.setLevel(Level.OFF);
		// }

		tcpServer.start(_handler);
		udpServer.start(_handler);

		// NonBlockingServer flashServer = new FlashPolicyServer();
		// IoHandlerAdapter flashHandler = new FlashPolicyHandler();
		// flashHandlerlashServer.start(flashHandler);

		Util.createHSQLServiceTable();
		Util.createHSQLMteringTable();
		Util.createHSQLRoomTable();
		return true;
	}
	
	private static bool loadConfigFromFile(string path) {

		try {
			ifstream ifs (path, ifstream::in);
			
			JSONObject jsonConfig = new JSONObject(config);
			AppConfig.TICK_INTERVAL = jsonConfig.optInt("TickTime");
			AppConfig.ListenPort = jsonConfig.optInt("ListenPort", 12346);
			AppConfig.MASTER_HOST = jsonConfig.optString("MasterHost");
			AppConfig.AdminUsername = jsonConfig.optString("AdminUsername");
			AppConfig.AdminPassword = jsonConfig.optString("AdminPassword");
			AppConfig.HSQLDBFILE = jsonConfig.optString("HSQLDBFile");
			AppConfig.LICENSE_KEY = jsonConfig.optString("LICENSE_KEY");
			// AppConfig.FlashPolicyPort = jsonConfig.optInt("FlashPolicyPort", 8430);
		} catch (Exception ex) {
			Util.logError("GC_SERVER could not load the config file successfully!!!!! " + ExceptionUtils.getFullStackTrace(ex));
			return false;
		}
		Util.logInfo("GC_SERVER loaded the config file successfully!!!!! ");
		return true;
	}

};

#endif