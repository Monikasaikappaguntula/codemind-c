#include<stdio.h>
int main()
{
    int n,m;
    float k;
    scanf("%d%d",&n,&m);
    scanf("%f",&k);
    if((n/k)<=m)
    printf("YES");
    else
    printf("NO");
}