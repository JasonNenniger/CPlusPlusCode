// Jason Nenniger
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    
    double m;
    double r1;
    double r2;
    double moi;
    
    cout << "Enter mass: ";
    cin >> m;
    cout << "Enter radius of sphere: ";
    cin >> r1;
    cout << "Enter hollow cavity radius: ";
    cin >> r2;
    
    moi = ((2*m)/5)*((pow(r2,5)-pow(r1,5))/(pow(r2,3)-pow(r1,3)));
    
    cout << "The moment of inertia is: " << moi;
    
    return 0;
}

/*
Enter mass: 50
Enter radius of sphere: 10
Enter hollow cavity radius: 5
The moment of inertia is: 2214.29
*/
