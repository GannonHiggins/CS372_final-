#pragma once


#include <iostream>
#include <vector>
#include <ctime>

class Base{

    Base *next; 

  public:

    Base(){
        next = 0;
    }

    void setNext(Base *n);

    void add(Base *n);
   
    virtual void handle(int i){
        next->handle(i);
    }

    virtual ~Base() = default;
};

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

