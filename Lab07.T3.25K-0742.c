#include <stdio.h>

int main() {
    int marks[10], pass[10], fail[10];
    int i, pcount = 0, fcount = 0;
    float psum = 0, fsum = 0;

    printf("Enter quiz marks of students:\n");

    for(i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

    
        if (marks[i] == -1)
            break;

        if (marks[i] >= 5 && marks[i] <= 10) {
            pass[pcount++] = marks[i];
            psum += marks[i];
        }
        else if (marks[i] >= 0 && marks[i] < 5) {
            fail[fcount++] = marks[i];
            fsum += marks[i];
        }
        else {
            printf("Invalid marks! Enter marks between 0 and 10 only.\n");
            i--;
        }
    }

    printf("\nPass Students Marks\n");
    if (pcount > 0) {
        for(i = 0; i < pcount; i++)
            printf("%d ", pass[i]);
        printf("\nAverage of Pass Students: %.2f\n", psum / pcount);
    } else {
        printf("No pass students.\n");
    }

    printf("\nFail Students Marks\n");
    if (fcount > 0) {
        for(i = 0; i < fcount; i++)
            printf("%d ", fail[i]);
        printf("\nAverage of Fail Students: %.2f\n", fsum / fcount);
    } else {
        printf("No fail students.\n");
    }

    return 0;
}

