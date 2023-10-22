#include<stdio.h>
int main()
{
    int u;
    float cpu,sur,bill;
    scanf("%d",&u);
    if(u<=199)
    cpu=1.20;
    else if(u>=200&&u<400)
    cpu=1.40;
    else if(u>=400&&u<600)
    cpu=1.60;
    else if(u>=600&&u<800)
    cpu=1.80;
    else if(u>=800)
    cpu=2.00;
    bill=cpu*u;
    if(bill>=400)
    sur=(bill*15)/100;
    else
    sur=0;
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",cpu);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",sur);
    printf("Total Amount: %.2f
",bill+sur);
    
}