#include <bits/stdc++.h>
using namespace std;

int partition(int l, int r, vector<int> &a) {
    int pivot = l;
    
    while(l < r) {
        do {
            l++;
        } while(a[l] <= a[pivot]);
        
        do {
            r--;
        } while(a[r] > a[pivot]);
        
        if(l < r)
            swap(a[l], a[r]);
    }
    
    swap(a[pivot], a[r]);
    
    return r;
}

void quickSort(int l, int r, vector<int> &a) {
    if(l < r) {
        int pivotIndex = partition(l, r, a);
        quickSort(l, pivotIndex, a);
        quickSort(pivotIndex + 1, r, a);
    }
}

int main() {
    vector<int> a = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    // vector<int> a = {8, 1, 2, 3, 4};
    
    int n = a.size();
    
    quickSort(0, n, a);
    
    for(int i: a)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
