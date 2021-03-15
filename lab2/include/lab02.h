#ifndef lab02_h
#define lab02_h

#include <iostream>
#include <cmath>

//Definicja struktury (punktu na mapie), zawierającej nazwe długość geograficzną, a także szerokość geograficzną
typedef struct{
  std::string name;
  double longitude;
  double latitude;
}MapPoint;

//Definicja struktury, zawierającej długość geograficzną, a także szerokość geograficzną
typedef struct{
  double longitude;
  double latitude;
}MapDist;

//Funkcja przyjmujaca dwie liczby double i stringa, która tworzy wskaźnik na strukturę MapPoint z tych danych i zwraca ten wskaźnik. 
MapPoint *construct(std::string, double, double);

//Funkcja przyjmuje wskaźnik na strukturę MapPoint i wypisuje jej dane.
void print(MapPoint *);

//Funkcja przyjmuje dwa wskaźniki na strukturę MapPoint i nazwę do nowej struktury, następnie tworzy nową struktórę leżącą na środku szerokości i długości geograficznej pomiędzy tymi punktami i ją zwraca.
MapPoint inTheMiddle(MapPoint *, MapPoint *, std::string);

//Funkcja przyjmuje wskaźnik na struktrę, a także strukturę MapPoint. Następnie liczy długość i szerogość geograficzną od pierwszego punktu do drugiego i tworzy strukturę MapDist i ją zwraca.
MapDist distance(MapPoint *, MapPoint);

// Funkcja przyjmuje strukturę MapDist i oblicza odleglość pomiędzy dwoma punktami sqrt(latitude^2+longitude^2) i ją zwraca.
double distanceMag(MapDist);

//Funkcja przyjmuje strukturę MapPoint i zwraca jej nazwę
std::string name(MapPoint);

//Funkcja przyjmuje trzy wskażniki na strukturę MapPoint i zwraca strukturę która jest najbliżej pierwszego punktu (punktu referencyjnego)
MapPoint closestFrom(MapPoint *, MapPoint *, MapPoint *);

//Funkcja przyjmuje wskaźnik na wskaźnik MapPoint i przesuwa ten punkt o przyjęte wartości const double
void move(MapPoint **, const double, const double);

//Funkcja czyści pamięć przyjętego wskaźnika
void clear(MapPoint *);

//Funkcja czyści pamięć przyjętej tablicy wskaźników
void clear(MapPoint **, int);

#endif