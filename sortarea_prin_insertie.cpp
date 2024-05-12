#include <iostream>
using namespace std;
void insertionSort(int data[], long arraySize) {
    int temp;
    long j;
    for (long i = 1; i < arraySize; i++) {
        temp = data[i];
        for (j = i - 1; j >= 0 && data[j] > temp; j--) {
            data[j + 1] = data[j];
        }
        data[j + 1] = temp;
    }
}
int main() {
    long arraySize = sizeof(data) / sizeof(data[0]);
    cout << "Array before sorting: ";
    for (long i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    insertionSort(data, arraySize);
    cout << "Array after sorting: ";
    for (long i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
