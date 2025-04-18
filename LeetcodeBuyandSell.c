If the Code to print maxprofit is written in following way it provides output as follows:
Enter number of prices : 6
Enter prices:7,1,5,3,6,4
maximum profit is =-2
Code:
#include<stdio.h>
int main()
{
    int n,i,j,maxprofit=0;
    printf("Enter the number of Prices:");
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Prices:");
        scanf("%d",&price[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            maxprofit=price[j]-price[i];
            

        }
    }
    printf("The Maximum Profit will be :%d",maxprofit);
    return 0;

}

But if the code is correct:

#include<stdio.h>
int main()
{
    int n,i,j,maxprofit=0,profit;
    printf("Enter the number of Prices:");
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Prices:");
        scanf("%d",&price[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            profit=price[j]-price[i];
                if(profit>maxprofit)
                {
                    maxprofit=profit;
                }
        }
    }
    printf("The Maximum Profit will be :%d",maxprofit);
    return 0;

}

Is there a problem in initializing the maxprofit=0 in first code.
