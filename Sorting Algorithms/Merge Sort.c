#include <stdio.h>

int mergeSort(int *a, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m, r);
        merge(arr, l, m , r);
    } 
}

int merge(int *a, int l, int m ,int r) {
    int i = 0;
    int j = 0;
    int k = 0;
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1];
    int right[n2];
    for (i = 0; i < n1; i++) {
        left[i] = a[i];
    }
    for (j = 0; j < n2; j++) {
        right[j] = b[j + 1];
    }
    i = 0;
    j = 0;
    while ((i < n1) && (j < n2)) {
	if (a[i] <= b[j]) {
           c[k] = a[i];
	   i++;
        } else {
	      c[k] = b[j];
	      j++;
        }
        k++;
    }
    while (i < na) {
    	c[k] = a[i];
	k++;
        i++;
    }
    while (j < nb) {
    	c[k] = b[j];
	k++;
	j++;
    }
    return k;
}

void printArray(int *a, int n) {
    for (int i = 0; i < n; i++)
    {
	printf("%d ",a[i]);
    }
}

int main() {
    int a[] = {3, 8, 6, 7, 1, 2, 9, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int n = mergeSort(a, 0, n - 1);
    printArray(c, n);
}

