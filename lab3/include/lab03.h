#ifndef lab03_h
#define lab03_h

#include <cstring>
#include <iostream>
// Struktura reprezentująca węzeł listy dwukierunkowej zawierajaca wskaznik na następny element (next) i poprzedni (previous)
typedef struct node{
  char data[100];
  node *previous;
  node *next;
}node;

//Struktura glowna (List) - zawierajaca adres początku listy czyli pierwszego elementu (head)
typedef struct List{
  node *head;
}List;

//Funkcja ustawiająca wskażnik head jako nullptr
void prepare(List *head1);

//Funkcja dodająca element na koniec listy dwukierunkowe
void push_back(List *head1, char data1[100]);
//Funkcja wyświetlająca listę dwukierunkową
void dump(const List *);
//Funkcja dodająca element na początek listy dwukierunkowej
void push_front(List *head1, char data1[100]);
//Funkcja sprawdzajaca czy lista jest pusta
int empty(const List *head1);
//Funkcja czyszcząca listę
void clear(List *);

#endif