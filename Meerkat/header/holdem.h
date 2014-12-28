#ifndef __HOLDEM_H_INCLUDE__
#define __HOLDEM_H_INCLUDE__

namespace com.biotools.meerkat
{
	class holdem
	{
		enum
		{
			PREFLOP = 0,
			FLOP,
			TURN,
			RIVER,
			SHOWDOWN,
		};
		const int MAX_PALYERS = 10;
		const int MAX_RAISES = 10;
		const int FOLD = 0;
		const int CHECK = 1;
		const int CALL = 1;
		const int BET = 2;
		const int RAISE = 2;
	}
}

#endif