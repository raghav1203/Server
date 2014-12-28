#ifndef __PREFRENCE_CHANGE_EVENT_H_INCLUDE__
#define __PREFRENCE_CHANGE_EVENT_H_INCLUDE__

#include <string>

namespace com.biotools.meerkat.util
{
	class prefrence_change_event
	{
		public:
			void * source;
			string key;
			string new_val;
			
			prefrence_change_event(void * source, string key, string val);
			~prefrence_change_event();
			
			void* get_source(){return source;};
			string get_key(){return this.key;};
			string get_new_value(){return this.new_val;};
			string to_string();
	}
}

#endif