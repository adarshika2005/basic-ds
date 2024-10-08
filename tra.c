#include<stdio.h>
int main()
{
    int a[] ={2,3,4,5,1};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);

    }
    return 0;
}