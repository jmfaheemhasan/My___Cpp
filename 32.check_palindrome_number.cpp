
#include <iostream>
using namespace std;

int main() 










{
    int num, original, remainder, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;  

    while (num != 0) {
        remainder = num % 10;              
        reversed = reversed * 10 + remainder; 
        num = num / 10;                     
    }

    if (original == reversed)
        cout << original << " is a Palindrome number." << endl;
    else
        cout << original << " is NOT a Palindrome number." << endl;

    return 0;











    
}
