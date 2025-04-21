#include <iostream>
using namespace std;

#define MAX 100
#define TARGET 35
#define SIZE 7

int nums[SIZE] = {10,5,7,18,12,20,15};
int current[MAX];

void SumofSubsets(int index, int currentSize, int currentSum){
  if(currentSum == TARGET){
    cout << "Subset : ";
    for(int i=0; i< currentSize; i++){
      cout << current[i] << " ";
    }
    cout << endl;
    return;
  }
  if(currentSum > TARGET  || index >= SIZE){
    return;
  }

  current[currentSize] = nums[index];

  // Include 
  SumofSubsets(index+1, currentSize +1, currentSum + nums[index]);
  // Exclude
  SumofSubsets(index +1, currentSize, currentSum);
}

int main(){
  cout << "Target Element is : " << TARGET << " and its subsets will be  : "<< endl;
  SumofSubsets(0,0,0);
  return 0;
}