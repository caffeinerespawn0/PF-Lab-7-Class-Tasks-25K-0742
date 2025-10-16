#include<stdio.h>
int main(){
	int marks[10];
	int search=0,count=0,i=0;
	for(i=0;i<10;i++){
		printf("Enter your marks %d\n",i+1);
		scanf("%d",&marks[i]);
	}
	printf("Enter thenumber whose occurences you want to search:\n");
	scanf("%d",&search);
	for(i=0;i<10;i++){
		if(marks[i]==search){
			count++;
		}
	}
	if(count>0){
		printf("The number of times %d was found is:%d\n",search,count);
	}
	else {
		printf("Number not found\n");
	}
	return 0; 
}
