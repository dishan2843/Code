#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a) {
    int n = a.size();

    for(int i=1; i<n; i++) {
        int x = a[i], j;
        for(j = i-1; j >= 0 && a[j] > x; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = x;
    }
}

void selectionSort(vector<int> &a) {
    int n = a.size();
    
    for(int i=0; i<n; i++) {
        int minIndex = i;
        
        for(int j=i+1; j<n; j++) {
            if(a[minIndex] > a[j]) {
                minIndex = j;
            }
        }
        
        swap(a[i], a[minIndex]);
    }
}

void bubbleSort(vector<int> &a) {
    int n = a.size();
    
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<i; j++) {
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

int main() {
    vector<int> a = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    
    // insertionSort(a);
    // selectionSort(a);
    bubbleSort(a);
    
    for(int i: a)
        cout << i << " ";
    cout << endl;
    
	return 0;
}

