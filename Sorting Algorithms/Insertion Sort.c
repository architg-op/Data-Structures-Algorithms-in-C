#include <stdio.h>

void insertionSort(int *a, int n) {
    int idx;
    int val;
    for (int i = 1; i < n ; i++)
    {
        val = a[i];
        idx = i;
        while ((idx > 0) && (a[idx - 1] > val) 
        {
            a[idx] = a[idx - 1];
            idx--;
        }
    }
}

void printArray(int *a, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[] = {34 ,15 , 29 , 21 , 17};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a, n);	
    printf("Sorted Array is as follows \n");
    printArray(a, n);
}
