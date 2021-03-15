#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

/**
 *Klasa MyString opakowująca wskażnik na char
 */
class MyString{
  public:

  char *str1;

  /**
   *Metoda zwracająca wskaźnik char klasy
   */
  char *str() const;

  /** 
   *Metoda zapisująca napis do klasy
   *
   *\param napis który chcemy zapisać do klasy
   */
  void set_string(const char *);

  /**
   *Metoda przyklejająca napis z innej klasy MyString do istrniejącego już napisu w klasie.
   *
   *\param Klasa, której napis przyklejamy do naszej klasy.
   */
  void join(MyString &);

  /**
   *Funkcja zamieniająca istniejący już napis w klasie
   * 
   *\param Napis, na który chcemy zamienić napis z klasy
   */
  void replace(const char *);

  /**
   *Metoda zamieniająca napisy znajdujące się w klasach
   *
   *\param klasa, której napis zamieniamy z napisem aktualnej klasy
   */
  void swap(MyString&);

  /**
   *Funkcja usuwająca napisy w klasach
   */
  void clear_string();
};


#endif