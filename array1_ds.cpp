#include <iostream>

      // 10 20 30 40 50 -> 50 20 40 30 10 
int main ()
{
    int a[5],b[5],c[10],i;

    printf("enter element of 1st array :");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter element  of 2end array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n element of arrys merge :");

    for(i=0;i<5;i++)
    {
        c[i] = a[i];
        c[i+5] = b[i];

    }

    for(i=0;i<10;i++)
    {
      printf("%d",c[i]);
    }

}