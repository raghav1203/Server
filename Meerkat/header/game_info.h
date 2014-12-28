#ifndef __GAME_INFO_H_INCLUDE__
#define __GAME_INFO_H_INCLUDE__

#include <string>
#include <list>

namespace com.biotools.meerkat
{
	class game_info
	{
		public:
			string get_log_directory() = 0;
			string get_game_id() = 0;
			int get_stage() = 0;
			
			bool is_pre_flop() = 0;
			bool is_post_flop() = 0;
			bool is_flop() = 0;
			bool is_turn() = 0;
			bool is_river() = 0;
			
			double get_ante() = 0;
			double get_small_blind_size() = 0;
			double get_big_blind_size() = 0;
			double get_current_bet_size() = 0;
			
			int next_seat(int i) = 0;
			int next_player(int i) = 0;
			int previous_player(int i) = 0;
			int next_active_player(int i) = 0;
			
			hand& get_board() = 0;
			double get_total_pot_size() = 0;
			double get_main_pot_size() = 0;
			double get_eligible_pot(int i) = 0;
			
			int get_num_side_pots() = 0;
			double get_side_pot_size(int i) = 0;
			
			int get_button_seat() = 0;
			int get_small_blind_seat() = 0;
			int get_big_blind_seat() = 0;
			int get_current_player_seat() = 0;
			int get_num_players() = 0;			
			int get_num_active_players() = 0;			
			int get_number_of_allin_players() = 0;			
			int get_num_active_players_not_allin() = 0;			
			int get_num_to_act() = 0;			
			int get_unacted() = 0;			
			int get_num_seats() = 0;			
			int get_stakes() = 0;			
			
			void get_players_in_pot(double d, list<player_info>& out) = 0;
			
			player_info get_player(int i) = 0;
			player_info get_player(string s) = 0;
			string get_player_name(int i) = 0;
			string get_player_seat(string s) = 0;
			
			double get_bets_to_call(int i) = 0;
			double get_amount_to_call(int i) = 0;
			double get_bankroll(int i) = 0;
			double get_bankroll_at_risk(int i) = 0;
			
			bool can_raise(int i) = 0;
			bool in_game(int i) = 0;
			bool is_active(int i) = 0;
			bool is_committed(int i) = 0;
			bool is_game_over() = 0;
			bool is_no_limit() = 0;
			bool is_fixed_limit() = 0;
			bool is_pot_limit() = 0;
			bool is_simulation() = 0;
			bool is_zip_mode() = 0;
			bool is_reverse_blinds() = 0;
			
			int get_num_winners() = 0;
			int get_num_raises() = 0;
			double get_min_raise() = 0;
			double get_rake() = 0;
	}
}
#endif