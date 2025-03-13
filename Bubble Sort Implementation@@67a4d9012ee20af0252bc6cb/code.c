#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the number: ");
    for (int i = 0; i < n; i++) {
        scanf("%1d", &arr[i]); 
    }

    bubbleSort(arr, n);

    printf("Sorted number: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
