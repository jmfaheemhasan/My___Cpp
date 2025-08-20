
#include <iostream>
using namespace std;

int main() 


{
    float real1, imag1, real2, imag2, realSum, imagSum;

    cout << "Enter first complex number (real and imaginary part): ";
    cin >> real1 >> imag1;

    cout << "Enter second complex number (real and imaginary part): ";
    cin >> real2 >> imag2;
    realSum = real1 + real2;
    imagSum = imag1 + imag2;



    
    cout << "Sum = " << realSum << " + " << imagSum << "i" << endl;

    return 0;
}


