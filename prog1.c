#include<stdio.h>
void main(){
int a[10],i,sum=0;


for(i=0;i<10;i++){
printf(enter the no.\n ");
scanf("%d",&a[i]);
}

for(i=0;i<10;i++){
sum=sum+a[i];
}
printf("sum=%d",sum);
}
