#include <iostream>
using namespace std;

int BinarySearch(int target, int arr[], int size){
    int low = 0;
    int high = size - 1;
    
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12,21,32,31,11};
    int target = 31;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array is : " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int result = BinarySearch(target, arr, size);
    if(result != -1){
        cout << "Target found at index : " << result << endl;
    }
    else{
        cout <<"Target not found " << endl;
    }
    return 0;
}

