#ifndef __ACTION_H_INCLUDE__
#define __ACTION_H_INCLUDE__

#include <string>
namespase com.biotools.meerkat{

class action{
	public:
		enum ACTION
		{
			INVALID = -1,
			FOLD ,
			CHECK,
			BET,
			CALL,
			BET,
			RAISE,
			SMALL_BLIEND,
			BIG_BLIEND,
			POST_BLIEND,
			ALLIN_PASS,
			MUCK,
			POST_ANTE,
			SIT_OUT,
			POST_DEAD_BLIND,
		};
		action();
		~action();
		
		double get_amount();
		double get_to_call();
		double get_type();
		double round_to_cents(double value);
		
		static action& post_ante(double to_post);
		static action& sit_out();
		
		static action& post_blind_action(double to_post);
		static action& post_dead_action(double to_post);
		
		static action& small_blind_action(double to_post);
		static action& big_blind_action(double to_post);
		
		static action& fold_action(game_info& gi);
		static action& fold_action(double to_call);
		
		static action& check_or_fold_action(game_info& gi);
		static action& check_or_fold_action(double to_call);
		
		static action& muck_action();
		static action& check_action();
		
		static action& call_action(game_info& gi);
		static action& call_action(double to_call);
		
		static action& bet_action(game_info& gi);
		static action& bet_action(double amount_to_raise);
		
		static action& raise_action(game_info& gi);
		static action& raise_action(game_info& gi, double amount_to_raise);
		static action& raise_action(double to_call, double amount_to_raise);
	
		static action& allin_pass_action();
		
		static action& get_action(int a, double to_call, double amount);
		
		bool is_fold();
		bool is_fold_or_muck();
		bool is_check();
		bool is_call();
		bool is_call_or_check();
		bool is_bet();
		bool is_raise();
		bool is_bet_or_raise();
		bool is_blind();
		bool is_post();
		bool is_post_or_dead_blind();
		bool is_small_blind();
		bool is_big_blind();
		bool is_allin_pass();
		bool is_sitout();
		bool is_muck();
		bool is_ante();
		bool is_volutary();
		bool equivalent(action& a);
		
		string to_string();
		string to_string2();
		
	private:
		short type = 0;
		double amount = 0.0D;
		double to_call = 0.0D;
		
		rounds_to_cents(double value);
		
};

#endif