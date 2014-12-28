#ifndef __PREFRENCE_H_INCLUDE__
#define __PREFRENCE_H_INCLUDE__

#include <string>
#include <unordered_map>
#include <fstream>
#include <vector>

#include "prefrence_change_listener.h"

typedef std::unorderd_map<std::string, std::string> string_map;

namespace com.biotools.meerkat.util
{
	class prefrences
	{
		public:
			std::mutex sync;
			vector<prefrence_change_listener> listeners;
			string_map prefs;
			bool dirty;
		
			prefrences();
			prefrences(prefrences& p);
			prefrences(ofstream& ofs);
			prefrences(string fname);
			~prefrences();
			
			bool empty();
			void clear_all();
			string[] keys();
			
			string get(string name, string def = "");
			string get_int(string name, int def = 0);
			string get_long(string name, long def = 0L);
			string get_double(string name, double def = 0.0);
			string get_bool(string name, bool def = false);

			void put(string name, string val);
			void put_int(string name, int val);
			void put_long(string name, long val);
			void put_double(string name, double val);
			void put_bool(string name, bool val);
			
			void set(string name, string val);
			void set_int(string name, int val);
			void set_long(string name, long val);
			void set_double(string name, double val);
			void set_bool(string name, bool val);
			
			void save();
			void load_prefrence(string fname);
			void load_prefrence(ofstream& ofs);
			
			string to_string();
			string escape_string(string s);
			string unescape_string(string s);
			string munk_string(string s);
			string unmunk_string(string s);
			
			string get_file_name();
			fstream& get_file_stream();
			
			void remove(string name);
			bool is_dirty(){return this.dirty;};
			bool set_dirty(bool val){this.dirty = val;};
			
			void get_listeners(std::vector<prefrence_change_listener>& out);
			void add_prefrence_change_listener(prefrence_change_listener l);
			void remove_prefrence_change_listener(prefrence_change_listener l);
			
			void fire_prefrence_change_event(string key, string val);
			
			bool has_prefrence(string key);
			
	}
}

#endif