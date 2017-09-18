#include<stdio.h>

int pow(int a, int b){
int i;
  printf("this will illustrate the power function");
for(i=0;i<b;i++)
  a*=a;
return a;
}
