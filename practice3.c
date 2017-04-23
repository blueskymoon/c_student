


//一个正整数，它加上100和加上268后都是一个完全平方数，请问该数是多少?
/*意味着它是开方后还是正整数*/



#include <stdio.h> 
#include <math.h>

int main(void)
{
    int i;
    int x;
    int y;
    for(i=0;i<=10000;i++)
    {
        x=(int)sqrt(i+100);
        y=(int)sqrt(i+268);
        if(x*x==i+100&& y*y==i+268)
       printf("%d\n",i);
    }
    return 0;
}


