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

    int timecount = 0; 

    while (!booth.empty()) {
        timecount++;

        int prob = rand() % 100;

        if (prob < 55) {
            //car at head pays toll and leaves
            //use booth.front() and booth.pop_front()
            Car newcar = Car();
            cout << "Time: " << timecount << "  |  Operation: Car paid: " << car.print() << endl;
            cout << "Queue:\n";
        }
        else {
            //new car joins booth
            //use booth.push_back()
            cout << "Time: " << timecount << "  |  Operation: Car joined lane : " << car.print() << endl;

        }

            cout << "Queue:\n";
            for(auto car : booth) {
                cout << "\t";
                car.print();
            }

            if (booth.empty()) {
                cout << "Empty.\n";
            }
    }



    return 0;
}