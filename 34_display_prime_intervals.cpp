#include <iostream>
using namespace std;

int main()


{
    int low, high, i, j, isPrime;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;



    cout << "Prime numbers between " << low << " and " << high << " are: ";



    for(i = low; i <= high; i++) {


        if(i < 2) continue;   
        isPrime = 1;          

        for(j = 2; j < i; j++)
        
        {
            if(i % j == 0) 
                isPrime = 0;
                break;
            
        }

        if(isPrime == 1)
            cout << i << " ";
    }

    return 0;


}

