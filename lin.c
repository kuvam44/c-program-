#include <stdio.h>

int linearSearch(int* arr, int n, int key) {


    if (n == 0)
        return -1;


    if (arr[n - 1] == key) {
        return n - 1;
    }

    return linearSearch(arr, n - 1, key);
}

int main() {
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
    int n = sizeof(arr) / sizeof(int);
    int key = 30;


    int i = linearSearch(arr, n, key);

    if (i == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", i);

    return 0;
}
