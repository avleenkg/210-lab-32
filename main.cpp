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
const int PROB1 = 46, PROB2 = 39, PROB3 = 15;

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

        for (int lane = 0; lane < PLAZASIZE; lane++) {
            if (prob < PROB1) {
                //car at head pays toll and leaves
                Car headcar = plaza[lane].front();
                cout << "Lane: " << lane + 1 << " | Paid: "; headcar.print();
                plaza[lane].pop_back();
            }
            else if (prob < PROB1 + PROB2) {
                //another car joins end
                Car newcar = Car();
                plaza[lane].push_back(newcar);
                cout << "Lane: " << lane + 1 << " | Joined: "; newcar.print();
            }
            else if (prob < (PROB1 + PROB2 + PROB3)) {
                //last car changes lanes
                Car lastcar = plaza[lane].back();
                cout << "Lane: " << lane + 1 << " | Switched: "; lastcar.print();
                int randlane = rand() % 4;

                while (randlane == lane) {
                   randlane = rand() % 4; 
                }
                plaza[lane].pop_back();
                plaza[randlane].push_back(lastcar);
            }

            if (plaza[lane].empty()) {
                int secondprob = rand() % 100;
                if (secondprob < 50) {
                    Car newcar = Car();
                    plaza[lane].push_back(newcar);
                    cout << "Lane: " << lane + 1 << " | Joined: "; newcar.print();
                }
            }

            //print queues
            plaza[lane]
        }


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