#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

#include "perimetro.h"

int main()
{
    /** IMPORTANTE */
    /* NON MODIFICARE IL CONTENUTO DI QUESTO FILE!!! */

    int n_punti_test = 0;

    /** Test */
    {
        int n = 0;
        float l = 0.0F,p = 0.0F;

        l = 30;
        n = 10;
        p = calcola_perimetro(n, l);
        printf("Il perimetro con %d lati di lunghezza %0.3F e': %0.4f\n", n, l, p);
        assert( (p > 300.0F - 0.01) && (p < 300.0F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");
    }

    
    printf("Tutti i test sono andati a buon fine\n");
    printf("Punteggio finale: %d/%d\n", n_punti_test, n_punti_test);
    printf("Per il punto bonus: correzione manuale del professore\n");
    return n_punti_test;
}