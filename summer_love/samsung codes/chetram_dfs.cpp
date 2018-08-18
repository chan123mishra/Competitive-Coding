#include <bits/stdc++.h>
using namespace std;

int mat[100][100];
int visited[100][100];
int n,m;


int is_safe(int i,int j) {

    if(i < n && i >= 0 && j >=0 && j < m && mat[i][j] != 0 && visited[i][j] == 0) {
        return 1;
    }

    return 0;
}

int ctr = 0;
int min_level(int l,int i,int j) {
	printf("rec = %d\n", ctr++);

    if(mat[i][j] == 3) {
        return 1;
    }

    visited[i][j] = 1;

    if(is_safe(i,j-1)) {
        if(min_level(l,i,j-1)) {
            return 1;
        }
    }

    if(is_safe(i,j+1)) {
        if(min_level(l,i,j+1)) {
            return 1;
        }
    }

    for(int k = 1; k <= l; k++) {
        if(is_safe(i-k,j)) {
            if(min_level(l,i-k,j)) {
                return 1;
            }
        }

        if(is_safe(i+k,j)) {
            if(min_level(l,i+k,j)) {
                return 1;
            }
        }
    }

    return 0;
}

void input(int mat[100][100]) {
    n = m = 50;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            mat[i][j] = 1;
        }
    }

    int r = 90;
    while (r >= m - 1) {
        r = rand() % m;
    }
    int c = rand() % n;

    mat[r][c] = 3;
    mat[m - 1][0] = 2;
}

int main() {

    int t;

//    cin>>t;
	t = 1;
    while(t--) {
//                cin>>n>>m;
//                for(int i = 0; i < n; i++){
//                        for(int j = 0; j < m; j++){
//                                cin>>mat[i][j];
//                        }
//                }
        srand(time(NULL));
        input(mat);

        int ans;

        for(int i = 1; i <= n; i++) {
            memset(visited,0,sizeof(visited));

            if(min_level(i,n-1,0)) {
                ans = i;
                break;
            }
        }

        cout<<ans<<endl;
    }
}

