//Avleen Gill - COMSC 210
//Lab 32: Toll Booth
//Lab 33: Toll Plaza

#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>
#include "Car.h"
using namespace std;

const int ISIZE = 3; //represents cars already in line 
const int PLAZASIZE = 4;

int main() {
    srand(time(0));

    deque<Car> booth;

    deque<Car> plaza[PLAZASIZE];

    /*for (int i = 0; i < ISIZE; i++) {
        booth.push_back(Car()); //call Car -> calls constructor to generate random car
    }

    cout << "Initial Queue:\n";
    for(auto car : booth) {
        cout << "\t";
        car.print();
    }
    */

    for (int lanes = 0; lanes < PLAZASIZE; lanes++ ) {
        for (int car = 0; car < ISIZE; car++){
            plaza[lanes].push_back(Car());
        }
    }
    cout << "Initial Queue:\n";
    for (int lanes = 0; lanes < PLAZASIZE; lanes++) {
        cout << "Lane " << lanes + 1 << ":\n";
        for (auto cars : plaza[lanes]) {
            cout << "\t";
            cars.print();
        }
    }


    for (int time = 0; time < 20; time++) {
        cout << "Time: " << time + 1 << endl;
        int prob = rand() % 100;

        if (prob < 46) {
            //car at head pays toll and leaves
        }
        else if (prob > 46 && prob < 85) {
            //another car joins end
        }
        else if (prob > 85 && prob < 100) {
            //last car changese lanes
        }
        
        if (//lane is empty) {}



    }

    /*while (!booth.empty()) {
        timecount++;

        int prob = rand() % 100;

        if (prob < 55) {
            //car at head pays toll and leaves
            //use booth.front() and booth.pop_front()
            Car headcar = booth.front();
            cout << "Time: " << timecount << "  |  Operation: Car paid: "; headcar.print();
            booth.pop_front();
        }
        else {
            //new car joins booth
            //use booth.push_back()
            Car newcar = Car();
            booth.push_back(newcar);
            cout << "Time: " << timecount << "  |  Operation: Car joined lane : "; newcar.print();
        }

            cout << "Queue:\n";
            for(auto car : booth) {
                cout << "\t";
                car.print();
            }

            cout << endl;

            if (booth.empty()) {
                cout << "\t-----Empty.-----\n\n";
            }
    }*/



    return 0;
}