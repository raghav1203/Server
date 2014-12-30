#ifndef __TCP_SERVER_H_INCLUDE__
#define __TCP_SERVER_H_INCLUDE__
namespace server
{
	class tcp_server
	{
		public:
			void start(io_handler_adaptor& adaptor);
	}
}
#endif