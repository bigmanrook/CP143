#include <stdio.h>
#include <stdlib.h>

typedef struct {
int dim;
double *data;
} Vector;

enum ResultType {SUCCESS, FAIL};
typedef enum ResultType Result;

void fillVector(Vector *vPtr);
void emptyVector(Vector *vPtr);
void printVector(Vector v);
Result dotProduct(Vector v1, Vector v2, double *product);
double norm(Vector v);




int main()
{


    /*
    i. Declare two Vector variables.
    Verklaar twee Vector-veranderlikes.
    ii. Call function fillVector for both vectors to reserve space for their elements and fill them with user-supplied values.
    Roep funksie fillVector vir beide vektore om spasie te reserveer vir hul
    elemente en dit te vul met gebruiker-gespesifiseerde getalle.
    iii. Call function dotProduct to calculate the dot product between the two
    vectors if possible, and display the appropriate result based on the value
    that the function returns.
    Roep funksie dotProduct om die dot-produk tussen die twee vektore te
    bereken indien moontlik, en vertoon die toepaslike resultaat gebaseer op
    die waarde wat die funksie teruggestuur het.
    iv. Call function norm for both vectors, and display the result.
    Roep funksie norm vir beide vektore, en vertoon die resultaat.
    v. Lastly, call function emptyVector for both vectors to release the memory
    previously allocated for their elements.
    Laastens, roep funksie emptyVector vir beide vektore om die geheue wat
    voorheen vir hul elemente gereserveer is vry te stel.
    */

    Vector v1;
    Vector v2;
    double prod;
    fillVector(&v1);
    fillVector(&v2);
    printVector(v1);
    printVector(v2);

    if (dotProduct(v1, v2, &prod)==1){

    printf("The vectors do not have the same dimension\n");

    }
    else if (dotProduct(v1, v2, &prod)==0){

    printf("The dot product was successfully calculated\n");
    printf("The dot product is: %lf", prod);
    emptyVector(&v1);
    emptyVector(&v2);

    }

    return 0;
}

void fillVector(Vector *vPtr){

    printf("Enter in dimensions for vector\n");
    scanf("%d", &(vPtr->dim));
    vPtr->data = (double *)malloc(vPtr->dim * sizeof(double));
    for (int i=0;i<vPtr->dim;i++){

    printf("Enter in data for vector\n");
    scanf("%lf", &(vPtr->data[i]));

    }

}

void emptyVector(Vector *vPtr){

    free(vPtr->data);

}

void printVector(Vector v){


    for (int i=0;i<v.dim;i++){

        printf("%lf\n", v.data[i]);

    }

}

Result dotProduct(Vector v1, Vector v2, double *product){

    if ((v1.dim!=v2.dim)){

            return FAIL;

    }
    else if (v1.dim==v2.dim){
        *product=0.0;

        for (int i=0;i<v1.dim;i++){

        *product+=(v1.data[i]*v2.data[i]);

        }
        return SUCCESS;

    }

}
