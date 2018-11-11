#ifndef ANGLE_H
#define ANGLE_H
class Fish;

class Angle {

private:
  double a1;


public:
  Angle();
  Angle(double a1);
  virtual ~Angle();

  double getA1() const;
  const Angle& operator+=(const Angle& a1);
  const Angle& operator-=(const Angle& b);
  double getSin (double a1);
  double getCos (double a1);

  void set (double a1);
}; //End of Angle class

#endif
