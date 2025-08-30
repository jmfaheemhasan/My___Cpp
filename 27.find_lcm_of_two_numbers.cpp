
#include <iostream>
using namespace std;

int main() 

{
    int num1, num2, maxVal;



    cout << "Enter two numbers: ";

    cin >> num1 >> num2;


    maxVal = (num1 > num2) ? num1 : num2;


   
    while (true)
    
    
    {
        if (maxVal % num1 == 0 && maxVal % num2 == 0) 
           
        cout << "LCM of " << num1 << " and " << num2 << " is: " << maxVal << endl;

            break;
        
        maxVal++;


    }

    return 0;
    
}
