#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	int length_chains = 0;
	cout << "What is the number of chains? ";
	cin >> length_chains; 
	
	int chains_in_feet= length_chains*66;
	cout << "Unit conversions: \n"<< chains_in_feet << " ft."<< "\n";
	
	int chains_in_yards= length_chains*22;
	cout << chains_in_yards << " yards.";
		
	float chains_in_links = length_chains/100.0;
	float chains_in_rods=length_chains/4;
	float chains_in_furlongs=length_chains/10.0;
	cout << "\n" << chains_in_rods << " rods \n" << chains_in_links << "links."; 
	cout << "\n" << chains_in_furlongs << " furlodngs." << endl;
	
	
	return EXIT_SUCCESS;
}

/*
What is the number of chains? 25
Unit conversions:
1650 ft.
550 yards.
6 rods
0.25links.
2.5 furlodngs.

--------------------------------
Process exited after 1.616 seconds with return value 0
Press any key to continue . . .

*/
