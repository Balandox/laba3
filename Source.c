#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(long* arr, int* n) {
    long max = arr[0];
    long min = arr[0];
    int index_max, index_min;
    for (int i = 0; i < *n; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            index_max = i;
        }
        if (arr[i] <= min) {
            min = arr[i];
            index_min = i;
        }
    }
    int index_razn = index_max - index_min;
    return index_razn;
}
int main() {
    int n = 0, index_razn = 0;
    int array[1000];
    printf("Input amount of numbers: ");
    scanf("%d", &n);
    if (n > 1000) {
        printf("Error!Incorrect input.");
            return 0;
    }
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    index_razn = func(array, &n);
    printf("Res is: %d", index_razn);
    return 0;
}