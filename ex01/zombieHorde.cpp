#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cerr << "Unusable number of zombies" << std::endl;
        return NULL;
    }

    Zombie* horde = new Zombie[N];

    if (!horde)
    {
        std::cerr << "Error: Memory" << std::endl;
        return NULL;
    }

    int i = -1;
    while (++i < N)
	{
		horde[i] = Zombie(name);
	}
    return horde;
}