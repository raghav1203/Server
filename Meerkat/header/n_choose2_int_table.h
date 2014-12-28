#ifndef __N_CHOOSE2_INT_TABLE_H_INCLUDE__
#define __N_CHOOSE2_INT_TABLE_H_INCLUDE__

namespace com.boitools.meerkat.util
{
	class n_choose2_int_table
	{
		public:
			int values[];
		
			n_choose2_int_table(int n);
			~n_choose2_int_table();
			
			void init_table(int val);
			const int get_value(int index);
			void set_value(int index, int val);
			const int length();
			const int get_index(int x, int y);
			const int get(int x, int y);
			const void set(int x, int y);
			int[] get_values();
	}
}

#endif