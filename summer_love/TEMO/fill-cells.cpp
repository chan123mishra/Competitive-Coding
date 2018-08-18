#include<bits/stdc++.h>

#define n 3
#define unassigned 0
using namespace std;

//bool solve(int a[n][n]);
int a[50][50];
bool unassignedloc(int &row, int &column)
{
bool flag1,flag2;
    for(row = 0; row < n; row++){
        /*for(column = 0; column < n; column++){
            if(a[row][column] == unassigned)
                return true;

        }*/
		if(a[row][column] == unassigned)
                return true;
    }
    return false;
}

bool issafe(int row, int column, int num)
{
    for(int i; i < n; i++){
        if(a[row][i] == num){
            return false;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i][column] == num){
            return false;
        }
    }
    return true;
}

bool solve()
{
    int row, column;
    if(!unassignedloc(row,column)){
        return true;
    }

    for(int num = 1; num <= 3; num++){
        if(issafe(row,column, num)){
            a[row][column] = num;
            if(solve(a)){
                return true;
            }
            a[row][column] = unassigned;
        }
    }
}

void print()
{
    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col < n; col++)
             printf("%2d", a[row][col]);
        printf("\n");
    }
}

int main()
{
    int i;
    //int n;
    int j;
    //cin >> n;
    //int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    if(solve())
        print();
    else
        cout << "no solution"<< endl;
}



