#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    int size;
    cout << "Enter Size Array: ";
    cin >> size;

    Array arr(size);
    cout << "Start Array:" << endl;
    arr.printArray();

    arr.addSumAndAverage();
    cout << "Array after add Sum and Avg :" << endl;
    arr.printArray();

    arr.divideByAverage();
    cout << "Array after divide modele first negative and 50 elenetns:" << endl;
    arr.printArray();

    return 0;
}
