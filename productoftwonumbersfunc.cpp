// a function to find the product o two numbers

#include<iostream>
using namespace std;
int product(int a, int b);
int simpleinterest(int p, int r, int t);

int main(){
    int ans, a, b  ,ans_si, p, r, t;
    //cout<<"Enter the two number"<< endl;
    //cin>>a>>b;

    cout<<"Enter the principle, rate, time";
    cin>>p>>r>>t;

   // ans = product(a,b);
    ans_si = simpleinterest(p,r,t);

    cout<<" The simple intrest is "<<ans_si <<endl;

    //cout<<" The answer is "<< ans<< endl;

    return 0;
}

int product(int a, int b){
    int c;

    c = a * b;
    return c;
}


int simpleinterest(int p, int r,int t){
    int si;

    si = (p * r * t) /100;

    return si;
}