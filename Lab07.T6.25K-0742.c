#include<stdio.h>
int main(){
    char str[30];
    int vowel=0,consonant=0; 
    printf("Enter your word");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'|| str[i]=='A'||str[i]=='e'|| str[i]=='E'||str[i]=='i'|| str[i]=='I'||str[i]=='o'|| str[i]=='O'||str[i]=='u'|| str[i]=='U'){
            vowel++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            consonant++;
        }
        else{
            printf("Enter a valid word");
        }
        i++;
    }
printf("The number of vowels in your word are: %d\n",vowel);
printf("The number of consonants in your word are: %d\n",consonant);
return 0; 

}
