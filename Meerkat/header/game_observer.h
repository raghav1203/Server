#ifndef __GAME_OBSERVER_H_INCLUDE__
#define __GAME_OBSERVER_H_INCLUDE__

#include <string>

namespace com.biotools.meerkat
{
	class game_observer
	{
		public:
			void action_event(int i,action& act) = 0;
			void stage_event(int i) = 0;
			void show_down_event(int i) = 0;
			void game_start_event(int i) = 0;
			void hole_card_event();
			void game_over_event();
			void game_stage_changed();
			void win_event(int i,double d,string s);
	}
}

#endif