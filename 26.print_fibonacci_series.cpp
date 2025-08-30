
#include <iostream>
using namespace std;

int main() 


{
    int n;

    cout << "Enter the number of terms: ";

    cin >> n;


    int t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {

        cout << t1 << " ";

        nextTerm = t1 + t2;

        t1 = t2;

        t2 = nextTerm;

    }

    cout << endl;

    return 0;
    
}
