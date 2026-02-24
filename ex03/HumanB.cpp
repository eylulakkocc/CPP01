#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {
}

HumanB::~HumanB()
{}


void HumanB::setWeapon(Weapon& weapon) {
    weapon_ = &weapon;
}

void HumanB::attack()
{
    if (weapon_) 
        std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
    else 
    {
        std::cout << name_ << " is unarmed and attacks with their fists!" << std::endl;
    }
}