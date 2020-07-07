#include <iostream>
using namespace std;

int main() {
	int testcase, n, s[100000], result;
	cin >> testcase;
	
	while(testcase--){
	    cin >> n;
	    for(int i = 0; i < n; i++){
	        cin >> s[i];
	    }
	    result = 0;
	    for(int i = 0; i < n-1; i++){
	        if(s[i] < s[i+1]){
	            result += (s[i+1] - s[i]) - 1;
	            cout << result << endl;
	        }
	        else if(s[i] > s[i+1]){
	            result += (s[i] - s[i+1]) - 1;
	            cout << result << endl;
	        } else{
	            result += 0;
	            cout << result << endl;
	        }
	    }
	    cout << result << endl;
	}
	
	return 0;
}
