
#include <iostream>
using namespace std;

int main()

{
    int num, d1, d2, d3;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    d1 = num / 100;        
    d2 = (num / 10) % 10;  
    d3 = num % 10;        


    int result = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
