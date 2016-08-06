#include <iostream>
#include "Date.h"
#include "Vehicle.h"
#include <vector>
#include <string>
#include <thread>
#include <mutex>

// Lambda function
auto findVehicle = [] (std::vector<Vehicle> vehicleType, std::string searchTerm)
{
    for(Vehicle& vehicle: vehicleType)
    {
        if (vehicle.getRegistrationNumber() == searchTerm)
        {
            vehicle.printVehicleInformation();
            break;
        }
    }
};


int main()
{
    std::string searchTerm;

    // Containers
    std::vector<Vehicle> cars = {
        Vehicle("A2273MM", 1.0f, 5, "123123123123123", "D14A400192", "Martin Kuvandzhiev", Date(29,07,2000), Date(14,03,2014)),
        Vehicle("CA0450KB", 0.85f, 5, "12313121212121", "D11A400192", "John Snow", Date(25,12,1992), Date(25,12,2000))
    };

    std::vector<Vehicle> trucks = {
        Vehicle("BA1706O", 7.0f, 3, "12334444", "D24A400192", "Bai Tosho", Date(03,12,1989), Date(04,06,1990)),
        Vehicle("BANKO1", 3.2f, 5, "111111", "AA15S222", "Vanko Edno", Date(22,02,1992), Date(03,03,1999))
    };

    std::vector<Vehicle> motorcycles = {
        Vehicle("M0700P", 0.5f, 1, "11111", "AS1223D33", "Pesho Motorista", Date(02,02,2000), Date(03,03,2003))
    };

    // Console output and input
    std::cout << "Please enter registration number of a vehicle to search" << std::endl;
    std::cin >> searchTerm;

    // Threads
    std::mutex mtx;
    mtx.lock();

    std::thread tCarSearch(findVehicle, cars, searchTerm), tTrucksSearch(findVehicle, trucks, searchTerm), tMotorSearch(findVehicle, motorcycles, searchTerm);

    tCarSearch.join();
    tTrucksSearch.join();
    tMotorSearch.join();

    mtx.unlock();

    return 0;
}
