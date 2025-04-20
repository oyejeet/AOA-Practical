#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
  for(int i=0; i<n; i++){
    int key = arr[i];
    int j = i-1;
    
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
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
  InsertionSort(arr,n);
  PrintArray(arr,n);
}