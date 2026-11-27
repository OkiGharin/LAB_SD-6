#include <iostream>
using namespace std;

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0; 
    int j = 0; 
    int k = 0; 

    
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    
    while (i < leftSize) {
        arr[k++] = left[i++];
    }

    
    while (j < rightSize) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int n) {
    if (n > 1) {
        
        int mid = n / 2;
        int leftSize = mid;
        int rightSize = n - mid;

        int* left = new int[leftSize];
        int* right = new int[rightSize];

        for (int i = 0; i < leftSize; i++) {
            left[i] = arr[i];
        }
        for (int i = 0; i < rightSize; i++) {
            right[i] = arr[mid + i];
        }

        
        mergeSort(left, leftSize);
        mergeSort(right, rightSize);

        merge(arr, left, leftSize, right, rightSize);

        
        delete[] left;
        delete[] right;
    }
}

void printArray(const char* label, int arr[], int n) {
    cout << label << ": [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i + 1 < n) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    int data[] = {38, 27, 43, 3, 9, 82, 10, 15};
    int n = sizeof(data) / sizeof(data[0]);

    printArray("Sebelum", data, n);
    mergeSort(data, n);
    printArray("Sesudah", data, n);

    return 0;
}