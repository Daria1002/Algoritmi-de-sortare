#include <iostream>
using namespace std;
void selectionSort(int data[], long arraySize) {
    for (long i = 0; i < arraySize - 1; i++) {
        int iMin = i;
        for (long j = i + 1; j < arraySize; j++) {
            if (data[j] < data[iMin]) {
                iMin = j;
            }
        }
        int temp = data[i];
        data[i] = data[iMin];
        data[iMin] = temp;
    }
}

int main() {
    long arraySize = sizeof(data) / sizeof(data[0]);
    cout << "Array before sorting: ";
    for (long i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    selectionSort(data, arraySize);
    cout << "Array after sorting: ";
    for (long i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
