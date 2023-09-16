#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	float side_length = 0;
	cout << "What is the side length of the base of the pyramid? ";
	cin >> side_length; 
	
	float height = 0.0;
	cout << "What is the height of the base of the pyramid? ";
	cin >> height; 		
	cout << "The volume of the pyramid is " << (height*side_length*side_length)/3 << endl;
	return EXIT_SUCCESS;

}

/*
What is the side length of the base of the pyramid? 3.2
What is the height of the base of the pyramid? 4.5678
The volume of the pyramid is 15.5914

--------------------------------
Process exited after 10.02 seconds with return value 0
Press any key to continue . . .

*/
