#ifndef CURE_HPP
# define CURE_HPP

#include "./AMateria.hpp"
#include "./Headers.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure();
};

#endif