#include <stdio.h>
#include <string.h>

void insertionsort(char arr[], int n) {
    int i, j;
    char key;

    for (i = 1; i < n; i++) {
        key = arr[i];

        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }
}

int main() {
    char arr[40];
    printf("enter a stirng: ");
    scanf("%s",&arr);
    int n = strlen(arr);

    insertionsort(arr, n);

    printf("sorted array: %s\n", arr);

    return 0;
}

