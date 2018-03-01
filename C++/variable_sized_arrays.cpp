#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef std::vector< std::vector<int> > matrix;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,k,row,col;
    cin>>n>>q;
    vector<int> result(q);
    matrix nk(n, std::vector<int>());
    for(int i=0; i<n; i++){
      cin>>k;
      nk[i].resize(k);
      for (int j = 0; j < k; j++) {
        cin>>nk[i][j];
      }
    }
    for (int i=0; i<q; i++){
      cin>>row>>col;
      result[i] = nk[row][col];
    }
    //print result
    for (int i=0; i<result.size(); i++){
      cout<<result[i]<<endl;
    }
    // Print all data
    // for(int i=0; i<n; i++){
    //   for (int j = 0; j < nk[i].size(); j++) {
    //     cout<<nk[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
    return 0;
}
