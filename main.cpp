//Avleen Gill - COMSC 210
//Lab 32: Toll Booth

#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>
#include "Car.h"
using namespace std;

const int ISIZE = 2; //represents cars already in line 

int main() {
    srand(time(0));

    deque<Car> booth;

    for (int i = 0; i < ISIZE; i++) {
        booth.push_back(Car()); //call Car -> calls constructor to generate random car
    }

    cout << "Initial Queue:\n";
    for(auto car : booth) {
        cout << "\t";
        car.print();
    }

    while (!booth.empty()) {
        int prob = rand() % 100;

        if (pro)


    }



    return 0;
}