#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString{
  char *str;
  int n;

  friend void swap(MyString&, MyString&);
  public:
  MyString();
  ~MyString();
  MyString static create(const char*);
  void print() const;
  void join(const MyString &);
  void replace(const char *);
};



#endif