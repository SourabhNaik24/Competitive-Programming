#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
 
int solve (long long N ) {
    if(N==3){
       return 0;
   }
   else{
       return 1;
   }
   return 0;
}
 
int main() {
    int T;
    int out_;
    char a = 'A';
    char b = 'B';
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {
        long long N;
        scanf("%lld", &N);
 
        out_ = solve(N);
        if(out_ == 1 || t_i == 0){
            printf("A");
            printf("\n");
        }
        else{
            printf("B");
            printf("\n");
        }
    }
    return 0;
}