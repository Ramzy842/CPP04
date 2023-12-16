#include "../includes/AMateria.hpp"
#include "../includes/Headers.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
    std::cout << "Parametrized constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);
}
void AMateria::use(ICharacter& target) {
    (void) target;
    std::cout << "use function called" << std::endl;
}