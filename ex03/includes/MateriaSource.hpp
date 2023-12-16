#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "./IMateriaSource.hpp"
#include "./Headers.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();
};

#endif