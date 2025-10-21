#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter your integer %d and press enter",i+1);
        scanf("%d",&arr[i]);
    }
    int highest=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>highest){
            highest=arr[i];
        }
    }
    int lowest=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
        }
    }
    printf ("Your highest element is %d, and your lowest element is %d\n",highest,lowest);
    printf("The difference between highest and smallest elements is: %d\n", highest-lowest);
    return 0; 
}
