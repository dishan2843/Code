#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &a){
    int n=a.size();
    int swaps;
    int count=1;
    for(int i=n-1; i>=0;i--,count++){
        cout<<count <<" ";
        swaps=0;
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swaps++;
            }
        }
        if(swaps==0)
            break;
    }
}

int main() {
    std::vector<int> a={62,15,10,22,16,57,03};
    bubblesort(a);
    
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;
    	return 0;
}
