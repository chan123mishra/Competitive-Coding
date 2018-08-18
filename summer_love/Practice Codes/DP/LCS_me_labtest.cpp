#include<bits/stdc++.h>
using namespace std;

void showMatrix(char * mat, int row, int col) {
    int i;
    int j;

    printf("\n\nThe matrix is:-\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%c\t", * (mat + (i * col) + j));
        }
        printf("\n\n");
    }
    printf("\n\n");
}

void initialize(char * mat, int row, int col) {
    int i;
    int j;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            * (mat + (i * col) + j) = '\0';
        }
    }
}

void printlcs(char *mat, char X[],int i, int j, int col)
{
    //showMatrix(mat, col, col);
    if(i == 0 || j == 0)
        return;

    if(((*(mat + i * col + j ))) == 'x')
    {
        //cout<<X[i];
        printlcs(mat,X,i - 1, j - 1, col);
        cout<<X[i - 1];
    }
    else if(((*(mat + i * col + j ))) == '<')
    {
       printlcs(mat,X,i, j - 1, col);
    }
    else
        printlcs(mat,X,i - 1, j, col);
}
int lcs(char X[], char Y[], int m, int n)
{
    int l[m + 1][n + 1];
    int i,j;
    char mat[m + 1][n + 1];

    initialize(&mat[0][0], m + 1, n + 1);

    for(i = 0; i <=m; i++)
    {
        l[i][0] = 0;
    }
    for(j = 0; j <= n; j++)
    {
        l[0][j] = 0;
    }

    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(X[i - 1] == Y[j - 1])
            {
                l[i][j] = l[i - 1][j - 1] + 1;
                mat[i][j] = 'x';
            }
            else if( l[i - 1][j] >= l[i][j - 1] )
            {
                l[i][j] = l[i - 1][j];
                mat[i][j] = '^';
            }
            else
            {
                l[i][j] = l[i][j - 1];
                mat[i][j] = '<';
        }
    }
}
//cout<<"Length of the largest common subsequence is :\t";
//cout<<l[m][n];
int col = n;

showMatrix(&mat[0][0], m + 1, n + 1);

printf("\n\n");
printlcs(&mat[0][0], X,m,n,n + 1);
printf("\n\n");
return l[m][n];
}
int main()
{

    char X[100];
    char Y[100];

    cin>>X;
    cin>>Y;

    int m,n;
    m = strlen(X);
    n = strlen(Y);

    int l =lcs(X,Y,m,n);
    cout<<"Length of the largest common subsequence is :\t";
    cout<<l;
    return 0;
}
