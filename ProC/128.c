//Upper triangular matrix in C | Lower triangular matrix in C

#include <stdio.h>
 
int main (){
 
  int n, i, j, is_uppr=1, is_lowr=1, a;
 
  printf("Enter the number of rows:: ");
  scanf("%d",&n);
 
  printf("Enter the Array::\n");
  for( i=0; i<n; i++){
    for( j=0; j<n; j++){
      scanf("%d",&a);
      if( j>i && a!=0)//Check for upper triangular condition
    is_uppr = 0;
      if( j<i && a!=0)//Check for lower triangular condition
    is_lowr = 0;
    }
  }
  if( is_uppr==1 || is_lowr==1)
    printf("Upper Triangular\n");
  else
    printf("Not Upper Triangular\n");
 
  return 0;
 
}