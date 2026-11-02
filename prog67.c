#include<stdio.h>
int main (){
int n;scanf("%d",&n);
int arr[n];
int found=0;
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
//search - value
int key;scanf("%d",&key);
for(int i=0;i<n;i++){
if(arr[i]==key){
found=1;
printf("element found index=%d",i);
break;}
}
if(found==0){
printf("element not found");
}
return 0;
}

