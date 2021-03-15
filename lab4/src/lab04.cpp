#include "lab04.h"

void set(Bits *data, int *data1, int n){
  for(int i = 0; i < SIZE; i++){
    if(i < n){
      data->tab[i] = data1[i];
    }else{
      data->tab[i] = 0;
    }  
  }
  data->n = n;
}

void print(const Bits *data){
  int i =0;
  while(data->tab[i] != 1){
    i++;
    std::cout << " ";
  }
  for( ; i < data->n; i++){
    std::cout << data->tab[i];
  }
  std::cout << std::endl;
}

void reverse(Bits *data){
  int temp;
  for(int i = 0; i < data->n/2; i++){
    temp = data->tab[i];
    data->tab[i] = data->tab[data->n-i-1];
    data->tab[data->n-i-1] = temp;
  }
}

const Bits add_up(Bits *data1, Bits *data2){
  int reszta = 0;
  Bits data;
  int n = (data1->n > data2->n) ? data1->n : data2->n;
  reverse(data1);
  reverse(data2);
  data.n = n;

  for(int i =0; i < SIZE; i++){
    if(i < n){
      if(data1->tab[i] + data2->tab[i] + reszta == 0){
        data.tab[i] = 0;
        reszta = 0;
      }else if(data1->tab[i] + data2->tab[i] + reszta == 1){
        data.tab[i] = 1;
        reszta = 0;
      }else if(data1->tab[i] + data2->tab[i] + reszta == 2){
        data.tab[i] = 0;
        reszta = 1;
      }else{
        data.tab[i] = 1;
        reszta = 1;
      }
    }else{
      data.tab[i] = 0;
    }
    
  }
  if(reszta == 1){
    data.tab[n] = 1;
    data.n = n+1;
  }
  reverse(data1);
  reverse(data2);
  reverse(&data);
  return data;
}

void bit_and(Bits *data, Bits *mask){
  for(int i = 0; i < data->n; i++){
    if(data->tab[i] == 1 && mask->tab[i] == 1){
      data->tab[i] = 1;
    }else{
      data->tab[i] = 0;
    }
  }
}

void bit_xor(Bits *data, Bits *mask){
  for(int i = 0; i < data->n; i++){
    if((data->tab[i] == 1 && mask->tab[i] == 0) || (data->tab[i] == 0 && mask->tab[i] == 1)){
      data->tab[i] = 1;
    }else{
      data->tab[i] = 0;
    }
  }
}

void doOperation(function bit, Bits *data, Bits *mask){
  bit(data, mask);
}

int to_decimal(const Bits *data){
  int result = 0;
  for(int i=0; i < data->n; i++){
    if(data->tab[data->n-i-1] == 1){
      result += pow(2, i);
    }
  }
  return result;
}