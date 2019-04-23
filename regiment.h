#ifndef REGIMENT_H
#define REGIMENT_H
#include "unit.h"
#include <ostream>
#include <vector>
using namespace std;

/**
 * @brief The Regiment class represents the front-line units engaged in a battle.
 * 代表参加战斗的前线units。
 */
class Regiment {
public:

  /**
   * @brief generateRandom creates a Regiment with a random set of units.
   */
  static Regiment generateRandom(int production);   //用一组随机的unit创建一个团。

  /**
   * @brief isDefeated
   * @return
   */
  bool isDefeated() const;   //是否被击败了

  /**
   * @brief attack launches an offensive attack against the oposing Regiment, causing damage to
   * their units.
   * @param defending the enemy to attack. This is the defending Regiment for this  防御敌人进攻的队伍
   */
  void attack(Regiment &defending) const;   //攻击对防守团发动攻击，对其单位造成伤害。

private:
  Regiment();
  // TODO: Choose an appropriate storage mechanism for the Units.为单元选择合适的存储机制。

  /*container type*/ vector<Unit*> _units;   //暂选为vector类型

  static Unit *randomUnit();

  friend std::ostream& operator <<(std::ostream &os, const Regiment &regiment);
};

#endif // REGIMENT_H
