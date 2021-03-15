#include "MyStringHelper.h"


void MyStringHelper::replace(MyString& string, const char*name){
  delete [] string.str1;
  string.str1 = new char[strlen(name) + 1];
  strcpy(string.str1, name);
}

void swap(MyString& string1, MyString& string2){
  char *temp = string1.str1;
  string1.str1 = string2.str1;
  string2.str1 = temp;
}