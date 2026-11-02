#include<stdio.h>
int main (){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}//{10,20,30,40,50}
int largest=arr[0];//10(0th element)
for(int i=1;i<n;i++){
if(arr[i]>largest){
largest=arr[i];
}
}printf("largest=%d",largest);
return 0;
}
