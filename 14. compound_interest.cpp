
#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    
    float p;  

    float r; 

    float t;  

    float ci;         


    cout << "Enter P amount: ";
    cin >> p;
    cout << "Enter R of i (in %): ";
    cin >> r;
    cout << "Enter Time (in years): ";
    cin >> t;

    
    ci = p * pow(1 + r/100, t) - p;

    
    cout << "Compound Interest = " << ci << endl;


    return 0;

}
