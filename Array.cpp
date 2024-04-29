#include "Array.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Array
Array::Array(int size) : size(size) {
    data = new double[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        data[i] = rand() % 101 - 50;
    }
}

int Array::getSize() const {
    return size;
}

Array::~Array() {
    delete[] data;
}

// ADD Sum and Average
void Array::addSumAndAverage() {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += abs(data[i]);
    }
    double average = sum / size;

    int newSize = size + 2;
    double* newData = new double[newSize];
    for (int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }
    newData[size] = sum;
    newData[size + 1] = average;

    delete[] data;

    data = newData;
    size = newSize;
}


// Divide AVG by module first negative element and 50 element
void Array::divideByAverage() {
    int negativeIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (data[i] < 0) {
            negativeIndex = i;
            break;
        }
    }

    double absFirstNegative = abs(data[negativeIndex]);
    double fiftyValue = data[49];

    double average = (absFirstNegative + abs(fiftyValue)) / 2.0;

    if (average == 0) {
        cout << "Avg == 0" << endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        data[i] /= average;
    }
}

// PRINT
void Array::printArray() {
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}
