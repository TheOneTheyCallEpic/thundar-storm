#include "Angle.h"
#include <iostream>
#include <cmath>

Angle :: Angle () {

  this -> a1=0.0;


}//End of constructor

Angle :: Angle (double a1){

  this -> a1=a1;


}//End of constructor

Angle ::~Angle (){
}

double Angle :: getA1() const{
  return a1;
} //End of getA1 method


void Angle :: set (double a1){
  this -> a1=a1;

}//End of set method

const Angle& Angle :: operator+=(const Angle& b){

  a1 += b.getA1();

  return *this;
}

const Angle& Angle :: operator-=(const Angle& b){

  a1 -= b.getA1();

  return *this;
}

double getSin (double a1){
  double sind;
  sind = sin(a1 * M_PI / 180.0);
  return sind;
}

double getCos (double a1){
  double cosd;
  cosd = cos(a1 * M_PI / 180.0);
  return cosd;
}
