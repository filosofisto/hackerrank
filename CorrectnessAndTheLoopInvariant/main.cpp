#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

inline void swap_items(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(int N, int arr[]) {
    int i,j;

    for (i = 1; i < N; i++) {
        j = i;

        while (j > 0 && arr[j-1] > arr[j]) {
            swap_items(arr[j], arr[j-1]);
            j--;
        }
    }

    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}

int main(void) {
    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
