#ifndef __BASE_SERVER_ADAPTOR_H_INCLUDE__
#define __BASE_SERVER_ADAPTOR_H_INCLUDE__

namespace server
{
	class base_server_adaptor
	{
		public:
			on_zone_created(izone& zone){};
			on_zone_deleted(izone& zone){};
			on_zone_updated(izone& zone){};
	}
}

#endif