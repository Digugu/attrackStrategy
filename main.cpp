#include "regiment.h"
#include <iomanip>
#include <iostream>

int main() {

  // Generate two random regiments to fight, the attacking force is smaller than the entrenched
  // defenders, but the attackers strike first. This will be a close fight!

  Regiment attackers = Regiment::generateRandom(800);
  Regiment defenders = Regiment::generateRandom(1000);

  std::cout << "The battle begins!" << std::endl << std::endl;
  std::cout << "Attacking Regiment:" << std::endl << attackers << std::endl;
  std::cout << "Defending Regiment:" << std::endl << defenders << std::endl;
  int round = 1;
  while (!attackers.isDefeated() && !defenders.isDefeated()) {
    attackers.attack(defenders);
    defenders.attack(attackers);
    std::cout << "*** End of round " << std::setw(4) << round++ << " ***" << std::endl << std::endl;
    std::cout << "Attacking Regiment:" << std::endl << attackers << std::endl;
    std::cout << "Defending Regiment:" << std::endl << defenders << std::endl;
  }

  std::cout << "********** The battle has ended. **********" << std::endl << std::endl;
  if (attackers.isDefeated() && defenders.isDefeated()) {
    std::cout << "It's a draw, everyone loses." << std::endl;
  } else if (attackers.isDefeated()) {
    std::cout << "The defenders successfully defended their position." << std::endl;
  } else {
    std::cout << "The attackers were victorious." << std::endl;
  }
  std::cout << std::endl;

  return 0;
}
