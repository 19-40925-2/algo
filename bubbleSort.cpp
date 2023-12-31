#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int step = 0; step < size; ++step){
        for(int i = 0; i < size - step; ++i){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = temp;
            }
        }
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);
    printArr(arr, size);
    return 0;
}





// #include <iostream>
// using namespace std;

// // perform bubble sort
// void bubbleSort(int array[], int size) {

//   // loop to access each array element
//   for (int step = 0; step < size; ++step) {
      
//     // loop to compare array elements
//     for (int i = 0; i < size - step; ++i) {

//       // compare two adjacent elements
//       // change > to < to sort in descending order
//       if (array[i] > array[i + 1]) {

//         // swapping elements if elements
//         // are not in the intended order
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
//       }
//     }
//   }
// }

// // print array
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; ++i) {
//     cout << "  " << array[i];
//   }
//   cout << "\n";
// }

// int main() {
//   int data[] = {-2, 45, 0, 11, -9};
  
//   // find array's length
//   int size = sizeof(data) / sizeof(data[0]);
  
//   bubbleSort(data, size);
  
//   cout << "Sorted Array in Ascending Order:\n";  
//   printArray(data, size);
// }