#include<iostream>
#include<cmath>
using namespace std;
double fareCalculation(int passengers, double distance, bool toFro);

double fareCalculation(int passengers, double distance, bool toFro){
    //iniatilization of constant variables should be used within this function
    const double fareRate = 1.80, minimumFare = 5.00, pass1Charges = 1.00, pass2Charges = 0.50, airportSurcharge = 2.00;

    //initialization of total fare , passengerfare and distancefare
    double allCharges = 0; //to be returned by this function
    double passengerFare = 0; //used to calculate the amount of fare applicable based on the number of passenges on board.
    double distanceFare = 0; //used to calculate the amount of fare applicable based on the distance of the trip.

    //setting the minimum fare to: $5.00 .
    if(allCharges < minimumFare){
        allCharges = minimumFare;
    }

    //the fare rate is 1.80 for every 1/10 of a mile. hence calculating the amount charged according to the distance of the trip =
    distanceFare = (distance * 0.1) * fareRate;

    //determining the chages due to the number of passengers;
    if(passengers = 2){
        passengerFare = pass1Charges;
    }
    if(passengers > 2){
        passengerFare =  (passengers -2) * pass2Charges;
    }
    if(passengers > 4){
        passengerFare = 0;
    }

    //calculating the amount charged if the aiport surcharge is applicable
    if(toFro){
        allCharges += airportSurcharge;
    }

    //calculating the total fare with all charges inclusive
    allCharges = passengerFare  + distanceFare ;

    //returning the answer
    return allCharges;
}

int main(){

}