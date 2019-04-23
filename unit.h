#ifndef UNIT_H
#define UNIT_H

class AttackStrategy; // forward declaration to prevent include cycles

/**
 * @brief The Unit class represents a single unit e.g. a Soldier or Archer.
 */
class Unit {
protected: // this is out of order for clarity reasons

  // Give the functor access to the Unit's internal state and private functions.
  // Note: does not automatically make AttackStrategy a friend
  // of classes derived from Unit.
  friend class AttackStrategy;

  /**
   * @brief attackDamage The functor to use for calculating attack damage.
   *
   * Since it does not store any state, we can reuse the same functor for all units.
   */
  static AttackStrategy attackDamage;  //计算攻击伤害

public:

  /**
   * @brief Unit the unit constructor
   *
   * Note: the constructor parameters can be extented if you require.
   *
   * @param initialHp the HP to set when this unit is created.
   */
  Unit();
  Unit(int initialHp);   //带参构造函数
  virtual ~Unit();

  /**
   * @brief attack calculate the damage this unit inflicts this round. A dead unit can not inflict
   * damage.
   * 计算此单位在此回合所造成的伤害。死亡单位不能造成伤害。
   * @return the damage inflicted.  造成的破坏
   */
  // TODO: add a member function declaration here.
  virtual AttackStrategy getAttackDamage();    //计算此单位在此回合所造成的伤害，，，不确定是不是这样写

  /**
   * @brief takeDamage reduces this unit's HP by the given value
   * @param damage the damage to inflict on this unit
   */
  void takeDamage(int damage);   //按给定值降低该单元的HP

  /**
   * @brief hp retreive this unit's current HP
   * @return the current HP
   */
  int hp() const;  //检索当前的HP；相当于成员变量_hp的get函数

  /**
   * @brief attackModifier attack multiplier for the unit, affects the amount of damage dealt
   * @return the attack modifier
   */
  // TODO: add a member function declaration here.
  int attackModifier();   //影响所造成的伤害量

  /**
   * @brief productionCost the cost to produce this unit.
   * @return
   */
  // TODO: add a member function declaration here.
  int productionCost();   //生产此Unit的成本


protected:
  /**
   * @brief randomAttack returns a random number result of two die rolls to determine attack strength.
   * @return
   */
  int randomAttack() const;   //返回两个随机数结果，以确定攻击强度

private:
  int _hp; /**< this unit's current HP */
};

#endif // UNIT_H
