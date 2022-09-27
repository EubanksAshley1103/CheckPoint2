/*
    Author:         Ashley Eubanks
    Section:        1103
*/

#ifndef PATRON_H
#define PATRON_H
#include "ride.h"
#include <iostream>
using namespace std;

class Patron{

    string firstName;
    string lastName;
    int patronNumber;
    int numRides;
    int numTickets;
    Ride patronRides[100];

    public:

        Patron();
        Patron(string, string, int, int, int, Ride*);
        Patron(const Patron&);
        
        string getFirstName();
        void setFirstName(string);

        string getLastName();
        void setLastName(string);

        int getPatronNumber();
        void setPatronNumber(int);

        Ride* getPatronRides();
        void addPatronRide(Ride);

        void displayName();
        
        int getNumTickets();
        void setNumTickets(int);

        void displayPatronData();

};

#endif
