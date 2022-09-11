#include<stdio.h>
void main(){
int a[2][2],b[2][2],c[2][2],i,j,sum=0;

//for 1st matrix
printf("for 1st matrix\n ");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
printf("enter the no. for 1st matrix\n ");
scanf("%d",&a[i][j]);
}
}

//for 2nd matrix

printf("for 2nd matrix\n ");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
printf("enter the no.for 2nd matrix\n ");
scanf("%d",&b[i][j]);
}
}
//for 3rd matrix
printf("for 3rd matrix\n ");
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
}
}

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
       printf("%d\t",c[i][j]);
}
}

}
