#include<stdio.h>
int main (){
int n;scanf("%d",&n);
int arr[n];int found=0;
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int even=0;
int odd=0;
for(int i=0;i<n;i++){
if(arr[i]%2==0){
even++;
}else{
odd++;
}
}printf("number of even elements=%d\n",even);
printf("number of odd elements=%d",odd);
return 0;
}



