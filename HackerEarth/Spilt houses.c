#include <stdio.h>

int main(){
	int num,cnt=0;
	scanf("%d", &num);
	char arr[num];
	scanf("%s",&arr);
	for(int i =0;arr[i]!='\0';i++){
		if(arr[i]=='H' && arr[i+1]=='H'){
			cnt=1;
			break;
		}
		else if(arr[i]=='.'){
			arr[i]='B';
		}
	}    
	if(cnt==0){          			
		printf("YES\n");  
		printf("%s",arr);
	}     
	else{
		printf("NO");
	}
}