#include <stdio.h>
int main()
{
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    switch(c)
    {
    case '+':printf("%.2f\n",a+b);break;
    case '-':printf("%.2f\n",a-b);break;
    case '*':printf("%.2f\n",a*b);break;
    case '/':printf("%.2f\n",a/b);break;
    }

    printf("over \n");
    return 0;
}
