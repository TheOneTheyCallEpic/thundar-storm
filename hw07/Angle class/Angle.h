#ifndef ANGLE_H
#define ANGLE_H

class Angle {

private:
  double a1;
  double a2;
  double a3;


public:
  Angle();
  Angle(double a1, double a2);
  virtual ~Angle();

  double getA1() const;
  double getA2() const;
  double getA3() const;


  void set (double a1, double a2);
}; //End of Angle class

#endif
