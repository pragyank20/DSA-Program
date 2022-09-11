#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void main(){
int a[MAX][MAX],m,n,i,j,count=0;

printf("enter the total no of row\n ");
scanf("%d",&m);
printf("enter the total no of column\n ");
scanf("%d",&n);

printf("enter the no. for 1st matrix\n ");

for(i=0;i<2;i++){
  for(j=0;j<2;j++){

scanf("%d",&a[i][j]);
}
}

for(i=0;i<m;i++){
  for(j=0;j<n;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
//checking...................

for(i=0;i<m;i++){
  for(j=0;j<n;j++){
   if(a[i][j]==0){
    count++;
    }
}
}
    if(count>(m*n)/2){
       printf("Matrix is Sparse\n");
}
     else{
           printf("Matrix is Not Sparse\n");
}

}

