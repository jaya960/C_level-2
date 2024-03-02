#include<stdio.h>
int main()
{
    int x,y,sum=0,count=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    x=y;
    loop: if(x/10)
    {
        count++;
        sum += (x%10);
        x= (x/10);
        goto loop;
    }

    //sum += (y/(count-1));
    printf("%d",sum);
    return 0;

}