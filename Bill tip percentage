#include<iostream>
#include <cstdlib>
using namespace std; 

// assuming the standard is to add tip to the subtotal after tax 
// assuming tax in ontario as 13%, can change for other locations

int main(){
	cout << "Enter the subtotal and tip percent: "; 
	float sub_total=0;
	int tip_percent=0;
	const int TAX=13;
	cin >> sub_total >> tip_percent;
	cout << "You bill total is: " << sub_total*(TAX/100.0)+sub_total*(1+(tip_percent/100.0))
	<< " CAD"<< endl;
	return EXIT_SUCCESS;
	
}

