/*
By: Egan Ombaka
Date: 3/10/2024
A C++ function that calculates the fare rates to and from the airport.
*/

#include<iostream>
#include<cmath> //for rounding up if the total fare is less than $5.00
using namespace std;
int fare_calculation(double distance, double passengers, bool airportCharges );


int main(){
    double distance, total_fare;
    int passengers;
    char trip_direction;
    bool airportCharges = false;


    cout<<" Enter the distance of the trip: "<< endl;
    cin>>distance;

    cout<<" Enter the number of passengers: "<< endl;
    cin>>passengers;

    cout<<" Is the to/from the airport(y if from the airport and n if to the airport): "<< endl;
    cin>>trip_direction;

    //checking the direction of the trip to or fro the airport
    if(trip_direction == 'y'){
        airportCharges = true;
    }    

    //calling the function
    total_fare = fare_calculation(distance, passengers, trip_direction);

    cout<<" The total fare for you ride is : $ "<<total_fare<< endl;

    return 0;
}

//function to calculate the total fare
int fare_calculation(double distance, double passengers, bool airportCharges){
    //constant values initialization
    const double minimum_fare = 5.00;
    const double fare_rate = 1.80; //charged for every 1/10 of a mile.
    const double airport_surcharge = 2.00;
    const double additional_passenger = 1.00;
    const double additonal_passenger2 = 0.50; //for every passenger after the first additional passenger

    //initialzation and declation of variables
    double distance_fare;
    double passenger_charges = 0;
    double total_fare;

    //callculation of the distance covered(1/10)
    distance_fare = distance / 10;
    //applying charges on the distance using if statement(rounding off to 5.00 if the fare is less than 5.00)
    if(distance_fare < minimum_fare){
        distance_fare = minimum_fare;
    }

    //determining the fare based on the number of passengers(using if statement)
    if(passengers > 1){
        passenger_charges = additional_passenger;
        if(passengers > 2){//for every additional passitional passenger from 2 passengers.
            passenger_charges += (passengers - 2) * additonal_passenger2;
        }
    }

    //adding the aiport surcharges if applicable
    if(airportCharges){
        total_fare += airport_surcharge;
    }
    
    total_fare = distance_fare + passenger_charges;
    return total_fare;
}