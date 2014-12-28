#ifndef __HEND_H_INCLUDE__
#define __HEND_H_INCLUDE__

#include <string>

namespace com.biotools.meerkat
{
	class hand
	{
		public:
			const int MAX_CARD = 7;
			hand();
			hand(string cs);
			hand(hand& h);
			~hand();
			
			void clear();
			const int size();
			void remove_card();
			void make_empty();
			
			bool add_card(card& c);
			bool add_card(int i);
			
			card& get_card(int pos);
			int get_card_index(int pos);
			int get_last_card_index(int pos);
			
			int set_card(int pos, card& c);
			int set_card(int pos, int c_index);
			
			void get_card_array(int* out);
			void sort();
			bool equals(hand& h);
			
			string to_string();
			string flashing_string();
			string contains(card& c);
			
			void add_hand(hand& h);
			void clear_bad_cards();
			void remove_card(int i);
			string card_string(card& c1, card& c2);
			const card& get_last_card();
			const card& get_first_card();
			const card& get_second_card();
			
			
			
		private:
			int cards[];
	}
}

#endif