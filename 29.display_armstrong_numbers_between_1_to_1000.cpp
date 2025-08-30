
#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, result;

    cout << "Armstrong numbers between 1 and 1000 are:" << endl;

    for (num = 1; num <= 1000; num++) {
        d1 = num / 100;         
        d2 = (num / 10) % 10;   
        d3 = num % 10;        

        result = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);

        if (result == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
