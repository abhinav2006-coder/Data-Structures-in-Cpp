// BUBBLE SORT
#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr){
    int len = arr.size();
    for(int i = 0; i < len; i++){
        for(int j = 1; j < len; j++){
            if (arr[j - 1] > arr[j]){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nSorted Array: ";
    for (int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << " ";
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
    for (int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << " ";
    }
    bubble_sort(arr);
    return 0;
}