
// a program to determine if a number is positive, negative or zero
 

 #include <iostream>
 using namespace std; // cout, cin, endl

 int main() {
    int num;//declaration initialization.

// (prompting the user)
    cout<< "Enter number "<<endl;
    cin>>num;

   
    if ( num > 0){
        cout<<"the number is positive"<<endl;
    }

    else if (num < 0) {
        cout<<"the number is negative"<<endl;
    }
    else {
        cout<<"the number is zero"<<endl;
    }

    return 0;
 }