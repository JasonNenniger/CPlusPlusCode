// Jason Nenniger
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("taxiDir_Rev.txt");
	fout.open("TaxiCost.txt");
    int n, counter;
    double d1, d2, distanceN, distanceS, distanceE, distanceW, distanceVertical, distanceHorizontal, distanceDiagonal, distanceLoop, cost, aprilDistance, aprilCost, combinedCost, combinedDistance;
	char h1, h2;
	
	fout << "# Of Stops  " << "Distance  " << "Cost  " << "Total Distance  " << "Total Cost  " <<endl;
    
    if(fin) {	
		while (fin >> n) {
			distanceVertical = 0;
			distanceHorizontal = 0;
			distanceN = 0;
			distanceE = 0;
			distanceS = 0;
			distanceW = 0;
			distanceDiagonal = 0;
			distanceLoop = 0;
			
			for (int i = 1; i <=n; i++) {
				fin >> d1 >> h1 >> d2 >> h2;
			
				distanceDiagonal += (sqrt(pow(d1,2) + pow(d2,2)));
				if(h1 == 'N') 
					distanceN += d1;
				else
					distanceS += d1;
					
				if(h2 == 'E')
					distanceE += d2;
				else 
					distanceW += d2;
			}
			counter = counter + 1;

			if(distanceN >= distanceS)
				distanceVertical = distanceN - distanceS;
			
			if(distanceN < distanceS)
				distanceVertical = distanceS - distanceN;
				
			if(distanceE >= distanceW)
				distanceHorizontal = distanceE - distanceW;
				
			if(distanceE < distanceW)
				distanceHorizontal = distanceW - distanceE;
			
			distanceLoop = distanceDiagonal + (sqrt(pow(distanceHorizontal,2) + pow(distanceVertical,2)));	
			cost = (7.5*n) + (3.25*distanceLoop);
			
			aprilDistance += distanceLoop;
			aprilCost += cost;
			
			if (counter <=4)
			{
				combinedCost += cost;
				combinedDistance += distanceLoop;	
			}
			
			fout <<"    "<< n << "       "; 
			fout << setw(4);
			fout << distanceLoop << " " << cost << "   " << combinedDistance << "         " << combinedCost << " " <<endl;
		}
		fout << "-----------------------------------------------------" << endl;
		fout<<"The total amount of money earned is: $" << aprilCost <<endl;
		fout<<"The total distance travelled is: " << aprilDistance << "km" <<endl;
		
		
	}
	fout.close();
	fin.close();
	return 0;
	
}

/*

# Of Stops  Distance  Cost  Total Distance  Total Cost  
    1       20.4    73.8      20.4            73.8 
    2       15.2111 64.4361   35.6111         138.236 
    1       14.2127 53.6912   49.8238         191.927 
    8       75.3512 304.891   125.175         496.819 
    4       49.5847 191.15   125.175         496.819 
    1       23.5601 84.0704   125.175         496.819 
    5       30.5802 136.886   125.175         496.819 
    6       48.0207 201.067   125.175         496.819 
    4       43.1251 170.157   125.175         496.819 
    4       38.0698 153.727   125.175         496.819 
    8       59.2586 252.59   125.175         496.819 
    8       102.463 393.004   125.175         496.819 
    8       110.527 419.212   125.175         496.819 
    5       46.2923 187.95   125.175         496.819 
    7       71.9599 286.37   125.175         496.819 
    3       35.8356 138.966   125.175         496.819 
    4       52.4587 200.491   125.175         496.819 
    2       30.6584 114.64   125.175         496.819 
    3       23.4105 98.5841   125.175         496.819 
    3       26.799 109.597   125.175         496.819 
    7       50.0141 215.046   125.175         496.819 
    6       62.4581 247.989   125.175         496.819 
    5       49.3481 197.881   125.175         496.819 
    6       71.9586 278.865   125.175         496.819 
    8       65.1253 271.657   125.175         496.819 
    3       48.368 179.696   125.175         496.819 
    5       59.945 232.321   125.175         496.819 
    8       70.7862 290.055   125.175         496.819 
    6       54.1969 221.14   125.175         496.819 
    5       63.3321 243.329   125.175         496.819 
    7       74.7665 295.491   125.175         496.819 
    9       71.3273 299.314   125.175         496.819 
    7       90.9119 347.964   125.175         496.819 
    8       83.7532 332.198   125.175         496.819 
    9       87.1864 350.856   125.175         496.819 
    5       65.0636 248.957   125.175         496.819 
    8       78.9824 316.693   125.175         496.819 
    4       25.2976 112.217   125.175         496.819 
    9       77.5157 319.426   125.175         496.819 
    8       91.0082 355.777   125.175         496.819 
    1       14.5134 54.6687   125.175         496.819 
    4       35.5517 145.543   125.175         496.819 
    7       89.2514 342.567   125.175         496.819 
    8       72.7215 296.345   125.175         496.819 
    1       25.1873 89.3587   125.175         496.819 
    5       46.048 187.156   125.175         496.819 
    7       64.18 261.085   125.175         496.819 
    6       38.1566 169.009   125.175         496.819 
    4       21.8855 101.128   125.175         496.819 
    1       6.01664 27.0541   125.175         496.819 
    1       21.095 76.0588   125.175         496.819 
    5       63.5849 244.151   125.175         496.819 
    7       56.1526 234.996   125.175         496.819 
    9       104.99 408.719   125.175         496.819 
    8       68.5501 282.788   125.175         496.819 
    5       49.9342 199.786   125.175         496.819 
    1       21.4009 77.053   125.175         496.819 
    6       58.8484 236.257   125.175         496.819 
    8       73.6601 299.395   125.175         496.819 
    4       42.5872 168.408   125.175         496.819 
    9       76.2031 315.16   125.175         496.819 
    9       99.9404 392.306   125.175         496.819 
    9       84.4822 342.067   125.175         496.819 
    1       24.0508 85.665   125.175         496.819 
    7       65.7528 266.197   125.175         496.819 
    9       118.15 451.488   125.175         496.819 
    9       136.871 512.33   125.175         496.819 
    3       38.9642 149.134   125.175         496.819 
    2       33.098 122.569   125.175         496.819 
    6       69.4249 270.631   125.175         496.819 
    1       3.2249 17.9809   125.175         496.819 
    8       77.8863 313.131   125.175         496.819 
    4       50.9282 195.517   125.175         496.819 
    1       3.93954 20.3035   125.175         496.819 
    3       43.4369 163.67   125.175         496.819 
    9       69.3069 292.747   125.175         496.819 
    6       53.5952 219.185   125.175         496.819 
    4       68.9967 254.239   125.175         496.819 
    9       61.1173 266.131   125.175         496.819 
    1       15.5563 58.0581   125.175         496.819 
    2       17.5954 72.1851   125.175         496.819 
    6       72.7151 281.324   125.175         496.819 
    6       63.66 251.895   125.175         496.819 
    7       97.7802 370.286   125.175         496.819 
-----------------------------------------------------
The total amount of money earned is: $18577.9
The total distance travelled is: 4680.12km


*/
