#ifndef FISH_H
#define FISH_H
class Angle;

class Fish{

private:
  double speed;
  double x;
  double y;
  Angle direction;
  Angle turnrate;

public:
  Fish();
  Fish(double speed, double x ,double y ,Angle direction ,Angle turnrate);
  virtual ~Fish();


};

#endif
