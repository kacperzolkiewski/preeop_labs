#ifndef lab01_h
#define lab01_h

#include <iostream>
// funkcja pobiera długość ciągu jaki ma stworzyć i zwraca ten wskaźnik do tego ciągu
int * initFibonacci(int);
// funkcja pobiera wskaźnik do ciągu i jego długość i go wypisuje
void print(const int*, int);
// funkcja pobiera wskaźnik do ciągu i go usuwa 
void deleteSequence(const int *);
void addSequence(int *, int ***, int **, int);
void printAllSequences(int **, int *, int);
void removeSequence(int *, int ***, int **, int);
void deleteSequences(int *, int ***, int **);



#endif