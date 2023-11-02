#include <iostream>
using namespace std;

int main()
{
    int num_one;
    cout << "Enter num_one : ";
    cin >> num_one;

    int num_two;
    cout << "Enter num_two : ";
    cin >> num_two;

    int num_three;
    cout << "Enter num_three : ";
    cin >> num_three;

    float average = (num_one + num_two + num_three) / 3;
    cout << "Average : " << average;

    return 0;
};