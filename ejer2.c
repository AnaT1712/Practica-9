// utilizando una lista, capturar las 5 calificaciones de un alumno e imprimir el promedio 

#include <stdio.h>
int main()

{
    int list [5];
    int i;
    int prom;
    int calif;
    
    for (i=0; i<5; i++) 
    {
        printf("introducir calif numero:");
        scanf("%d", &list[i]);
    }
    
    for(i=0; i<5; i++)
    { 
        calif= calif+list[i];
    }
    
    prom= calif/5;
    printf("El promedio de calificaciones es: %d\n", prom);
    
    return 0; 
} 
