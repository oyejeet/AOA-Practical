#include <iostream>
using namespace std;

int KnapSack(int wt[], int val[], int W, int n){
  int dp[100][100];

  for(int i=0; i<=n; i++){
    for(int w=0; w<=W; w++){
      if(i == 0 || w == 0){
        dp[i][w] = 0;
      }
      else if(wt[i-1]){
        int include = val[i-1] + dp[i-1][w-wt[i-1]];
        int exclude = dp[i-1][w];
        if(include > exclude){
          dp[i][w] = include;
        }
        else{
          dp[i][w] = exclude;
        }
      }
      else{
        dp[i][w] = dp[i-1][w];
      }
    }
  }
  return dp[n][W];
}

int main(){
  int W = 50;
  int wt[] = {10,20,30};
  int val[] = {60,100,120};
  int n = sizeof(val) / sizeof(val[0]);

  cout << "Max Value is : " <<KnapSack(wt,val,W,n) << endl;
}