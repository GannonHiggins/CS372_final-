#include <iostream>
#include <vector>
#include <ctime>

#include "chain.hpp"



int main(){


  srand(time(0));

  Handler1 root;
  Handler2 two;
  Handler3 thr;

  root.add(&two);
  root.add(&thr);

  thr.setNext(&root);

  for (int i = 1; i < 10; i++){
    root.handle(i);
    std::cout << '\n';
  }
}