
#include <iostream>
using namespace std;

int main()


{
    float length, width, area, perimeter;

  
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    
    area = length * width;
    perimeter = 2 * (length + width);




   
    cout << "Area of rectangle = " << area << endl;
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;


    
}
