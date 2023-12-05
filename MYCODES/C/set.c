#include <stdio.h>

// Define some functions for set operations on bitstrings
void unionBitstrings(int *result, const int *set1, const int *set2, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = set1[i] | set2[i];
    }
}

void intersectionBitstrings(int *result, const int *set1, const int *set2, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = set1[i] & set2[i];
    }
}

void differenceBitstrings(int *result, const int *set1, const int *set2, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = set1[i] & ~set2[i];
    }
}

// Helper function to print a bitstring
void printBitstring(const int *bitstring, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (bitstring[i] >> j) & 1);
        }
        printf(" ");
    }
    printf("\n");
}

int main() {
    int set1[] = {0b10101010, 0b11001100, 0b11110000};
    int set2[] = {0b11110000, 0b11001100, 0b10101010};
    int size = sizeof(set1) / sizeof(set1[0]);

    int unionResult[size];
    int intersectionResult[size];
    int differenceResult[size];

    unionBitstrings(unionResult, set1, set2, size);
    intersectionBitstrings(intersectionResult, set1, set2, size);
    differenceBitstrings(differenceResult, set1, set2, size);

    printf("Set 1: ");
    printBitstring(set1, size);
    printf("Set 2: ");
    printBitstring(set2, size);

    printf("Union:   ");
    printBitstring(unionResult, size);
    printf("Intersection: ");
    printBitstring(intersectionResult, size);
    printf("Difference:   ");
    printBitstring(differenceResult, size);

    return 0;
}
