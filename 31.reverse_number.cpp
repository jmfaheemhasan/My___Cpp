
#include <iostream>
using namespace std;

int main()



{
    int num,     remainder,     reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    
    
    {
        remainder = num % 10;              
        reversed = reversed * 10 + remainder; 
        num = num / 10;                    
    }

    cout << "Reversed number = " << reversed << endl;

    return 0;
}
