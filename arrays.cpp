#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int marks[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    cout << "The content of this array are " << endl;
    for(i=0;i<10;i++)
    {
        cout<<marks[i]<<'\t';
    };
    system("pause");

    return 0;
}