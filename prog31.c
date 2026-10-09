 #include<stdio.h>
 int main(){
 int wt,a,c;
 scanf("%d %d %d",&wt,&a,&c);
 if(wt>(a*75)+(c*50)){
    printf("Boat will be stable");
    }
  else{
    printf("Boat will be drown");
  }
  return 0;
 }
