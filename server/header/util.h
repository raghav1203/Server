#ifndef __UTIL_H_INCLUDE__
#define __UTIL_H_INCLUDE__

#include <string>

class util{
	public:
		static void log_warn(string warn);
		static void log_error(string err);
		static void log_debug(string debug);
		static void log_info(string info);
}

#endif