#ifndef LABORATOR_POO_CLIENT_H
#define LABORATOR_POO_CLIENT_H
#include <string>
#include <iostream>
using namespace std;

class client {

    string nume, prenume;
    int tip; //1- normal, 2-fidel, 3-VIP =>se acorda reduceri in functie de tip; 1->0%, 2->20%, 3->50% reduceri

    //constructor
public:
    //constructor
    client(string nume="-", string prenume="-", int tip=1);
    void IncepeTur();
    void AdaugaLaPreferinte();
    int Tip();
    friend ostream &operator<<(ostream &out, const client &C);
    friend istream &operator>>(istream &in, client &C);
    friend class sala;
};


#endif //LABORATOR_POO_CLIENT_H
