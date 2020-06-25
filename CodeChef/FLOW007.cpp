#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   	int n,rem;
	   	int reverse = 0;
	   	cin >> n;
	    while(n!= 0)
	    {
	        rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
	    }
	    cout << reverse << endl;
	}
	return 0;
}
