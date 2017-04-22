#include <stdio.h>
int main()
{
    int i;
    double net_margin;
    double prize[6]={1000000,600000,400000,200000,100000,0};
    double rate[6]={0.1,0.015,0.03,0.05,0.075,0.1};
    scanf("%lf",&net_margin);
    double r=0;
    for(i=0;i<=6;i++)
    {
        if(net_margin>prize[i])
        {r+=(net_margin-prize[i])*rate[i];
        net_margin=prize[i];
        }
    }
    printf("%0.2f\n",r);
    return 0;
}
