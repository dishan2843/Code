#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int total = 0; 
    cin>>s;
        for(const auto& c: s)
        {
            total *= 26;
            total += (c - 'A') + 1;
        }
   cout<<total;
	return 0;
}

