#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * mynewfilePtr;
    char data[256];
    printf("This is an introduction to file handling in C\n");
    //This is an introduction to file handling in C

    //Write to file AND Creating new file
    mynewfilePtr=fopen("file.txt", "w");
    fprintf(mynewfilePtr,"I have been added\n");
    fputs("I too have been added", mynewfilePtr);
    fclose(mynewfilePtr); //file has to be closed before mode can be changed ie before you read from file or append

    //Read from file
    mynewfilePtr=fopen("file.txt", "r");

        //error handling
    if (mynewfilePtr==NULL){
            printf("File was not opened");
            return 1;
    } //Advanced concept, but incredibly helpful in large programs to diagnose code errors/exceptions
        while ((fgets(data, sizeof(data), mynewfilePtr) != NULL))
            {
                printf("%s", data);

            }
    fclose(mynewfilePtr);
    //Append file
    mynewfilePtr=fopen("file.txt", "a");

    //Randomly access file


    //Close file
    fclose(mynewfilePtr);

    return 0;
}
