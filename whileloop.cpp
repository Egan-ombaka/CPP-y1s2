/*
By: Egan Ombaka
Date: 20/9/2024

This a c++ programm that prints all numbers from 1 to 100  and finds their sum using a while loop
*/

#include<iostream>
using namespace std;


int main(){
    int i=1 , sum = 0;
    while(i<=100){
        cout <<i<< endl;
        sum += i;
        i++;

    }
    cout << "The sum of the numbers from 1 to 100 is: " <<sum << endl;
    return 0;
}