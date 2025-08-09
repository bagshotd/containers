#ifndef NODE_H
#define NODE_H

namespace ts{
template <typename T>
class Node {
 public:
  T value;
  Node* prev;
  Node* next;
  Node() {
    prev = nullptr;
    next = nullptr;
    std::cout <<"Base constructor\n";
  };
  ~Node() {
    prev = nullptr;
    next = nullptr;
    std::cout << "Destructor called\n";
  };
  Node(T val) : value(val), prev(nullptr), next(nullptr){
    std::cout << "Constructor by value\n";
  }
  // copy constructor
  Node(const Node& other) { 
    value = other.value; 
    prev = nullptr;
    next = nullptr;
    std::cout << "Copy constructor\n";
  } 
  // move constructor
  Node(Node&& other) {                              
    value = other.value;
    prev = other.prev;
    next = other.next;
    other.prev = nullptr;
    other.next = nullptr;
    //other.~Node();
    std::cout << "Move constructor\n";
  }
  // copy assigment;
  Node& operator=(const Node& other) {  
    if(&other != this){
      value = other.value; 
      prev = nullptr;
      next = nullptr;
    }
    std::cout << "Copy assignment\n";
    return *this;
  }  
  // move assigment
  Node& operator=(Node&& other) {
    if(&other != this) {
      value = other.value;
      prev = other.prev;
      next = other.next;
      other.prev = nullptr;
      other.next = nullptr;
    }
    //other.~Node();
    std::cout << "Move assignment\n";
    return *this;
  }   
};
}


#endif