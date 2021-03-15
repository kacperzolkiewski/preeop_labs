#ifndef lab04_h
#define lab04_h

#include <iostream>
#include <math.h>
#define SIZE 32

/** 
 *Struktura reprezentująca tablice int (licbe zapisaną bitowow) oraz długość tej liczby w int.
 */
typedef struct{
  int tab[SIZE];
  int n;
}Bits;


typedef void (*function)(Bits *, Bits *);

/**
 *funkcja wypełniająca strukturę odpowiednimi liczbami z tablicy int o długośći n
 *
 *\param wskaźnik na strukturę
 *\param wskaźnik do tablicy int*
 *\param długość tablicy
 */
void set(Bits *, int *, int);

/**
 *Funkcja wyświetlająca liczbę bitową
 *
 *\param stały wskaźnik na strukturę
 */
void print(const Bits *);

/**
 *Funkcja dodająca do siebie dwie liczby bitowe
 *
 *\param dwa wskaźniki na struktury (liczby bitowe)
 *\return stała struktur przedstawiająca liczbę bitową.
 */
const Bits add_up(Bits *, Bits *);

/**
 *Funkcja odwracająca liczbę bitową
 *
 *\param wskaźnik na strukturę Bits
 */
void reverse(Bits *);

/**
 *Funkcja dzięki której uruchamiamy poszczególne funkcje typu function wraz z dwoma wskaźnikami na strukturę Bits.
 *
 *\param funkcja typu function.
 *\param dwa wskaźniki na strukturę Bits.
 */
void doOperation(function, Bits *, Bits *);

/**
 *Funkcja wykonująca bitowe and
 *\param dwa wskaźniki na strukturę Bits
 */
void bit_and(Bits *, Bits *);

/**
 *Funkcja wykonująca bitowe xor
 *
 *\param dwa wskaźniki na strukturę Bits
 */
void bit_xor(Bits*, Bits *);

/**Funkcja zamieniająca liczbę zapisaną bitowo na liczbę zapisaną w systemie dziesiętnym.
*
*\param stały wskaźnik na strukturę Bits
*\return Liczba int
*/
int to_decimal(const Bits *);


#endif