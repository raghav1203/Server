#ifndef __LICENSE_POLICY_H_INCLUDE__
#define __LICENSE_POLICY_H_INCLUDE__

#include <string>
#include <climts>

namespace server
{
	class license_policy
	{
		public:
			static void get_instance();
			
			string get_registered_email() { return email; }
			string get_key() { return license_key; }
			void set_key(string key) { this.license_key = key; }
			bool is_valid() { return is_valid; }
			long get_expiry() { return expires; }
			int get_ccu_limit() { return ccu_limit; }
			short acquire_license(string new_key);
			short release_other_license_key(string key);
			short release_local_license();
			
		private:
			//members
			int ccu_limit = INT_MAX;
			string license_key = "";
			long expires = INT_MAX;
			bool is_valid = false;
			string email = "";
			static license_policy& _instace;
			
			license_policy();
			~license_policy();
	};
}

#endif