#ifndef __HAND_EVAL_H_INCLUDE__
#define __HAND_EVAL_H_INCLUDE__

#include "hand.h"

namespace com.biotools.meerkat
{
	class hand_eval
	{
		public:	
			int rank_hand(hand& h)  = 0;
			int rank_hand7(hand& h) = 0;
			int rank_hand6(hand& h) = 0;
			int rank_hand5(hand& h) = 0;
	}
}

#endif