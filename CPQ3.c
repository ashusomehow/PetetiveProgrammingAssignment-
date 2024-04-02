#include <stdio.h>

void merge_arrays(int arr1[], int arr2[], int size1, int size2) {
    int merged_size = size1 + size2;
    int merged[merged_size];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged array: ");
    for (int l = 0; l < merged_size; l++) {
        printf("%d ", merged[l]);
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for the first array in sorted order: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for the second array in sorted order: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    merge_arrays(arr1, arr2, size1, size2);

    return 0;
}
