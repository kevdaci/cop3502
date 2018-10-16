#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>

#ifndef PA1_H
#define PA1_H
using namespace std;
class MagicSquare{
	
	private:
		int square_dimension;
		vector<vector<int> > magic_square;
		
		void produce_numbers()
		{
			vector<int> one_d;
			bool if_dec = false;
			int number;
			
			for(int i = 0; i < square_dimension; ++i){
				for(int j = 0; j < square_dimension; j++){
					number = rand()%10;
					//while(
					for(int k = 0; k < j; k++){
						if(number == one_d[k])
							if_dec = true;
							
					}
						if(!if_dec)
							one_d.push_back(number);
						
				}
				magic_square.push_back(one_d);
				one_d.clear();
			}
			
		}
		
	public:
		MagicSquare(int dimesions)
		{
			square_dimension = dimesions;
		}
		
		
		void printSquare()
		{
			produce_numbers();
			
			for(unsigned int i = 0; i < magic_square.size(); ++i){
				for(unsigned int j = 0; j < magic_square[i].size(); j++){
					cout<<magic_square[i][j]<< "  ";
				}
				cout << endl;
			}
			
		}
};

#endif
