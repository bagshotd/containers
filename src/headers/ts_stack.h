#ifndef TS_STACK_H
#define TS_STACK_H

#include "node.h"

namespace ts {
template <typename T>
class Ts_stack {
 private:
  Node<T>* head = nullptr;
  size_t size;

 public:
  Ts_stack() {
    std::cout << "Base constructor\n";
  };
  ~Ts_stack() {
    std::cout << "Destructor\n";
  };
  //copy constructor
  Ts_stack(const Ts_stack& other) {
    head = other.head;
    size = other.size;
    std::cout << "Copy constructor\n";
  }
  //move constructor
  Ts_stack(Ts_stack&& other) {
    head = other.head;
    other.head = nullptr;
    size = other.size;
    other.size = 0;
    std::cout << "Move constructor\n";
  }
  //copy assignment
  Ts_stack& operator=(const Ts_stack& other) {
     if(other != this){
      head = other.head;
      size = other.size;
     } 
     std::cout << "Copy assignment\n";
     return *this;
    }
  //move assignment
  Ts_stack& operator=(Ts_stack&& other) {
    if(other != this){
      head = other.head;
      other.head = nullptr;
      size = other.size;
      other.size = 0;
    }
    std::cout << "Move assignment\n";
    return *this;
  }
  // methods
  void push(const T& value){
    Node<T> node(value);
    node.prev = head;
    node.next = head->next;
    head = &node; 
    size++;
    std::cout << "Pushed: " << value << std::endl;
  }

  void push(Node<T>& node){
    node.prev = head;
    head = node;
    size++;
    std::cout << "Pushed node: " << node.value << " " << node.prev << std::endl;
  }

  T pop(){
    T val = head->value;
    head = head->prev;
    size--;
    std::cout << "Poped: " << val << std::endl; 
    return val;
  }
  size_t get_size(){
    return size;
  }
};
}  // namespace ts

#endif