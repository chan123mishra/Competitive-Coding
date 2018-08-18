#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int ctr ;

    long c;
    int rem = 0;
    while(t--)
    {
        ctr = 0;
        scanf("%ld",&c);

        while(c != 0)
        {
            rem = c % 10;

            if(rem == 4)
                ctr++;

            c = c / 10;
        }

        printf("%d\n",ctr);
    }

    return 0;
}
