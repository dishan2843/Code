#include <bits/stdc++.h>
using namespace std;



int serach(vector<int> &a)
{
    int n=a.size();
    int l=0, r=n-1 ,x=49;  
    while(l<=r)
    {
        int mid = l + ((r-l)/2);
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]<x)
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;
}

int main() {
    vector<int> a={1,7,14,28,35,49,84,100};
 
   cout << serach(a);
   
	return 0;
}
