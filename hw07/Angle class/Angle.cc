#include "Angle.h"

Angle :: Angle () {

  this -> a1=0.0;


}//End of constructor

Angle :: Angle (double a1){

  this -> a1=a1;


}//End of constructor

double Angle :: getA1() const{
  return a1;
} //End of getA1 method


void Angle :: set (double a1){
  this -> a1=a1;
}//End of set method
