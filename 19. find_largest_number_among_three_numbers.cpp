#include <iostream>
using namespace std;

int main()

{
    int a, b, c, largest;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    largest = a; 
    if (b > largest) 
        largest = b; 
    if (c > largest) 
        largest = c; 
    

    cout << "The largest number is: " << largest << endl;



    return 0;


    
}
