#ifndef ANGLE_H
#define ANGLE_H

class Angle {

private:
  double a1;


public:
  Angle();
  Angle(double a1);
  virtual ~Angle();

  double getA1() const;



  void set (double a1);
}; //End of Angle class

#endif
