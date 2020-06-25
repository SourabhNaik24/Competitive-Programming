#include<iostream>
#include <stdlib.h> 
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   	int n,m;
	   	cin >> n >> m;
	   	long long int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    long long int sum=0,newsum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i] > m){
	            arr[i] = m;
	            newsum+=arr[i];
	        }
	        else{
	            newsum+=arr[i];
	        }
	    }
	    cout << abs(sum-newsum) << "\n";
	}
	return 0;
}
