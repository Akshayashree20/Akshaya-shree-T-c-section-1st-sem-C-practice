#include<stdio.h>
int main () {
float Bill,discount;
scanf("%f %f",&Bill,&discount);
printf("Bill=%f",Bill-(Bill*discount/100));
return 0;
}

