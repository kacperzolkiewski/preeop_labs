#include "MyString.h"
#include <cstring>

 MyString MyString::create(const char*name){
   static int i = 0;
   i++;
   MyString s;
   s.n = i;
   s.str = new char[strlen(name) + 1];
   strcpy(s.str, name);
   return s;
 }

 void MyString::print() const{
   std::cout <<"ID: " << n << "str: " << str << std::endl;
 }

 void MyString::join(const MyString &name){
   char *str1 = new char[strlen(str) + strlen(name.str) +1];
   strcpy(str1, str);
   strcat(str1, name.str);
   delete [] str;
   str = str1;
 }

 void MyString::replace(const char *name){
   delete [] str;
   str = new char[strlen(name) + 1];
   strcpy(str, name);
 }

 

 void swap(MyString& s1, MyString& s2){
   char *temp = s1.str;
   s1.str = s2.str;
   s2.str = temp;
   int temp1 = s1.n;
   s1.n = s2.n;
   s1.n = temp1;

 }

  MyString::MyString(){
    str = nullptr;
    n = 0;
  }

 MyString::~MyString(){
   std::cout << " - deleting " << str <<std::endl;
   delete [] str;
}
