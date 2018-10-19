#include "ZombieEvent.hpp"

int	main(void){
	srand(time(0));
	ZombieEvent event;
	Zombie* zombie1 = event.randomChump();
	Zombie* zombie2 = event.randomChump();
	Zombie* zombie3 = event.randomChump();
	delete zombie1;
	delete zombie2;
	delete zombie3;
}