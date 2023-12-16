#ifndef ICE_HPP
# define ICE_HPP

#include "./AMateria.hpp"
#include "./Headers.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();
};

#endif