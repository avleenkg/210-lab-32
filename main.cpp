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
    deque<Car> lane1, lane2, lane3, lane4;

    deque<Car> plaza[PLAZASIZE] =  {lane1, lane2, lane3, lane4};

    /*for (int i = 0; i < ISIZE; i++) {
        booth.push_back(Car()); //call Car -> calls constructor to generate random car
    }

    cout << "Initial Queue:\n";
    for(auto car : booth) {
        cout << "\t";
        car.print();
    }
    */

    int timecount = 0; 

    for (int j = 0; j < ISIZE; j++ ) {
        lane1.push_back(Car());
        lane2.push_back(Car());
        lane3.push_back(Car());
        lane4.push_back(Car()); 
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