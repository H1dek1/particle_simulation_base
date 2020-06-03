#ifndef PARTICLE_H
#define PARTICLE_H

#include <iostream>
#include <cmath>
#include <vector>

class Particle{
  private:
    static int counter;
    static constexpr double X_MAX = 1.0;
    static constexpr double Y_MAX = 1.0;

  public:
    static int instCounter();

  private:
    double x;
    double y;
    double v_x;
    double v_y;

   public:
    Particle();
    ~Particle();

   public:
    void update(double dt);
    double getX() const;
    double getY() const;

};

#endif //PARTICLE_H
