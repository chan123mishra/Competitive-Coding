#include <iostream>
#include <cstdio>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int p, int r)
{
    int x = a[r];
    int i = p - 1;
    int j;

    for (j = p; j < r; j++) {
        if (a[j] <= x) {
            i += 1;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[r]);
    return i + 1;
}

void quick_sort(int a[], int p, int r)
{
    if (p < r) {
        int q = partition(a, p, r);
        quick_sort(a, p, q - 1);
        quick_sort(a, q + 1, r);
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

    quick_sort(a, 0, n - 1);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
