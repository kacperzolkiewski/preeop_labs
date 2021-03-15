#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

/**
 *Struktura opakowująca tablicę znakową.
 */
typedef struct{
  char *str = nullptr;
}MyString;

// Pomocna zmienna statyczna.
static MyString temp;

/**
 *Funkcja kopiująca napis do struktury
 *
 *\param Referencja do struktury MyString
 *\param Stały napis, który chcemy skopiować.
 */
void init(MyString &, const char *);

/**
 *Funkcja sklejająca do siebie dwa napisy znajdujące się w strukturach MyString
 *
 *\param Dwie struktury const MyString których napisy dodajemy do siebie.
 *\return Struktura MyString, w której umieszczamy dodane do siebie napisy.
 */
MyString join(const MyString ,const MyString);

/**
 *Funkcja, która robi swapa na dwóch strukturach MyString
 *
 *\param Dwie struktury MyString przekazane przez referencje.
 */
void swap(MyString &, MyString &);

/**
 *Funkcja, która robi swapa na dwóch strukturach MyString
 *
 *\param Dwa wskaźniki do referencji struktur MyString.
 */
void swap(MyString *&, MyString *&);

/**
 *Funkcja usuwająca napisy w strukturach MyString
 *
 *\param Opcjonalnie od 1 do 5 struktur przekazanych przez referencje, których deafultowa wartość to struktura temp.
 */ 
void del(MyString &string1, MyString &string2 = temp, MyString &string3 = temp, MyString &string4 = temp, MyString &string5 = temp);

/**
 *Funkcja pomocnicza usuwająca napis ze struktury MyString
 *
 *\param struktura MyString przekazana przez referencje
 */
void del1(MyString &);

#endif

