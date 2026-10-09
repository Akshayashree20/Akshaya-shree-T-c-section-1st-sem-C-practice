#include<stdio.h>
int main (){
int a,b,c;//3,4,5
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c){
printf ("A is smallest");
}else if(b<a&&b<c){
printf("B is smallest");
}else
printf("C is smallest");
return 0;
}
