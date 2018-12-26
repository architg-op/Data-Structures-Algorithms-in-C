#include <stdio.h>

int binarySearch(int *a, int n, int num ,int start, int end) {
    if (start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
   // printf("%d ",mid);
    if (a[mid] == num) {
        return mid;
    }
    else if (num < a[mid]) {
        return binarySearch(a, n, num, start, mid - 1);
    }
    else {
	return binarySearch(a, n, num, mid + 1, end);
    }
}

int main() {
    int a[] = {2, 5, 9, 13, 19, 28};
    int n = sizeof(a) / sizeof(a[0]);
    int num = 28;
    int idx;
    idx = binarySearch(a, n, num, 0, n - 1);
    if (idx == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at %d position\n", idx);
    }
}
