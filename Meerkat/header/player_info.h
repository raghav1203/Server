#ifndef __PLAYER_INFO_H_INCLUDE__
#define __PLAYER_INFO_H_INCLUDE__

#include <string>
#include "hand.h"
#include "game_info.h"


namespace com.biotools.meerkat
{
	class player_info
	{
		public:
			double get_net_gain();
			double get_bankroll();
			double get_amount_to_call();
			double get_bankroll_at_start_of_hand();
			double get_bankroll_in_small_bets();
			double get_amount_in_pot();
			double get_amount_in_pot_this_round();
			double get_amount_raiseable();
			double get_amount_callable();
			double get_bankroll_at_risk();
			double get_raise_amount(double d);
						
			int get_seat();
			int get_last_action();
			
			string get_name();
			string to_string();
			
			game_info& get_game_info();
			
			hand& get_revealed_hand();
			
			bool in_game();
			bool is_allin();
			bool is_committed();
			bool is_sitting_out();
			bool is_active();
			bool is_folded();
			bool is_button();
			bool has_acted_this_round();
			bool has_enough_to_raise();					
	}
}

#endif