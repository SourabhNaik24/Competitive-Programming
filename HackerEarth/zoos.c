#include <stdio.h>
 
int main(){
	char n[1000];
	scanf("%s", &n);              			
	int cnt=0,cnt1=0;
	for(int i=0;n[i];i++){
		if(n[i]=='z'){
			cnt++;
		}
		else if(n[i]=='o'){
			cnt1++;
		}
	}
	if(2*cnt==cnt1){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}