#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, c, **m, *st;


    printf("Enter in the amount of classes\n");

    scanf("%d", &c);
    m = (int*) malloc(c*sizeof(int*));
    st = malloc(c*sizeof(int)))


    for (int i=0; i<c){

    printf("Enter in the amount of students in this class\n");
    scanf("%d", &s);

    m[i] = malloc(s*sizeof(int));

    }

    st[i] = malloc(c*sizeof(int));




    free(m);
    return 0;

}
