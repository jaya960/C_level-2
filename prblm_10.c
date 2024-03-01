#include<stdio.h>
int main()
{
    int x=10,tens,sum=0;
    loop: if(x<100)
    {
        if(x%2)
        {
            tens= x/10;
            if(tens==7)
            sum += x;
        }
        x++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}