// SELECTION SORT
#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr){
    int len = arr.size();

    for(int i = 0; i < len - 1; i++){
        int min_index = i;

        for(int j = i + 1; j < len; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if (min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main(){
    int numberofelement, element;
    cout << "Enter number of element: ";
    cin >> numberofelement;
    vector<int> arr;
    for(int i = 0; i < numberofelement; i++){
        cout << "Enter Element: ";
        cin >>  element;
        arr.push_back(element);
    }
    cout << "Original Array: ";
    for (int n : arr) cout << n << " ";
    selection_sort(arr);
    cout << "\nSorted Array: ";
    for (int n : arr) cout << n << " ";
    return 0;
}