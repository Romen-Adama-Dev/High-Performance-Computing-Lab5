#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void mat_vec(double* a, double* x, double* y, int n)
{
  
  int i,j;
  
  for(i=0;i<n;i++){
    y[i]=0.0;
    for(j=0;j<n;j++){
      y[i]+=a[i+n*j]*x[j];
    }
  }
    
}
