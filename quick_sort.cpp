#include <iostream>
using namespace std;
int partition(int data[], int start, int end) {
    int pivot = data[end];
    int partitionIndex = start;
    for (int i = start; i < end; i++) {
        if (data[i] <= pivot) {
            swap(data[i], data[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(data[partitionIndex], data[end]);
    return partitionIndex;
}
void quickSort(int data[], int start, int end) {
    if (start < end) {
        int partitionIndex = partition(data, start, end);
        quickSort(data, start, partitionIndex - 1);
        quickSort(data, partitionIndex + 1, end);
    }
}
int main() {
    int arraySize = sizeof(data) / sizeof(data[0]);
    cout << "Array before sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    quickSort(data, 0, arraySize - 1);
    cout << "Array after sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
