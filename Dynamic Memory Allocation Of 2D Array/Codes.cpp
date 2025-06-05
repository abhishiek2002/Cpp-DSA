#include <bits/stdc++.h>
using namespace std;


int main() {
      int m,n;
      cin>>m>>n;
      // creating dynamic 2d array
      int **arr2d = new int*[m];
  
      for(int i=0; i<m; i++){
        arr2d[i] = new int[n];
      }
      
      // taking input
      
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          cin>>arr2d[i][j];
        }
      }
      
      // print
      
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          cout<<arr2d[i][j]<<" ";
        }
        cout<<endl;
      }
      
      
    for(int i=0; i<m; i++){
        delete[] arr2d[i];
    }
    
    delete[] arr2d;
  
  return 0;
}
