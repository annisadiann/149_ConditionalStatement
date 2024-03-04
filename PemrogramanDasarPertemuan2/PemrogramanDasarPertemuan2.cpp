// PemrogramanDasarPertemuan2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    srand(time(0));


    int nBill = (rand() % 10);
    string status;

    if (nBill % 2 == 0) {
        status = "Genap";
    }
    else {
        status = "Ganjil";
    }
}



