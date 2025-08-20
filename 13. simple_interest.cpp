
#include <iostream>
using namespace std;

int main()


{
    float p, r, t, si;

    cout << "Enter P value: ";
    cin >> p;

    cout << "Enter R of i: ";
    cin >> r;

    cout << "Enter T (in years): ";
    cin >> t;

    // Formula: SI = (P × R × T) / 100



    si = (p * r * t) / 100;

    cout << "Simple Interest = " << si << endl;



    return 0;


    
}
