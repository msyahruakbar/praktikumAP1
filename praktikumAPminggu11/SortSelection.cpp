#include<iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        // Swap the found maximum element with the first element
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

int main() {
    int data[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Ini adalah data sebelum diurutkan secara menurun:" << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    selectionSort(data, n);

    cout << "\nNah ini adalah data setelah diurutkan secara menurun:" << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
