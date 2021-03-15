#include "MyString.h"

MyString::MyString(const char *name){
  _name = new char[strlen(name) + 1];
  strcpy(_name, name);
}

MyString::MyString(const MyString& string2){
  _name = new char[strlen(string2._name) + 1];
  strcpy(_name, string2._name);
}

MyString::MyString(MyString &&name){
  _name = new char[strlen(name._name) + 1];
  strcpy(_name, name._name);
}

MyString::~MyString(){
   delete [] _name;
   _name = nullptr;
}

 MyString MyString::operator+(const MyString& string2){
  char *name1 = new char[strlen(_name) + strlen(string2._name) + 1];
  strcpy(name1, _name);
  strcat(name1, string2._name);
  MyString tmp(name1);
  delete [] name1;
  return tmp;
 }

 MyString& MyString::operator=(const char *name){
  delete [] _name;
  _name = new char[strlen(name) + 1];
  strcpy(_name, name);
  return *this;
 }

 MyString operator*(int n, const MyString& name){
  char *name1 = new char[strlen(name._name) * n + 1];
  strcpy(name1, name._name);
  for(int i =1; i < n; i++){
   strcat(name1, name._name);
  }
  MyString tmp(name1);
  delete [] name1;
  return tmp;
 }


 MyString& MyString::operator*(int n){
   char *name1 = new char[strlen(_name) * n + 1];
   strcpy(name1, _name);
   for(int i = 1; i < n; i++){
     strcat(name1, _name);
   }
   strcpy(_name, name1);
   delete [] name1;
   return *this;
 }

 bool MyString::operator==(const char *name){
  return !strcmp(_name, name);
 }

