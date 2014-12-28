#ifndef __MESSAGE_H_INCLUDE__
#define __MESSAGE_H_INCLUDE__

#include <locale>

namespace com.biotools.meerkat
{
	class message
	{
		public:
			static locale* loc;
			
			static locale& get_locale();
			static void set_locale(locale& l);
	}
}

#endif