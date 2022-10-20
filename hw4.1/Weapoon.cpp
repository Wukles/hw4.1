#include "Weapoon.h"

    Weapoon::Weapoon() {
        name = "Sword";
        damage = 5;
        weight = 100;
    }

    Weapoon::Weapoon(string name, int damage, int weight, int maxWeight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
        this->maxWeight = maxWeight;
    }
    Weapoon::~Weapoon() {
        //cout << "Объект " << name << ", " << damage << ", " <<weight<< " уничтожен!" << endl;

    }

    int Weapoon::checkWeight() {
        if (maxWeight < weight) {
            return true;
        }
        else return false;
    }

    void Weapoon::totalWeight(int weight2) {
        weight += weight2;
    }

    void Weapoon::totalWeight() {
        totalWeight(20);
    }