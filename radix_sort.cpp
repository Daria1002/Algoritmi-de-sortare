#include <iostream>
#include <vector>
using namespace std;
#define BASE 10
void radixSort(int data[], int arraySize) {
    int i, m = 0, exp = 1;
    vector<int> temp(arraySize);
    for (i = 0; i < arraySize; i++) {
        if (data[i] > m)
            m = data[i];
    }
    while (m / exp > 0) {
        int bucket[BASE] = {0};
        for (i = 0; i < arraySize; i++)
            bucket[(data[i] / exp) % BASE]++;
        for (i = 1; i < BASE; i++)
            bucket[i] += bucket[i - 1];
        for (i = arraySize - 1; i >= 0; i--)
            temp[--bucket[(data[i] / exp) % BASE]] = data[i];
        for (i = 0; i < arraySize; i++)
            data[i] = temp[i];

        exp *= BASE; 
    }
}
int main() {
    int arraySize = sizeof(data) / sizeof(data[0]);
    cout << "Array before sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    radixSort(data, arraySize);
    cout << "Array after sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
