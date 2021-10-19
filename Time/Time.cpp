#include <iostream>
#include <cmath>
using namespace std;

void time(int h, int m)
{
    cout << "Time is " << h << ":" << m;
}

int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    time(hour,minute);
}
