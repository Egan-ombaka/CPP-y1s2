/*
By: Egan Ombaka
Date: 26/09/2024
A C++ function that returns the simple interest
*/

#include<iostream>
using namespace std;
int simpleinterest(int p, int r, int t);

int main(){
    int ans_si, p, r, t;

    cout<<"Enter the principle, rate, time";
    cin>>p>>r>>t;

    ans_si = simpleinterest(p,r,t);
    cout<<" The simple intrest is "<<ans_si <<endl;


    return 0;
}


int simpleinterest(int p, int r,int t){
    int si;

    si = (p * r * t) /100;

    return si;
}