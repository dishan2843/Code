#include <bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int> > &a) {
    int n = a.size(), m = a[0].size();
    int row_start=0,row_end=n-1;
    int col_start=0,col_end=m-1;
    vector<int> res;
    
    while(row_start <= row_end && col_start <= col_end){
       for(int col = col_start; col <= col_end; col++)
       {
            res.push_back(a[row_start][col]);
       }
       row_start++;
       
       for(int row = row_start; row <= row_end; row++)
       {
           res.push_back(a[row][col_end]);
       }
       col_end--; //-1
       
       if(row_start <= row_end && col_start <= col_end) {
            for(int col = col_end; col >= col_start; col--){
               res.push_back(a[row_end][col]);
           }
           row_end--;
           
           for(int row = row_end; row >=row_start; row--)
           {
               res.push_back(a[row][col_start]);
           }
           col_start++;
       }
       
    }

    return res;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n,m;
        cin>> n >> m ;
        
        vector<vector<int>> a(n, vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
        vector<int> res = spiralOrder(a);
        
        for(int i: res)
            cout << i << " ";
        cout << endl;
        
    }
    
	return 0;
}
