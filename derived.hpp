
#pragma once

#include<iostream>
#include "chain.hpp"


class Handler1: public Base{

  public:

     void handle(int i);
};

class Handler2: public Base{

  public:

     void handle(int i);
};

class Handler3: public Base{
  public:

     void handle(int i);
};