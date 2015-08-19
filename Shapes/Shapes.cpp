#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    double side1, side2, angle;
    int n;
    
    ifstream fin("stones.txt");
    ofstream fout("paving stone.txt");
    fin >> n;
    for (int i = 1; i <=n; i++ ) {
        
        fin >> side1;
        fin >> side2;
        fin >> angle;
        
        
        fout << "The length of side 1 is: " << side1 << endl;
        fout << "The length of side 2 is: " << side2 << endl;
        fout << "The angle is: " << angle << endl;
        
        if (side1 <= 0) {
            fout << "INVALID SIDE 1" << endl;
            fout << endl;
            //return 0;
        }
        
        if (side2 <= 0) {
            fout << "INVALID SIDE 2" << endl;
            fout << endl;
            //return 0;
        }
        
        if (angle > 180 || angle <= 0) {
            fout << "INVALID ANGLE" << endl;
            fout << endl;
            //return 0;
        }
        
        if (angle >= 89.5 && angle <=90.5)
            angle = 90;
        if (side1 == side2 - 0.1 || side1 == side2 + 0.1)
            side1 = side2;
        
        if (side1 >=0 && side2 >= 0 && angle > 0 && angle < 180) {
            if (angle == 90) {
                if (side1 == side2 || side1 == (side2 +1) || side1 == (side2 -1)) {
                    fout << "The paving stone is a square" << endl;
                }
                else
                    fout << "The paving stone is a rectangle" << endl;
            }
            else if (angle != 90) {
                if (side1 == side2 || side1 == (side2 +1) || side1 == (side2 -1)) {
                    fout << "The paving stone is a rhombus" << endl;
                }
                else if (side1 != side2 || side1 != (side2 +1) || side1 != (side2 -1)) {
                    fout << "The paving stone is a parallelogram" << endl;
                }
            }
            
            fout << endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}


/*
 
 Input File
 
 8
 20.8 20.8 90
 20.72 10.897 90
 20.36 20.36 80.23746
 20.18 10.98567 80.84729
 -10 100 90
 10 -87 90
 10 0.8882 -108
 10 0.8882 189
 
 File Output
 
 The length of side 1 is: 20.8
 The length of side 2 is: 20.8
 The angle is: 90
 The paving stone is a square
 
 The length of side 1 is: 20.72
 The length of side 2 is: 10.897
 The angle is: 90
 The paving stone is a rectangle
 
 The length of side 1 is: 20.36
 The length of side 2 is: 20.36
 The angle is: 80.2375
 The paving stone is a rhombus
 
 The length of side 1 is: 20.18
 The length of side 2 is: 10.9857
 The angle is: 80.8473
 The paving stone is a parallelogram
 
 The length of side 1 is: -10
 The length of side 2 is: 100
 The angle is: 90
 INVALID SIDE 1
 
 The length of side 1 is: 10
 The length of side 2 is: -87
 The angle is: 90
 INVALID SIDE 2
 
 The length of side 1 is: 10
 The length of side 2 is: 0.8882
 The angle is: -108
 INVALID ANGLE
 
 The length of side 1 is: 10
 The length of side 2 is: 0.8882
 The angle is: 189
 INVALID ANGLE
 
 */
