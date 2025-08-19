
#include <iostream>
using namespace std;

int main() 
{
    int fahim, mahir, temp;

    cout << "Enter first number: ";
    cin >> fahim;

    cout << "Enter second number: ";
    cin >> mahir;

    temp = fahim;
    fahim= mahir;
    mahir = temp;

    cout << "After swapping:" << endl;
    cout << "First number = " << fahim << endl;
    cout << "Second number = " << mahir << endl;

    return 0;
}
