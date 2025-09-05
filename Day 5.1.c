
#include<stdio.h>
int main()
{
    int P,R,T,SI;
    printf("Enter the values of P,R,T;");
    scanf("%d%d%d",&P,&R,&T);
    SI = (P*R*T)/100;
    printf("The Simple Interest is %d",SI);
    return 0;
}