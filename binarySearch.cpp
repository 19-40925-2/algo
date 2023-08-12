#include<iostream>
using namespace std;

int BinarySearch(int arr[], int length, int search){
    int low = 0;
    int high = length - 1;

    do{
        int mid = low + (high - low) / 2;
        if(arr[mid] == search){
            return mid;
        }
        else if(arr[mid] > search){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    } while(high >= low);

    return -1;
}

int main() {
    int search;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Enter element you want to search: ";
    cin >> search;
    
    int result = BinarySearch(arr, 10, search);
    
    if (result == -1) {
        cout << "Not found";
    } else {
        cout << "Found at position " << result;
    }

    return 0;
}
