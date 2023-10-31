#include<stdio.h>
int main()
{
    int p,che,b,m,com;
    float total,per;
    scanf("%d%d%d%d%d",&p,&che,&b,&m,&com);
    total=(p+che+b+m+com);
    per=((total*100)/500.0);
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else
    printf("Grade F");
}