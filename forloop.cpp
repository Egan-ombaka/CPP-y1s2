/*
By: Egan Ombaka
Date: 20/9/2024

This a c++ programm that prints all numbers from 1 to 100  and finds their sum using a while loop
*/

#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;

    for (i=1; i<=100; i++){
        cout <<i<<endl;
        sum = sum + i;
        }

    cout << " The sum is " <<sum <<endl;
    return 0;
}