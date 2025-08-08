#ifndef TS_STACK_H
#define TS_STACK_H

namespace ts {
template <typename T>
class Node {
 private:
  T value;
  Node* prev;

 public:
  Node() {};
  ~Node() {};
  Node(T val) : value(val), prev(nullptr);
  Node(const Node& other) { value = other.value; }  // copy constructor
  Node(Node&& other) {                              // move constructor
    value = other.value;
    prev = other.prev;
    other.prev = nullptr;
  }
  Node operator=(const Node& other) { Node(other); }  // copy assigment
  Node operator=(con Node&& other) { Node(other); }   // move assigment
};
template <typename T>
class Ts_stack {
 private:
  Node* head = nullptr;
  size_t size;

 public:
  // constructors
  Ts_stack() {};
  ~Ts_stack() {};
  Ts_stack(const Ts_stack& other) {
    head = other.head;
    size = other.size;
  }
  Ts_stack(Ts_stack&& other) {
    head = other.head;
    other.head = nullptr;
    size = other.size;
    other.size = 0;
  }
  Ts_stack operator=(const Ts_stack& other) { Ts_stack(other); }
  Ts_stack operator=(Ts_stack&& other) { Ts_stack(other); }
  // methods
  void push(const T& value);
  void pop();
  void swap(Ts_stack&& other)
};
}  // namespace ts

#endif