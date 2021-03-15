#include "MyString.h"

void init(MyString &string, const char *string1){
  string.str = new char[strlen(string1)];
  strcpy(string.str, string1);
}

MyString join(const MyString string1,const MyString string2){
  MyString string;
  string.str = new char[strlen(string1.str) + strlen(string2.str)];
  strcpy(string.str, string1.str);
  strcat(string.str, string2.str);
  return string;
}

void swap(MyString &string1, MyString &string2){
  MyString temp = string1;
  string1 = string2;
  string2 = temp;
}

void swap(MyString *&string1, MyString *&string2){
  MyString *temp = string1;
  string1 = string2;
  string2 = temp;
}

void del(MyString &string1, MyString &string2, MyString &string3, MyString &string4, MyString &string5){
  del1(string1);
  del1(string2);
  del1(string3);
  del1(string4);
  del1(string5);
}

void del1(MyString &string){
  if(&string != &temp && string.str != nullptr){
    std::cout << "deleting " << string.str << std::endl;
    delete [] string.str;
    string.str = nullptr;
  }
}
