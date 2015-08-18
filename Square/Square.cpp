// Jason Nenniger
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ofstream fout("square.txt");
    
    int a;
    
    cout << "Enter the number to be squared: " ;
    cin >> a;
    cout << "The square of " << a << " is " << a*a << endl;
    fout << "The square of " << a << " is " << a*a << endl;
    
    fout.close();
    return 0;
}
