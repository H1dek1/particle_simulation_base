#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include <array>
#include <fstream>
#include "particle.hpp"

class Environment{
  private:
    static constexpr int NUM_PARTICLES = 5;
    std::array<Particle, NUM_PARTICLES> particle;
    
    std::ofstream fout;

  public:
    Environment();
    ~Environment();

  public:
    void run();
    void output();
};

#endif //ENVIRONMENT_H
