#pragma once
#include <iostream>
#include <cstring>


class MyString {
  friend std::ostream& operator<<(std::ostream& s, const MyString &string1);
  friend MyString operator*(int, const MyString&);
  public:
  MyString(const char *);
  MyString(const MyString&);
  MyString(MyString &&);
  ~MyString();

 MyString operator+(const MyString&);
 MyString& operator=(const char *);
 MyString& operator*(int);
 bool operator==(const char *);
 private:
 char *_name;
};

inline std::ostream& operator<<(std::ostream& s, const MyString &string1){
   return s << string1._name;
}