/*
Author: Egan Ombaka
Date: 6/10/2024
This is a c++ function that returns a sum of two numbers
*/

#include<iostream>
using namespace std;
double sum_calculation(int a, int b);

//function to calculate the sum of the two numbers
double sum_calculation(int a, int b){
    double sum; //declaring the two numbers a the variable to be returned

    //calcuating the sum
    sum = a + b;

    return sum;//returning the answer
}

int main(){
    int a,b,ans_sum;//declaring the variables

    //ask the user to the variables
    cout<<"Enter a"<< endl;
    cin>>a;

    cout<<"Enter b"<< endl;
    cin>>b;

    ans_sum = sum_calculation( a,b);// calling the sum_calculation function

    //printing out the answer...
    cout<<"the sum of a and b is : "<<ans_sum << endl;

}