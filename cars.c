#include <stdio.h>

int cars()
{
    FILE * fptr;
    char * arrayCars[5];
    int i;

    gets(arrayCars);

    fptr = fopen("cars.txt", "a+");
        fprintf(fptr, arrayCars);
        fprintf(fptr, "\n");
    fclose(fptr);

    fptr = fopen("cars.txt", "r+");
        fgets(arrayCars, 10, fptr);
        printf("%s", arrayCars);
    fclose(fptr);
}
