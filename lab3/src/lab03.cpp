#include "lab03.h"

using namespace std;

void prepare(List *head1){
  head1->head = nullptr;
}

void push_back(List *head1, char data1[100]){
  if(head1->head == nullptr){
    head1->head = new node;
    head1->head->previous = nullptr;
    strcpy(head1->head->data, data1);
    head1->head->next = nullptr;
  }else{
    node *current = head1->head;
    while(current->next != nullptr){
      current = current->next;
    }
    current->next = new node;
    current->next->next = nullptr;
    current->next->previous = current;
    strcpy(current->next->data, data1);
  }
}

void dump(const List *head1){
  if(head1->head != nullptr){
    node *current = head1->head;
    cout << current->data << " ";
    while(current->next != nullptr){
      current = current->next;
      cout << current->data << " ";
    }
  }    
}

void push_front(List *head1, char data1[100]){
  if(head1->head == nullptr){
    head1->head = new node;
    head1->head->previous = nullptr;
    strcpy(head1->head->data, data1);
    head1->head->next = nullptr;
  }else{
    head1->head->previous = new node;
    node *current = head1->head->previous;
    current->previous = nullptr;
    current->next = head1->head;
    strcpy(current->data, data1);
    head1->head = current;
  }  
}

int empty(const List *head1){
  if(head1->head == nullptr){
    return 1;
  }else return 0;
}

void clear(List *head1){
  if(head1->head == nullptr) return;
  else{
    node *temp;
    while(head1->head != nullptr){
      temp = head1->head;
      head1->head = temp->next;
      delete temp;
    }
  }
}