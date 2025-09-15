#include <stdio.h>

int getStringLength(const char string[]);
void copyToUppercase(const char original[], char copy[], int length);

int main()
{
    char originalString[10], copiedString[10];
    int length;

    scanf("%9s", originalString); // input handled by CodeRunner

    length = getStringLength(originalString);
    copyToUppercase(originalString, copiedString, length);

    printf("\"%s\" converted to uppercase is \"%s\"", originalString, copiedString);

    return 0;
}

int getStringLength(const char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
void copyToUppercase(const char original[], char copy[], int length){

    int i;
    for(i=0;i<length;i++) {
        if (original[i] >= 'a' && original[i] <= 'z'){

            copy[i]=original[i]-32;

        }
        else{

            copy[i]=original[i];

        }
    }

}
