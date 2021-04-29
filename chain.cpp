#include "chain.hpp"

void Base::setNext(Base *n){
    next = n;
}

void Base::add(Base *n){
    if(next){
        next->add(n);
    }
    else{
        next = n;
    }
}


void Handler1::handle(int i){
    if(rand() % 3){

        std::cout<<"Person1 says: I am to busy to do all these tasks so i passed them to the next guy " << i << " \n";
        Base::handle(i);
    }
    else{
        std::cout<<"Person1 handled all the tasks " << i << "\n ";
    }
}

void Handler2::handle(int i){
   if(rand() % 3){

        std::cout<<"Person2 says: I am to busy to do all these tasks so i passed them to the next guy " << i << " \n";
        Base::handle(i);
    }
    else{
        std::cout<<"Person2 handled all the tasks " << i << " \n";
    }
}

void Handler3::handle(int i){
  if(rand() % 3){

        std::cout<<"Person3 says: I am to busy to do all these tasks so i passed them to the next guy " << i << " \n";
        Base::handle(i);
    }
    else{
        std::cout<<"Person3 handled all the tasks " << i << " ";
    }
}
