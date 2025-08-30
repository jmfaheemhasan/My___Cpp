
#include <iostream>
using namespace std;

int main() {
    int low, high, num, temp, remainder, result;

    cout << "Enter lower interval: ";
    cin >> low;
    cout << "Enter upper interval: ";
    cin >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are:" << endl;

    for (num = low; num <= high; num++) {
        temp = num;
        result = 0;

        
        while (temp != 0) {
            remainder = temp % 10;
            result += remainder * remainder * remainder;
            temp /= 10;
        }

        if (result == num)
            cout << num << " ";
    }

    cout << endl;
    return 0;
}
