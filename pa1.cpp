#include "pa1.h"
using namespace std;




int main(){
	
	int dimensions;
	cout << "Please put your dimension of the square: ";
	cin >> dimensions;
	MagicSquare square(dimensions);	
	square.printSquare();
	return 0;
}
