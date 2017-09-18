#include<stdio.h>

int pow(int a, int b){
int i;
for(i=0;i<b;i++)
  a*=a;
return a;
}
