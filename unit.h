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
  static AttackStrategy attackDamage;

public:

  /**
   * @brief Unit the unit constructor
   *
   * Note: the constructor parameters can be extented if you require.
   *
   * @param initialHp the HP to set when this unit is created.
   */
  Unit(int initialHp);
  virtual ~Unit();

  /**
   * @brief attack calculate the damage this unit inflicts this round. A dead unit can not inflict
   * damage.
   * @return the damage inflicted.
   */
  // TODO: add a member function declaration here.

  /**
   * @brief takeDamage reduces this unit's HP by the given value
   * @param damage the damage to inflict on this unit
   */
  void takeDamage(int damage);

  /**
   * @brief hp retreive this unit's current HP
   * @return the current HP
   */
  int hp() const;

  /**
   * @brief attackModifier attack multiplier for the unit, affects the amount of damage dealt
   * @return the attack modifier
   */
  // TODO: add a member function declaration here.

  /**
   * @brief productionCost the cost to produce this unit.
   * @return
   */
  // TODO: add a member function declaration here.

protected:
  /**
   * @brief randomAttack returns a random number result of two die rolls to determine attack strength.
   * @return
   */
  int randomAttack() const;

private:
  int _hp; /**< this unit's current HP */
};

#endif // UNIT_H
