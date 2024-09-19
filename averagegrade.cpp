/*
By : Egan Ombaka
Date : 19/9/2024
A c++ programm for grading uusing the students average grade
*/

#include<iostream>

using namespace std;

int main()
{
    //Declaration
    int math, phyc ,eng, average;

    //user input

    cout << " Enter your math score " << endl;
    cin >> math;

    cout << " Enter your Physics score " << endl;
    cin >> eng;

    cout << " Enter your English score " << endl;
    cin >> phyc;

    //average calculation

    average = (eng + math + phyc) /3;
    cout << " your average score = " <<average << endl;

    //Determining the grade based on the average score 
    switch (average)
    {
    case 70 ... 100:
        cout << "Grade A";
        break;

        case 60 ... 69:
        cout << "Grade B";
        break;

        case 50 ... 59:
        cout << "Grade C";
        break;


        case 40 ... 49:
        cout << "Grade D";
        break;
    
    default:
    cout << "Enter valid marks!!";
        break;
    }

    return 0;
}