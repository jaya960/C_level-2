#include<stdio.h>
int main()
{
    int x= 1;
   loop: if(x<6)
    {
        printf("%d\n",x);
        x++;
        goto loop;
    }
    return 0;
}