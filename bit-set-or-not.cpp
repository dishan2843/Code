#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int i,n;
    cin>>n>>i;
    bool a = 1 & (n>>i);
   
   if(a == true)
   {
       cout<<"Yes, Bit is set"<<endl;
   }
   else
   {
       cout<<"No, Bit is not set"<<endl;
   }
	return 0;
}
