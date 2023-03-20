#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 1000
char* sortString(char* str);
int main() {
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove the newline character
    char* sortedStr = sortString(str);
    printf("Sorted string: %s\n", sortedStr);
    free(sortedStr);
    return 0;
}
char* sortString(char* str) {
    int numCount = 0, alphaCount = 0;
    char nums[MAX_LENGTH], alphas[MAX_LENGTH];
    // separate numbers and alphabets
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            nums[numCount++] = str[i];
        } else if (isalpha(str[i])) {
            alphas[alphaCount++] = str[i];
        }
    }
    nums[numCount] = '\0';
    alphas[alphaCount] = '\0';
    // sort the numbers and alphabets
    for (int i = 0; i < numCount - 1; i++) {
        for (int j = i + 1; j < numCount; j++) {
            if (nums[j] < nums[i]) {
                char temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for (int i = 0; i < alphaCount - 1; i++) {
        for (int j = i + 1; j < alphaCount; j++) {
            if (alphas[j] < alphas[i]) {
                char temp = alphas[i];
                alphas[i] = alphas[j];
                alphas[j] = temp;
            }
        }
    }
    puts(nums);
    puts(alphas);
 
    // concatenate the sorted numbers and alphabets in subsets
    char* sortedStr = malloc(sizeof(char) * (numCount + alphaCount + 1));
    int index = 0;
    for (int i = 0; i < numCount; i++) {
        sortedStr[index++] = nums[i];
        if (i < numCount - 1 && nums[i] != nums[i+1]) {
            sortedStr[index++] = nums[i+1] > nums[i]+1 ? '-' : '';
        }
    }
    sortedStr[index++] = ' ';
    for (int i = 0; i < alphaCount; i++) {
        sortedStr[index++] = alphas[i];
        if (i < alphaCount - 1 && alphas[i] != alphas[i+1]) {
            sortedStr[index++] = '-';
        }
    }
    sortedStr[index] = '\0';
    return sortedStr;
}



Output:


Enter a string: 123434acibdf295869asdsd37695dfgasd
Sorted string:  123344abcdfi256899addss35679addfgs