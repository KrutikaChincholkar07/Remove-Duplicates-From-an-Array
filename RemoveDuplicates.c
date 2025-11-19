#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int unique[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < index; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            unique[index] = arr[i];
            index++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
