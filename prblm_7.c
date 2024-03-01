#include<stdio.h>
int main()
{
    int x=10,ones,tens;
    loop: if(x<100)
    {
        if(x%2)
        {
            ones= x%10;
            tens= x/10;
            if((ones+tens)==7)
            printf("%d\n",x);
        }
        x++;
        goto loop;
    }
    return 0;
}