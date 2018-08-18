#include<stdio.h>
#include<stdlib.h>

int main()
{
    int hashtab[10];
    int val;
    int i;
    for(i = 0 ; i < 10; i++)
        hashtab[i] = 0;

    while(1)
    {
        printf("Select one of the following 1. insert  2. search  3. delete 4. exit \n");
        cin>>i;
        switch(i)
        {
        case 1:
                    cin>>val;
                    insert_hash(hashtab,val);
                    break;
        case 2:
                    cin>>val;
                    search_hash(hashtab,val);
                    break;
        case 3:
                    cin>>val;
                    delete_hash(hashtab,val);
}
