#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] ={1,2,3,4,5};
    int *ptr;
    
    ptr=&a[5];
    
    for(int i=0;i<5;i++)
    {
         cout<<a[i]<<endl;
         cout<<&a[i]<<endl;
    }
    
	return 0;
}
