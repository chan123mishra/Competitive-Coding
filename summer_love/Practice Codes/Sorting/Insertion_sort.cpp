#include <iostream>
#include <cstdio>

void insertion_sort(int a[], int n)
{
    int i, j, key;

    for (j = 1; j < n; j++) {
        key = a[j];
        i = j - 1;
        while (i >= 0 && key < a[i]) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertion_sort(a, n);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
