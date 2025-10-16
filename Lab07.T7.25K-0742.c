#include <stdio.h>

int main() {
    int arr[10], i, freq[100] = {0}; 
    printf("Enter 10 IDs:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        if(freq[arr[i]] == 0) {
            freq[arr[i]] = 1;   
        } else {
            arr[i] = -1;       
        }
    }

    printf("\nUpdated list:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
