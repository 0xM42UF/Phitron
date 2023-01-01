#include <stdio.h>

void swap(int *a, int *b);
void bubble_sort(int a[], int len);
void largest_el(int a[], int idx);
void smallest_el(int a[], int idx);

int main()
{
    int i, N, k;
    scanf("%d", &N);

    int a[N];
    for(i=0; i<N; i++)
    {
        scanf("%d ", &a[i]);
    }

    scanf("%d", &k);

    bubble_sort(a, N);
    printf("Sorted array ");
    for(i=0; i<N; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");

    smallest_el(a, k-1);
    largest_el(a, N-k);


    return 0;
}

void bubble_sort(int a[], int len)
{
    int i, j;
    for(i=0; i<len-1; i++)
    {
        for(j=i; j<len; j++)
        {
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void smallest_el(int a[], int idx)
{
    printf("4th smallest element = %d\n", a[idx]);
}

void largest_el(int a[], int idx)
{
    printf("4th largest element = %d\n", a[idx]);
}
