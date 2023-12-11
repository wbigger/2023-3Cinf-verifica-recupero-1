#ifndef _PERIMETRO_H_
#define _PERIMETRO_H_

#include <stdbool.h>

/** @brief Calcola il perimetro di una figura regolare con n lati
 *
 * Vincoli: il numero dei lati e la lunghezza del lato devono essere maggiori di 0.
 * Se la lunghezza del lato è minore di 0, tornare 0
 * Se il numero dei lati è minore o uguale a 0, tornare NAN
 *
 * @param n il numero di lati del poligono regolare
 * @param l la lunghezza di ogni lato
 * @return il perimetro del poligono regolare
 */
float calcola_perimetro(int n, float l);

#endif /* _PERIMETRO_H_ */