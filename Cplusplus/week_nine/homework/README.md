
# Homework 9

Make a system for managing information for the motor vehicles in Bulgaria.

## The system shall have different containers for cars, trucks, motorcycles. The class describing a vehicle must have the following members :

* Registration number (string)
* Weight (float in tones)
* Number of seats (short int)
* Chassis number (string)
* Engine number (string)
* Owner (string)
* Date of first registration (custom class Date) – when the car was firstly registered
* Date of registration in country (custom class Date) – when the car was registered with its current registration

## And Functions:

* Getter for all of the information

* The system shall support multithread search for each container (you start searching for a vehicle with a registration number and the program initialize search in each container on a different thread).

* Lambda expressions shall be used in the software for the search (consider using for_each function).

* Lambda expressions shall be used in the software for displaying the information ( the function must look like : searchForACarWithRegistrationNumber(string registrationNumber, void aLambdaExpressionToBeExecutedWhenFound())

A simple example of using the software: (<< - Output, >> - Input)

    <<Please enter registration number of a vehicle to search
    >>A2273MM
    <<Searching
    <<A2273MM
    <<Weight: 1.0 t
    <<Number of seats: 5
    <<Chassis number: 123123123123123
    <<Engine number: D14A400192
    <<Owner: Martin Kuvandzhiev
    <<Date of first registration: 29.07.2000
    <<Date of registration in country: 14.03.2014

