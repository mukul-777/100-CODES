#include<stdio.h>
int main()
{
    int profit,loss,costprice,selliingprice,percentage;
    printf("Enter the cost price and selling price\n");
    scanf("%d%d",&costprice,&selliingprice);
    if(selliingprice>costprice)
    {
        profit=selliingprice-costprice;
        percentage=(profit*100)/costprice;
        printf("The profit is %d and profit percentage is %d%%\n",profit,percentage);
    }
    else if(costprice>selliingprice)
    {
        loss=costprice-selliingprice;
        percentage=(loss*100)/costprice;
        printf("The loss is %d and loss percentage is %d%%\n",loss,percentage);
    }
    else
    {
        printf("No profit no loss\n");
    }
}