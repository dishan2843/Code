#include <bits/stdc++.h>
using namespace std;

void serach(vector<int> &a)
{
    int n=a.size();
    int l=0,r=n-1;
    int x=6;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<i<<" ";
        }
    }
}

int main() {
	vector<int> a = {1,5,6,11,10,8,9,7};
    
    serach(a);
    
	return 0;
}
