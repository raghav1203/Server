#ifndef __APP_CONFIG_INCLUDE__
#define __APP_CONFIG_INCLUDE__

namespace server{
	class app_config{
		public:
			static string ADMIN_USER_NAME = "admin";
			static string ADMIN_PASSWORD = "admin";
			static string LISTEN_PORT = "12346";
			static string MASTER_HOST = "172.20.1.100";
			static string LICENSE_KEY = "";
			static long TICK_INTERVAL = 100L;
	}
}
#endif