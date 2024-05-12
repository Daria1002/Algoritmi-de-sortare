#include <iostream>
using namespace std;
void bubbleSort(int data[], long arraySize) {
    int temp;
    for (long i = 0; i < arraySize; i++) {
        for (long j = 0; j < arraySize - 1; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
int main() {
    long arraySize = sizeof(data) / sizeof(data[0]);
    cout << "Array before sorting: ";
    for (long i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    bubbleSort(data, arraySize);
    cout << "Array after sorting: ";
    for (long i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
