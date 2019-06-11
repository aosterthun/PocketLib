#if !defined(REGISTRY_HPP)
#define REGISTRY_HPP

#include "Singleton.hpp"

#include <random>

class Registry{
    public:
        Registry();      
        ~Registry();
        int random_int(int lower_bound, int upper_bound);
        float random_float(float lower_bound, float upper_bound);
        std::default_random_engine random_engine();
    private:

        std::default_random_engine m_random_engine;
};

#endif // REGISTRY_HPP
