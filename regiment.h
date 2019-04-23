#ifndef REGIMENT_H
#define REGIMENT_H
#include "unit.h"
#include"archer.h"
#include"chariot.h"
#include"soldier.h"
#include <ostream>
#include <vector>
using namespace std;

/**
 * @brief The Regiment class represents the front-line units engaged in a battle.
 */
class Regiment {
public:

  /**
   * @brief generateRandom creates a Regiment with a random set of units.
   */
  static Regiment generateRandom(int production);

  /**
   * @brief isDefeated
   * @return
   */
  bool isDefeated() const;

  /**
   * @brief attack launches an offensive attack against the oposing Regiment, causing damage to
   * their units.
   * @param defending the enemy to attack. This is the defending Regiment for this
   */
  void attack(Regiment &defending) const;

private:
  Regiment();
  // TODO: Choose an appropriate storage mechanism for the Units.为单元选择合适的存储机制。

  /*container type*/vector<Unit*> _units;   //暂选为vector类型

  static Unit *randomUnit();

  friend std::ostream& operator <<(std::ostream &os, const Regiment &regiment);
};

#endif // REGIMENT_H
