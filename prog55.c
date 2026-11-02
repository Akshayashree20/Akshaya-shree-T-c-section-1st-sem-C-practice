#include<stdio.h>
int main (){
int n;
scanf("%d",&n);
int i=1,sum=0;
while(i<=n){
sum=sum+1;
i++;
printf("sum of numbers from 1 to %d=%d\n",n,sum);
}
return 0;
}                    
