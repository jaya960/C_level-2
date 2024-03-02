#include<stdio.h>
int main()
{
    int x,count=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    loop: if(x/10)
    {
        count++;
        x = (x/10);
        goto loop;
    }
    printf("%d",count);
    return 0;
}