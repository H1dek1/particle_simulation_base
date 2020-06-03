#ifndef PARTICLE
#define PARTICLE

#include <vector>
#include <random>

#include "particle.hpp"

int Particle::counter;

Particle::Particle()
{
  counter++;
  std::random_device rnd;
  std::mt19937 mt( rnd() );
  std::uniform_real_distribution<> init_pos(-1, 1);
  std::uniform_real_distribution<> init_vel(-2, 2);
  x = init_pos(mt);
  y = init_pos(mt);
  v_x = init_vel(mt);
  v_y = init_vel(mt);
}

Particle::~Particle()
{
  counter--;
}

int Particle::instCounter()
{
  return counter;
}

void Particle::update(double dt)
{
  double tmp_x = x + v_x * dt;
  double tmp_y = y + v_y * dt;

  if(std::abs(tmp_x) < X_MAX){
    x = tmp_x;
  }else{
    v_x *= -1;
    x += v_x * dt;
  }

  if(std::abs(tmp_y) < Y_MAX){
    y = tmp_y;
  }else{
    v_y *= -1;
    y += v_y * dt;
  }
}

double Particle::getX() const
{
  return x;
}

double Particle::getY() const
{
  return y;
}

#endif //Particle
