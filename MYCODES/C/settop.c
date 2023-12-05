#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void performUnion(int arr1[], int arr2[], int len1, int len2) {
    int result[100]; // Assuming a maximum of 100 elements in the union

    int i, j, k;
    i = j = k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else if (arr1[i] > arr2[j]) {
            result[k] = arr2[j];
            j++;
        } else {
            result[k] = arr1[i];
            i++;
            j++;
        }
        k++;
    }

    while (i < len1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < len2) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    printf("Union of arrays: ");
    for (int l = 0; l < k; l++) {
        printf("%d ", result[l]);
    }
    printf("\nBinary representation: ");
    for (int l = 0; l < k; l++) {
        printBinary(result[l]);
        printf(" ");
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    performUnion(arr1, arr2, len1, len2);

    return 0;
}
