/*
By: Egan Ombaka
Date: 22/9/2024
This is a simple C++ programm to print and calculate the sum of all the numbers fom 1 to 100
*/
#include<iostream>
using namespace std;

int main(){
    int number=1, sum = 0;

    do
    {
        cout << number << endl;
        sum += number;
        number++;

    } while (number <= 100);
    
    cout << " The sum of all numbers btn 1 and 100 is: " << sum << endl;

    return 0;
}