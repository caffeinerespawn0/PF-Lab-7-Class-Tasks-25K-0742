//25k-0742
#include <stdio.h>

int main() {
    int arr[5];
    int i;
    int temp;

    for(i = 0; i < 5; i++) {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    temp = arr[4];

    for(i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp; 

    printf("New array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

