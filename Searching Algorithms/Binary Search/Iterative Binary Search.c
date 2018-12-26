#include <stdio.h>

int binarySearch(int *a, int n, int num) {  
    int start = 0;
    int mid;
    int end = n - 1;
    while(start <= end)
    {
	mid = (start + end) / 2;
	if (a[mid] == num) {
 	    return mid; 
        }
        else if (num < a[mid]) {
	    end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    } 
    return -1;
}

int main() {
    int a[] = {15, 19, 22, 35, 99};
    int idx;
    int n = sizeof(a) / sizeof(a[0]);
    int num = 29;
    idx = binarySearch(a, n , num);
    if (idx == -1) {
        printf("Element not found\n");
    }
    else {
	printf("Element found at %d index\n", idx);
    }
}
