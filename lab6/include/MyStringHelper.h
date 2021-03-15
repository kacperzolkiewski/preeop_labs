#ifndef MYSTRINGHELPER_H
#define MYSTRINGHELPER_H

#include <iostream>
#include <cstring>
#include "MyString.h"

/**
 *Klasa pomocnicza opakowująca char *
 */
class MyStringHelper{
  public:
  char *str1;

  /**
   *Metoda zamieniająca napis w klasie MyString
   *
   *\param klasa MyString, której napis chcemy zamienić
   *\param Napis, na który chcemy zamienić w klasie MyString
   */
  void replace(MyString&, const char*);
};

/**
 *Funkcja zamieniająca napisy w klasach MyString
 *
 *\param klasy MyString, których napisy chcemy zamienić ze sobą
 */
void swap(MyString&, MyString&);


#endif