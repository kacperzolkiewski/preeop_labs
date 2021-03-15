#include "MyString.h"


void MyString::set_string(const char *name){
  str1 = new char[strlen(name) +1];
  strcpy(str1, name);
}


char *MyString::str() const{
  return str1;
}

void MyString::join(MyString& string){
  char *temp = new char[strlen(string.str1) + strlen(str1) +1];
  strcpy(temp, str1);
  temp = strcat(temp, string.str1);
  delete [] str1;
  str1 = temp;
}

void MyString::replace(const char *name){
  delete [] str1;
  str1 = new char[strlen(name) +1];
  strcpy(str1, name);
}

void MyString::swap(MyString& string){
  char *temp = str1;
  str1 = string.str1;
  string.str1 = temp;
}

void MyString::clear_string(){
  std::cout << "- deleting " << str() <<std::endl;
  delete [] str1;
}