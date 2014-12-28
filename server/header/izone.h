#ifndef __IZONE_H_INCLUDE__
#define __IZONE_H_INCLUDE__

#include <vector>
#include <string>
#include <unordered_map>
#include "base_zone_adaptor.h"

typedef std::unordered_map<std::string,std::string> string_map;

namespace server
{
	class izone
	{
		using namespace std;
		public:
			void set_adapter(base_zone_adaptor adaptor) = 0;
			void get_rooms(vector<iroom>& out) = 0;
			void get_users(vector<iuser>& out) = 0;
			void remove_user(iuser& user) = 0;
			void create_room(string name, int max_user, string_map& props, iroom& out) = 0;
			void create_turn_based_room(string name, int max_user, string_map& props, int turn_time,iturn_based_room& out) = 0;
			bool delete_room(string name) = 0;
			string get_name() = 0;
			string get_app_key() = 0;
			string get_secret() = 0;
			void send_add_user_response(iuser& user, short result, string extra_data) = 0;
	}	
}

#endif