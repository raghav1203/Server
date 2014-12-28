#indef __PREFRENCE_CHANGE_LISTENER_H_INCLUDE__
#define __PREFRENCE_CHANGE_LISTENER_H_INCLUDE__

#include "prefrence_change_event.h"

namespace com.biotools.meerkst.util
{
	class prefrence_change_listener
	{
		public:
			prefrence_change(prefrence_change_event event) = 0;
	}
};

#endif