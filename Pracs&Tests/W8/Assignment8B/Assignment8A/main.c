#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(const char * const lowPtr, const char * const highPtr);

int main()
{
    char string[100];
    printf("Enter in a word\n");
    scanf("%s", string);
        switch (isPalindrome(string, string + strlen(string) - 1)){

    case 0:
        printf("Is not a palindrome");
        break;
    case 1:
        printf("Is a palindrome");
        break;

        }
    return 0;
}

int isPalindrome(const char * const lowPtr, const char * const highPtr){

    if (tolower(*lowPtr)==tolower(*highPtr)){

        isPalindrome(lowPtr+sizeof(char), highPtr-sizeof(char));
        return 1;

    }
    else if(*lowPtr+1==*lowPtr-1){

        return 1;

    }


 return 0;

}
