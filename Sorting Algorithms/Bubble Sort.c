#include<stdio.h>

void bubbleSort(int *a, int n) {
    int flag = 0;
    int temp = 0;
    for (int i = 0; i < n-1; i++)
    {
        flag = 0;
    	for (int j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                flag = 1;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        printf("Round No. - %d \n", i+1);
        if (flag == 0) {
            break;
        }
    }
}

int main() {
    int a[] = {33, 15, 29, 88};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);
    printf("Sorted Array is as follows \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
