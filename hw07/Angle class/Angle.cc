#include "Angle.h"

Angle :: Angle () {

  this -> a1=0.0;
  this -> a2=0.0;
  this -> a3=0.0;


}//End of constructor

Angle :: Angle (double a1, double a2, double a3){

  this -> a1=a1;
  this -> a2=a2;
  this -> a3=a3;

}//End of constructor

double Angle :: getA1() const{
  return a1;
} //End of getA1 method

double Angle :: getA2() const{
  return a2;
} //End of getA2 method

double Angle :: getA3() const{
  return a3;
} //End of getA3 method

void Angle :: set (double a1, double a2, double a3){
  this -> a1=a1;
  this -> a2=a2;
  this -> a3=a3;
}//End of set method
