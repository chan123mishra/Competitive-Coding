#include <iostream>
#include <cstdio>

void merge(int a[], int low, int high1, int low1, int high, int temp[])
{
    int i, j, k;
    i = low;
    j = low1;
    k = low;

    while (i <= high1 && j <= high) {
        if (a[i] <= a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i <= high1) temp[k++] = a[i++];
    while (j <= high) temp[k++] = a[j++];
}

void copy(int a[], int low, int high, int temp[])
{
    int i;

    for (i = low; i <= high; i++) {
        a[i] = temp[i];
    }
}

void merge_sort(int a[], int low, int high, int temp[])
{
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(a, low, mid, temp);
        merge_sort(a, mid + 1, high, temp);
        merge(a, low, mid, mid + 1, high, temp);
        copy(a, low, high, temp);
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);
    int a[n], temp[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    merge_sort(a, 0, n - 1, temp);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
