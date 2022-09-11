#include<stdio.h>
#define MAX 10
void main(){
int a[MAX][MAX],m,n,i,j;

printf("enter the total no of row\n ");
scanf("%d",&m);
printf("enter the total no of column\n ");
scanf("%d",&n);


//for 1st matrix
printf("for 1st matrix\n ");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
printf("enter the no. for 1st matrix\n ");
scanf("%d",&a[i][j]);
}
}
//for 2nd matrix

printf("for 2nd matrix\n ");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
printf("enter the no.for 2nd matrix\n ");
scanf("%d",&a[i][j]);
}
}

printf("\n");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
printf("%d\t",a[j][i]);
}
printf("\n");
}

}
