#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    
    double latitude1, latitude2, longitude1, longitude2, point1x, point2x, point1y, point2y;
    double distancex, distancey, finaldistance;
    
    cout << "Enter latitude for point 1: ";
    cin >> latitude1;
    cout << "Enter longitude for point 1: ";
    cin >> longitude1;
    cout << "Enter latitude for point 2: ";
    cin >> latitude2;
    cout << "Enter longitude for point 2: ";
    cin >> longitude2;
    
    point1x = latitude1*111;
    point2x = latitude2*111;
    point1y = longitude1*111*cos(((latitude1)*(M_PI/180)));
    point2y = longitude2*111*cos(((latitude2)*(M_PI/180)));
    
    cout << "The coordinates of point 1 are: (" << point1x << ", " << point1y << ")" << endl;
    cout << "The coordinates of point 2 are: (" << point2x << ", " << point2y << ")" << endl;
    
    distancex = point2x-point1x;
    distancey = point2y-point1y;
    
    finaldistance = sqrt(pow(distancex,2) + pow(distancey,2));
    
    cout << "The distance is: " << finaldistance << " km" << endl;
    
    return 0;
}

/*
 
 Enter latitude for point 1: 32
 Enter longitude for point 1: 67.2
 Enter latitude for point 2: 34.56
 Enter longitude for point 2: 65.25
 The coordinates of point 1 are: (3552, 6325.76)
 The coordinates of point 2 are: (3836.16, 5964.64)
 The distance is: 459.515 km
 
 */
