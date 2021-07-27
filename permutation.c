#include <stdio.h>
int func1(int n,int r);
int main()
{
    int k1,k3;
    char k2;
    scanf("%d %c %d",&k1,&k2,&k3);
    if(k1>k3)
    {
        if(k3==0)
        printf("\n1");
        else
        func1(k1,k3);
    }
    else if(k1==k3)
    {
        printf("\n1");
    }
    else
    {
        printf("Invalid Text");
    }
    return 0;
}
int func1(int n,int r)
{
    int n1=1;
    int n2=n;
    int i;
    n=1;
    for(i=1;i<=r;i++)
    {
        n=n2*n;
        n2--;
    }
    printf("\n%d",n);
    return 0;
}
