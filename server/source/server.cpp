#ifndef __SERVER_CPP_INCLUDE__
#define __SERVER_CPP_INCLUDE__

#include <string>
#include <iostream>
#include <fstream>

#include "server.h"
#include "app_config.h"
#include "util.h"

namespace server
{
	using namespace std;
	
	bool server::start(base_server_adaptor& adaptor){
		try {
			if (app_config.LICENSE_KEY.length() > 0) {
				license_policy.getInstance().acquireLicense(app_config.LICENSE_KEY);
			} else {
				throw "no license key in app_config.json";
			}
		} catch (string ex) {
			util.log_warn("Error in loading license from server, license key may not be mentioned in config file");
			util.log_warn("Running with " + LicensePolicy.getInstance().getCCULimit() + " CCU limit");
		}
		tcp_server tcpServer = new tcp_server();
		tcp_server.start(_handler);
		return true;
	}
	
};

#endif