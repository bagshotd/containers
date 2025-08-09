#include <iostream>
#include "headers/ts_containers.h"

// valgrind --tool=memcheck --leak-check=yes  ./main.out

using namespace ts;

int main(){
    Ts_stack<int> a;
    a.push(10);
    a.push(20);
    std::cout << a.get_size() << std::endl;
    a.pop();
    std::cout << a.get_size() << std::endl;

    return 0;
}