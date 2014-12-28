#ifndef __PLAYER_H_INCLUDE__
#define __PLAYER_H_INCLUDE__

#include "prefrences.h"
#include "card.h"
#include "action.h"
#include "game_observer.h"

namespace com.biotools.meerkat
{
	class player : public game_observer
	{
		public:
			void init(prefrences& pref);
			void hole_cards(card& c1, card& c2, int index);
			action& get_action();
	}
}

#endif