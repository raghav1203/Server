#ifndef __DECK_H_INCLUDE__
#define __DECK_H_INCLUDE__

#include <string>
#include <functional>

namespase com.biotools.meerkat{

class deck{
	public:
		const int NUM_CARDS = 52;
		deck();
		deck(long seed);
		deck(deck& d);
		~deck();
		
		set_seed(long seed);
		reset();
		shuffel();
		card& deal();
		card& deal_card();
		int find_card(card& c);
		int find_card(int c_index);
		bool in_deck(card& c);
		void extract_card(int c_index);
		void extract_card(card& c);
		card& extract_random_card();
		card& pick_random_card();
		void replace_card(card& c);
		void replace_card(int c_index);
		int get_top_card_index();
		card& get_top_card();
		int cards_left();
		card& get_card(int c_index);
		string to_string();
		
		
	private:
		std::default_random_engine generator;
		std::uniform_int_distribution<int> distribution(0,52);
		auto next_random = std::bind(distribution,generator);
		
		card cards[52];
		int card_map[52];
		int position;
		
};
}
#endif