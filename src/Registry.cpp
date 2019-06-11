#include <iostream>
#include "../header/Registry.hpp"

Registry::Registry():
m_random_engine{}
{
   
}



std::default_random_engine Registry::random_engine(){
   return m_random_engine;
}

int Registry::random_int(int lower_bound, int upper_bound){
   std::random_device rd;
   std::mt19937 gen(rd());
   std::default_random_engine random_engine;
   std::uniform_int_distribution<> random_int(lower_bound,upper_bound);
   return random_int(gen);
}

float Registry::random_float(float lower_bound, float upper_bound){
   std::random_device rd;
   std::mt19937 gen(rd());
   std::default_random_engine random_engine;
   std::uniform_real_distribution<> random_float(lower_bound,upper_bound);
   return random_float(gen);
}