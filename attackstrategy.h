#ifndef ATTACKSTRATEGY_H
#define ATTACKSTRATEGY_H

/**
 * @brief The AttackStrategy class for calculating the damage dealt
 * by a unit's attack.
 *     计算unit攻击造成的伤害的攻击策略类。
 * This is application of the Strategy Design Pattern; however,
 * rather than creating a class hierarchy and overriding the
 * function in each subclass, calculate(...) is a template function,
 * which expects the concrete type of Unit. To achieve the
 * different attack strategies, the template function will have to
 * be *specialised* where appropriate.
 *
 * 这就是应用策略设计模式;但是，calculate(…)不是创建一个类层次结构并覆盖每个子类中的函数，而是一个模板函数，
 * 它期望Unit的具体类型。为了实现不同的攻击策略，模板函数必须在适当的地方“专门化”。
 *
 */
class AttackStrategy
{
public:
  /// Nothing special here. Everything will be in the template function.
  AttackStrategy() {}

  /**
   * @brief calculate(...) calculates the damage to be dealt by the given
   * attacking unit.
   * 计算给定攻击单位要处理的伤害。
   * @param attacker the Unit performing an attack  攻击者执行攻击的单位
   * @return the damage to be dealt
   */
  // TODO: add a template member function declaration here.

};

// TODO: add template member function definition/implementation here
// Note that you will need one or more specialisations of the function
// for the attack strategy to work correctly for each derived Unit class.

#endif // ATTACKSTRATEGY_H
