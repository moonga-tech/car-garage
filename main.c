#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 1;

    struct cars {
        char fault[255];
        char make[20];
        float fuel_cspt;
        int year;
    };

    /* -- cars in the garage-- */
    struct cars car1 = {"Engine Valves", "Toyata", 1.78, 1979};
    struct cars car2 = {"Piston Crown", "Mazda-487", 1.99, 1989};
    struct cars car3 = {"Wear Out Of Crank-Shaft", "Benz-4Diff", 2.678, 1966};
    struct cars car4 = {"Broken Gear in Differential Unit", "Range-Rover-z8d", 1.345, 1955};

    struct cars car5;
    strcpy(car5.fault, "Bonding of brakes\n");
    printf("%s\n", car5);

    /* -- output cars -- */
    printf("Fault/Problem = %s\nMake = %s\nFuel Consumption = %.1f\nYear = %d\n\n", car1.fault, car1.make,car1.fuel_cspt, car1.year);
    printf("Fault/Problem = %s\nMake = %s\nFuel Consumption = %.1f\nYear = %d\n\n", car2.fault, car2.make,car2.fuel_cspt, car2.year);
    printf("Fault/Problem = %s\nMake = %s\nFuel Consumption = %.1f\nYear = %d\n\n", car3.fault, car3.make,car3.fuel_cspt, car3.year);
    printf("Fault/Problem = %s\nMake = %s\nFuel Consumption = %.1f\nYear = %d\n", car3.fault, car4.make,car4.fuel_cspt, car4.year);

}
