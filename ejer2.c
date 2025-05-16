// utilizando una lista, capturar las 5 calificaciones de un alumno e imprimir el promedio 

#include <stdio.h>
#include <math.h>

int main()
{
    int list [5];
    int i;
    float prom;
    float calif;
    
    for (i=0; i<5; i++) 
    {
        printf("introducir calif:");
        scanf("%d", &list[i]);
    }
    
    for(i=0; i<5; i++)
    { 
        calif= calif+list[i];
    }
    
    prom= calif/5;
    printf("El promedio de calificaciones es: %f\n", prom);
    
    return 0; 
} 
