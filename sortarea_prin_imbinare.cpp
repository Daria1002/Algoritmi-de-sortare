#include <iostream>
using namespace std;
void merge(int data[], int temp[], int low, int pivot, int high) {
    int h = low, i = low, j = pivot + 1;
    while (h <= pivot && j <= high) {
        if (data[h] <= data[j]) {
            temp[i] = data[h];
            h++;
        } else {
            temp[i] = data[j];
            j++;
        }
        i++;
    }
    if (h > pivot) {
        for (int k = j; k <= high; k++) {
            temp[i] = data[k];
            i++;
        }
    } else {
        for (int k = h; k <= pivot; k++) {
            temp[i] = data[k];
            i++;
        }
    }
    for (int k = low; k <= high; k++) {
        data[k] = temp[k];
    }
}
void mergeSort(int data[], int temp[], int low, int high) {
    if (low < high) {
        int pivot = (low + high) / 2;
        mergeSort(data, temp, low, pivot);
        mergeSort(data, temp, pivot + 1, high);
        merge(data, temp, low, pivot, high);
    }
}
int main() {
    int arraySize = sizeof(data) / sizeof(data[0]);
    int temp[arraySize]; 
    cout << "Array before sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    mergeSort(data, temp, 0, arraySize - 1);
    cout << "Array after sorting: ";
    for (int i = 0; i < arraySize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}
