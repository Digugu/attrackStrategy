#include "unit.h"
#include "attackstrategy.h"
#include <random>
#include <ctime>

// TODO: ensure all implementations below are correct and add any additional if needed.

Unit::Unit(int initialHp) {
}

Unit::~Unit() {
}

void Unit::takeDamage(int damage) {
  _hp -= damage;
}

int Unit::hp() const {
  return _hp;
}

int Unit::randomAttack() const
{
  // Don't worry, this function is correct!
  static std::mt19937 randomEngine{static_cast<uint32_t>(time(nullptr))};
  static std::uniform_int_distribution<int> attackVal(2, 12);
  return attackVal(randomEngine);
}

AttackStrategy Unit::attackDamage{}; // Initialise the static member
