#include <bits/stdc++.h>
using namespace std;

void merge(int l, int mid, int r, vector<int> &a) {
    vector<int> L, R;
    
    for(int i=l; i<=mid; i++)
        L.push_back(a[i]);
        
    for(int i=mid+1; i<=r; i++)
        R.push_back(a[i]);
    
    int sizeL = L.size(); // mid - l + 1
    int sizeR = R.size(); // r - mid
    int i=0, j=0, k = l;
    
    while(i < sizeL && j < sizeR) {
        if(L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i < sizeL) {
        a[k] = L[i];
        i++; k++;
    }
    
    while(j < sizeR) {
        a[k] = R[j];
        j++; k++;
    }
}

void mergeSort(int l, int r, vector<int> &a) {
    if(l < r) {
        int mid = l + ((r - l) / 2);
        
        mergeSort(l, mid, a);
        mergeSort(mid + 1, r, a);
        merge(l, mid, r, a);
    }
}

int main() {
    vector<int> a = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    
    int n = a.size();
    mergeSort(0, n-1, a);
    
    for(int i: a)
        cout << i << " ";
    cout << endl;
    
	return 0;
}
