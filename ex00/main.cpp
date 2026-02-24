#include "Zombie.hpp"

int main(void)
{
	Zombie *firstZombie = newZombie("Onesie");
	firstZombie->announce();

	randomChump("Twosie");

	delete firstZombie;
	return 0;
}
