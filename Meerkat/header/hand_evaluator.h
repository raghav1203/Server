#ifndef __HAND_EVALUATOR_H_INCLUDE__
#define __HAND_EVALUATOR_H_INCLUDE__

#include "hand_eval.h"
#include "hand.h"
#include "card.h"
#include "n_choose2_int_table.h"

namespace com.biotools.meerkat
{
	class hand_evaluator
	{
		public:
			static hand_eval eval;	
			static const int rank_hand7 eval;	
			static const int rank_hand6 eval;	
			static const int rank_hand5 eval;	
			
			static int rank_hand(int c1, int c2, hand& h);
			static int rank_hand(card& c1, card& c2, hand& h);
			static int compare_hands(hand& h1, hand& h2);
			static int compare_hands(int rank1, hand& h2);
			static n_choose2_int_table get_ranks(hand& board);
			static double hand_rank(card& c1, card& c2, hand& h, int np);
			static double hand_rank(card& c1, card& c2, hand& h);
			static double hand_rank(card& c1, card& c2, n_choose2_int_table& rank_cache);
			static bool is_the_nuts(card& c1, card& c2,hand& h, n_choose2_int_table& rank_cache);
			
			static hand_eval& get_hand_eval();
			static void set_hand_eval(hand_eval& he);		
	}
}

#endif