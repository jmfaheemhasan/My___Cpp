
#include <iostream>
using namespace std;
int main() 




{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;




    
    if (ch >= 'A' && ch <= 'Z') 
        ch = ch + 32; 
    





    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        cout << "The character is a Vowel." << endl;
    



    else if ((ch >= 'a' && ch <= 'z')) 
        cout << "The character is a Consonant." << endl;
    


    else 
        cout << "Invalid input! Please enter an alphabet." << endl;
    

    return 0;



}
