#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type_;
public:

    Weapon(std::string type);
    ~Weapon();

    const std::string &getType() const;
    void setType(std::string newType);
};



#endif