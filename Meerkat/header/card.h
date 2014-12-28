#ifndef __CARD_H_INCLUDE__
#define __CARD_H_INCLUDE__

#include <string>

namespace com.biotools.meerkat
{
class card{
	public:
		enum suit{
			SPADE = 0,HEART, DIAMONDS, CLUBS,
		};
		enum rank{
			BAD_CARD = -1,
			TWO,
			THREE,
			FOUR,
			FIVE,
			SIX,
			SEVEN,
			EIGHT,
			NINE,
			TEN,
			JACK,
			QEEN,
			KING,
			ACE,
		};
		
	const short NUM_SUITS = 4;
	const short NUM_RANKS = 13;
	const short NUM_CARDS = 52;
	
	card(short index);
	card(string index);
	card(short rank, short suit);
	~card();
	
	bool equals(card& c);
	
	void set_index(short index){this.index = index;}
	const short get_index(){return this.index;}
	short to_index(int rank, int suit){ NUM_RANKS * suit + rank;}	
	
	void set_card(int rank, int suit);
	
	short get_rank(){return this.index % NUM_RANKS;}
	static const short get_rank(int index){return index % NUM_RANKS;}

	short get_suit(){return this.index / NUM_RANKS;}
	
	string to_string();
	
	short get_rank_from_char();
	short get_suit_from_char();
	
	short get_suit();
	short get_rank();
	bool is_valid(){(this.index >= 0) && (this.index < NUM_CARDS)}
	private:
		short index;
		short chars_to_index(char rank, char suit); 
};
};
#endif