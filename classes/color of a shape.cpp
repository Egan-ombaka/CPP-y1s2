/*
By: Egan Ombaka
*/

#include<iostream>
#include<string>
using namespace std;

//Base class
class Shape{
    protected:
    string color;

    public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }
};

int main(){
    Shape shape; //creating on object shape

    shape.setColor("Red");

    cout << "The color of the shape is: "<< shape.getColor() <<endl;

    return 0;
}