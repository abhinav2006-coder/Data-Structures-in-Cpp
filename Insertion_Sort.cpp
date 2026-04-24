// INSERTION SORT
#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> arr, int numberofelement){
    for (int i = 1; i < numberofelement; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int numberofelement, element;
    cout << "Enter a number of element: ";
    cin >> numberofelement;

    vector<int> arr;
    for(int i = 0; i < numberofelement; i++){
        cout << "Enter Element: ";
        cin >> element;
        arr.push_back(element);
    }

    cout << "Original Array: ";
    for (int i = 0; i < numberofelement; i++){
        cout << arr.at(i) << " ";
    }
    
    insertion_sort(arr,numberofelement);

    cout << "\nSorted Array: ";
    for (int i = 0; i < numberofelement; i++){
        cout << arr.at(i) << " ";
    }
    return 0;
}