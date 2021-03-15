#pragma once
#include <iostream>

/*
 *Klasa reprezentująca wektor w 2D, mający współrzędną x-ową i y-ową.
 */
class Vector2D{
  public:
  //Konstructor kopiujący
  Vector2D(const Vector2D&);

  //Konstruktor przenoszący
  Vector2D(const Vector2D&&);

  //Destruktor (zmniejszający liczbę wszystkich wektorów)
  ~Vector2D();

  /*
   *Named constructor przyjmujący wartości współrzędnych kartezjańskich
   */
  static Vector2D fromCarthesian(double, double);

  /*
   *Named constructor przyjmujący wartości wspolrzednych biegunnowych.
   */
  static Vector2D fromPolar(double, double);

  /*
   *Metoda wypisująca wektor.
   */
  void print(std::string = "  ") const;
  /*
   *Metoda zwracająca prywatną wartość liczby wektorów.
   */
  static int number_vertices();

  /*
   *Metoda przująca referencje do wektora i zwracająca iloczyn skalarny dwóch wektorów.
   */
  double dot(const Vector2D&) const;

  /*
   *Metoda przyjmująca stałą referencje do wektora i zwracająca wektor o współrzędnych równej sumie dwóch wektorów.
   */
  Vector2D add(const Vector2D&) const;

  private:
  //Prywatny konstruktor przyjmujący dwie liczby double
  Vector2D(double, double);

  //Liczba wektorów
  static int num;

  //Współrzędna x wektora
  double _x;

  //współrzędna y wektora
  double _y;
};