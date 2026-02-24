#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon(){}

void Weapon::setType(std::string type)
{
	type_ = type;
}

const std::string &Weapon::getType() const
{
	return (type_);
}