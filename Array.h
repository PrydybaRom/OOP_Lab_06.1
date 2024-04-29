#pragma once

class Array {
private:
    double* data;
    int size;

public:
    Array(int size);
    ~Array();
    void addSumAndAverage();
    void divideByAverage();
    void printArray();
    int getSize() const;
};

