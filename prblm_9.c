#include<stdio.h>
int main()
{
    int x=10,ones,sum=0;
    loop: if(x<100)
    {
        ones= x%10;
        if(ones==5)
        {
            sum += x;
        }
        x++;
        goto loop;
    }
    printf("%d\n",sum);
    return 0;
}
