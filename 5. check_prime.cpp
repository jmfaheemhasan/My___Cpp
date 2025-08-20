
#include <iostream>
using namespace std;

int main() {
    int f, i;


    bool isPrime = true;


    cout << "Enter a positive integer: ";
    cin >> f;

    
    if (f<= 1) 
    
    {
        isPrime = false;

    } else 
    
    
    {
    
        for (i = 2; i < f; i++) {
            if (f % i == 0) 
                isPrime = false;
                break;
            
        }




    }

    if (isPrime)
        cout << f << " is a prime number." << endl;


    else


        cout << f << " is not a prime number." << endl;



    return 0;


}
