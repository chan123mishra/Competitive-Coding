#include <iostream>
#include <cstdio>

int heap_size;

int left(int i)
{
    return (2 * i);
}

int right(int i)
{
    return ((2 * i) + 1);
}

void max_heapify(int a[], int i)
{
    int l = left(i);
    int r = right(i);
    int largest;

    if (l < heap_size && a[l] > a[i]) largest = l;
    else largest = i;

    if (r < heap_size && a[r] > a[largest]) largest = r;

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        max_heapify(a, largest);
    }
}

void build_max_heap(int a[], int n)
{
    heap_size = n;
    int i;

    for (i = n / 2; i >= 0; i--) {
        max_heapify(a, i);
    }
}

void heap_sort(int a[], int n)
{
    build_max_heap(a, n);
    int i;

    for (i = n - 1; i >= 1; i--) {
        int temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        heap_size--;
        max_heapify(a, 0);
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

    heap_sort(a, n);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
