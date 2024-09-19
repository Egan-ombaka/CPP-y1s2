#include<iostream>

using namespace std;
int main()
{
    int number;

    cout << "Enter the Number" << endl;
    cin >> number;

    if( number > 0)
       cout << number << " is a Positive Number" << endl;
    else if (number < 0)
       cout << number << " is a negative Number"  << endl;
    else
       cout << number << " is Zero" << endl;

    return 0;

}