#include "Angle.h"
#include "Population.h"
#include "Point.h"
#include <iostream>
#include <cstdlib>


Fish :: Fish () {

  this -> speed=speed;
  this -> x=x;
  this -> y=y;
  this -> direction=direction;
  this -> turnrate=turnrate;
}

Fish :: Fish () {

  this -> speed=0.0;
  this -> x=x;
  this -> y=y;
  this -> direction=0.0;
  this -> turnrate=0.0;
}//End of constructor

Fish ::~Fish (){
}

/**********************************
*           Getters
***********************************/

double Fish :: getSpeed() const{
  return speed;
} //End of getSpeed method

double Angle :: getDirection() const{
  return direction;
} //End of getDirection method

double Angle :: getTurnR() const{
  return turnrate;
} //End of getTurnR method

double Fish :: getX() const{
  return x;
} //End of getX method

double Fish :: getY() const{
  return y;
} //End of getX method

/**********************************
*           Setters
***********************************/

double Point::setPosition(double x, double y) {

    this->x = x;
    this->y = y;

}

void double::swim() {

    int choice= rand() % 3;
    if(choice==0) direction+= turnrate;
    else if(choice==2) direction-= turnrate;
    x+= speed * direction.getCos();
    x+= speed * direction.getSin();

}
