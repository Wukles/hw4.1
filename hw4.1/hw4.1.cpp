﻿// hw4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Weapoon.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    Weapoon fireball("Fireball", 10, 50, 80);
    cout << fireball.checkWeight()<<endl;
    fireball.totalWeight(60);
    cout << fireball.weight << endl;
    fireball.totalWeight();
    cout << fireball.weight << endl;




    /*Weapoon m;
    cout << m.name << " " << m.damage << " " << m.weight << endl;

    Weapoon d("Gun", 3, 30);
    cout << d.name << " " << d.damage << " " << d.weight << endl;

    Weapoon knife("Knife", 1, 20);
    cout << knife.name << " " << knife.damage << " " << knife.weight << endl;

    Weapoon* axe = new Weapoon("Axe", 2, 40);
    cout << axe->name << " " << axe->damage << " " << axe->weight << endl;
    delete axe;*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
