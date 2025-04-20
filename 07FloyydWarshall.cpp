#include <iostream>
using namespace std;

# define v 4
# define INF 99999

void FloydWarshal(int graph[v][v]){
  int dist[v][v];

  for(int i=0; i<v; i++){
    for(int j=0; j<v; j++){
      dist[i][j] = graph[i][j];
    }
  }

  // Core Floyd-Warshal Algo:

  for(int k=0; k<v; k++){
    for(int i=0; i<v; i++){
      for(int j=0; j<v; j++){
        if(dist[i][k] + dist[k][j] < dist[i][j]){
          dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
  }
// Printing the Final Answer :
cout << "\nShortest Distance Matrix\n";
  for(int i=0; i<v; i++){
    for(int j=0; j<v; j++){
      if(dist[i][j] == INF){
        cout << "INF";
      }
      else{
        cout << dist[i][j] << " "
      }
    }
    cout << endl;
  }
}

int main(){
  int graph[v][v];

  cout<< "Enter the adjacency matrix : \n";
  cout<< "we have considered INF as "<< INF << "for a while" << endl; 

  for(int i=0; i<v; i++){
    for(int j=0; j<v; j++){
      cin >> graph[i][j];
    }
  }
  FloydWarshal(graph);
  return 0;
}