#include<stdlib.h>
#include<stdio.h>
#define CHARS 256

int lesser(int a, int b);

int lus(char *str)
{
    int n = strlen(str);
    int cur_len = 1;
    int max_len = 1;
    int prev_index;
    int i;
    int *visited = (int *)malloc(sizeof(int)*CHARS);

    for (i = 0; i < CHARS;  i++)
        visited[i] = -1;

    visited[str[0]] = 0;


    for (i = 1; i < n; i++)
    {
        prev_index =  visited[str[i]];


        if (prev_index == -1 || i - cur_len > prev_index)
            cur_len++;

        else
        {

            if (cur_len > max_len)
                max_len = cur_len;

            cur_len = i - prev_index;
        }

        visited[str[i]] = i;
    }


    if (cur_len > max_len)
        max_len = cur_len;


    free(visited);

    return max_len;
}


/*int lesser(int a, int b)
{
    if(a>b)
        return b;
        else
            return a;
}
*/

int main()
{
   char str[100000];
   int t;
   int a[10];
   int i;
   int len;
   scanf("%d",&t);
   for(i = 0; i < t; i++){
   scanf("%s",str);
     len =  lus(str);
  a[i]=len;
  }

  for(i = 0 ; i<t ; i++)
  {
  printf("%d\n",a[i]);
  }

    return 0;
}
