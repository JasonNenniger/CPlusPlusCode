// Jason Nenniger
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	double subtotal, HST, tip, total;
	
	cout << "Enter Subtotal: $";
	cin >> subtotal;

	HST = 0.13*subtotal;
	tip = 0.15*subtotal;
	total = subtotal + HST + tip;
	
	cout << "The HST is: $" << HST << endl;
	cout << "The tip is: $" << tip << endl;
	cout << "The total amount is: $" << total << endl;
	
}

/*
Enter subtotal: $23.56
The tax is: $3.0628
The tip is: $3.534
The total is: $30.1568
*/
