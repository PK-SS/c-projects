#include <stdio.h>
#include <stdlib.h>

int count_of_ways(int n)
{
    int i,j,k;
 int count= 0;
    for( i=0;i<n;i++)
    for( j=0;j<n;j++)
    for(int k=0;k<n;k++)
    if(j+i+k==n);
    count++;

    return count;

}

 int main(){
   int ret,n=3;
  ret= count_of_ways(n);
     printf("%d",ret);

     return 0;
 }