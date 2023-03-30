#include <stdio.h>

int strLen(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int isAlpha(char ch){
    return (ch >= 65 && ch <=90) || (ch >=97 && ch<= 122) ? 1 : 0;
}

int isDigit(char ch){
    return (ch >= 48 && ch <= 57) ? 1 : 0;
}

int isUpper(char ch){
    return (ch >= 65 && ch <=90)  ? 1 : 0;
}

int isLower(char ch){
    return  (ch >=97 && ch<= 122) ? 1 : 0;
}


int main()
{
    printf("Enter the string : ");
    char str[1000];
    scanf("%[^\n]s",str);
    int i=0,alpFlag = 0, intFlag = 0, upFlag = 0, lrFlag = 0, splFlag = 0, length = strLen(str);

    if(length < 8){
        printf("The password must be atleast 8 character length\n");
        return 0;
    }else{
        while(str[i] != '\0'){
            if( isAlpha(str[i]) && (upFlag!=1 || lrFlag!=1) ){
                alpFlag = 1;
                if(isUpper(str[i])){
                    upFlag = 1;
                }else if(isLower(str[i])){
                    lrFlag = 1;
                }
            }else if(intFlag!=1 && isDigit(str[i])){
                intFlag = 1;
            }else if( (splFlag!=1) && (!(isAlpha(str[i]))) && (!(isDigit(str[i]))) && (str[i] != ' ')){
                splFlag = 1;
            }
            i++;
        }
    }
    
    if(alpFlag == 1 && intFlag == 1 && upFlag == 1 && lrFlag == 1 && splFlag  == 1){
        printf("Your have entered a valid password\n");
    }else if(alpFlag != 1){
        printf("You must include alphabets, both in uppercase and lowercase\n");
    }else if(intFlag != 1){
        printf("Numbers(0-9) are missing\n");
    }else if(splFlag != 1){
        printf("Special characters must be included\n");
    }else if(alpFlag == 1){
        if(lrFlag != 1){
            printf("Lowercase alphabets are missing\n");
        }else if(upFlag != 1){
            printf("Uppercase alphabets are missing\n");
        }
    }
    
    return 0;
}