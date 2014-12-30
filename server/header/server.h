#ifndef __SERVER_H_INCLUDE__
#define __SERVER_H_INCLUDE__

#include <string>
#include "base_server_adaptor.h"

namespace server
{
	class server
	{
		public:
			static bool start(base_server_adaptor& adaptor);
	};
};
#endif