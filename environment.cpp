#ifndef ENVIRONMENT
#define ENVIRONMENT

#include "environment.hpp"

Environment::Environment()
{
  fout.open("data.dat", std::ios::out);
}

Environment::~Environment()
{
  fout.close();
}

void Environment::output()
{
  for(auto p : particle){
    fout << p.getX() << " " << p.getY() << std::endl;
  }
  fout << std::endl;
}

void Environment::run()
{
  const double DT       = 1.0e-2;
  const double MAX_TIME = 10;
  const double OUT_TIME = 1.0e-1;
  const int    MAX_ITER = int(MAX_TIME / DT);
  const int    OUT_ITER = int(OUT_TIME / DT);

  for(auto p : particle){
    //std::cout << p.getX() << std::endl;
  }
  for(int iter = 0; iter < MAX_ITER; iter++){
    for(int id = 0; id < particle.size(); id++){
      particle[id].update(DT);
    }
    //for(auto & p : particle){
    //  p.update(DT);
    //}

    output();
  }

  std::cout << "----------------" << std::endl;
  for(auto p : particle){
    //std::cout << p.getX() << std::endl;
  }
}

#endif //ENVIRONMENT
