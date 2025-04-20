#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
  int i,j,min_idx;
  for(int i=0; i<n; i++){
    min_idx = i;

    for(int j=i+1; j<n; j++){
      if (arr[j] < arr[min_idx]){
        min_idx = j;
      }
  }
  // Swap these elements
  int temp = arr[i];
  arr[i] = arr[min_idx];
  arr[min_idx] = temp;
  }
}

void PrintArray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
  }
}

int main(){
  int arr[] = {12,21,32,31,2};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original Array is :\n ";
  PrintArray(arr, n);
  cout<<endl;

  cout << "Sorted Array is : \n";
  SelectionSort(arr,n);
  PrintArray(arr,n);
}