#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "enter length of rectangle (cm):";
    cin >> length;

    int width;
    cout << "enter width of rectangle (cm):";
    cin >> width;

    int area, perimeter;

    area = length * width;
    perimeter = (length + width) * 2;

    cout << "the area is " << area << endl;
    cout << "the perimeter is " << perimeter;

    return 0;
};