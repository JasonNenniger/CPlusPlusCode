#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>


using namespace std;

int main(){
    float newBalance, lastBalance , payment;
    int month=0;
    
    cout << "Input credit card balance " << endl;
    cin >> newBalance;
    
    while (newBalance > 0){
        month++;
        lastBalance = newBalance;
        newBalance = lastBalance * 1.02;
        
        if (newBalance > 10){
            payment = lastBalance * 0.03;
            if (payment <= 10){
                payment = 10;
            }
        }
        else{
            payment = newBalance;
        }
        
        newBalance = newBalance - payment;
        cout << "Month " << month << " payment: $" << payment << ", remaining balance $" << newBalance << endl;
    }
    return 0;
}

/*
 Test Case
 
 Input credit card balance
 400
 Month 1 payment: $12, remaining balance $396
 Month 2 payment: $11.88, remaining balance $392.04
 Month 3 payment: $11.7612, remaining balance $388.12
 Month 4 payment: $11.6436, remaining balance $384.238
 Month 5 payment: $11.5272, remaining balance $380.396
 Month 6 payment: $11.4119, remaining balance $376.592
 Month 7 payment: $11.2978, remaining balance $372.826
 Month 8 payment: $11.1848, remaining balance $369.098
 Month 9 payment: $11.0729, remaining balance $365.407
 Month 10 payment: $10.9622, remaining balance $361.753
 Month 11 payment: $10.8526, remaining balance $358.135
 Month 12 payment: $10.7441, remaining balance $354.554
 Month 13 payment: $10.6366, remaining balance $351.008
 Month 14 payment: $10.5303, remaining balance $347.498
 Month 15 payment: $10.4249, remaining balance $344.023
 Month 16 payment: $10.3207, remaining balance $340.583
 Month 17 payment: $10.2175, remaining balance $337.177
 Month 18 payment: $10.1153, remaining balance $333.805
 Month 19 payment: $10.0142, remaining balance $330.467
 Month 20 payment: $10, remaining balance $327.077
 Month 21 payment: $10, remaining balance $323.618
 Month 22 payment: $10, remaining balance $320.091
 Month 23 payment: $10, remaining balance $316.492
 Month 24 payment: $10, remaining balance $312.822
 Month 25 payment: $10, remaining balance $309.079
 Month 26 payment: $10, remaining balance $305.26
 Month 27 payment: $10, remaining balance $301.365
 Month 28 payment: $10, remaining balance $297.393
 Month 29 payment: $10, remaining balance $293.341
 Month 30 payment: $10, remaining balance $289.207
 Month 31 payment: $10, remaining balance $284.992
 Month 32 payment: $10, remaining balance $280.691
 Month 33 payment: $10, remaining balance $276.305
 Month 34 payment: $10, remaining balance $271.831
 Month 35 payment: $10, remaining balance $267.268
 Month 36 payment: $10, remaining balance $262.613
 Month 37 payment: $10, remaining balance $257.866
 Month 38 payment: $10, remaining balance $253.023
 Month 39 payment: $10, remaining balance $248.083
 Month 40 payment: $10, remaining balance $243.045
 Month 41 payment: $10, remaining balance $237.906
 Month 42 payment: $10, remaining balance $232.664
 Month 43 payment: $10, remaining balance $227.317
 Month 44 payment: $10, remaining balance $221.864
 Month 45 payment: $10, remaining balance $216.301
 Month 46 payment: $10, remaining balance $210.627
 Month 47 payment: $10, remaining balance $204.84
 Month 48 payment: $10, remaining balance $198.936
 Month 49 payment: $10, remaining balance $192.915
 Month 50 payment: $10, remaining balance $186.773
 Month 51 payment: $10, remaining balance $180.509
 Month 52 payment: $10, remaining balance $174.119
 Month 53 payment: $10, remaining balance $167.601
 Month 54 payment: $10, remaining balance $160.953
 Month 55 payment: $10, remaining balance $154.172
 Month 56 payment: $10, remaining balance $147.256
 Month 57 payment: $10, remaining balance $140.201
 Month 58 payment: $10, remaining balance $133.005
 Month 59 payment: $10, remaining balance $125.665
 Month 60 payment: $10, remaining balance $118.178
 Month 61 payment: $10, remaining balance $110.542
 Month 62 payment: $10, remaining balance $102.753
 Month 63 payment: $10, remaining balance $94.8079
 Month 64 payment: $10, remaining balance $86.7041
 Month 65 payment: $10, remaining balance $78.4381
 Month 66 payment: $10, remaining balance $70.0069
 Month 67 payment: $10, remaining balance $61.407
 Month 68 payment: $10, remaining balance $52.6352
 Month 69 payment: $10, remaining balance $43.6879
 Month 70 payment: $10, remaining balance $34.5616
 Month 71 payment: $10, remaining balance $25.2529
 Month 72 payment: $10, remaining balance $15.7579
 Month 73 payment: $10, remaining balance $6.07309
 Month 74 payment: $6.19455, remaining balance $0
 
 --------------------------------
 Process exited after 0.9599 seconds with return value 0
 Press any key to continue . . .
 */

