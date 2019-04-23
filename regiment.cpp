#include "regiment.h"
#include "unittypes.h"
#include <ctime>
#include <random>
#include <typeinfo>
using namespace std;

Regiment::Regiment() {
}

Regiment Regiment::generateRandom(int production) {
  Regiment reg;
  // TODO: loop until you are unable to produce a new unit
  // i.e. not enough production points left for the randomly selected new unit
  // Ensure any unit created is either inserted into your storage or deleted:
  // i.e. do not leak memory here.
  /* 循环，直到无法生成新单元为止,即没有足够的生产点留给随机选择的新单位
   * 确保任何创建的单元被插入或删除到您的存储:也就是说，不要在这里泄漏内存。
   * */
  //ostream<<production<<endl;
  return reg;
}

bool Regiment::isDefeated() const {
  // TODO: implement this; your regiment is defeated when all units have died.
  return true;
}

void Regiment::attack(Regiment &defending) const {
  // TODO: Implement this.
}

Unit *Regiment::randomUnit() {
  // This has been provided for your convenience.
  static std::mt19937 randomEngine{static_cast<uint32_t>(time(nullptr))};
  static std::uniform_int_distribution<int> type(0, 2);
  int unitType = type(randomEngine);
  switch (unitType) {
  case 0:
    return new Soldier();
  case 1:
    return new Archer();
  case 2:
    return new Chariot();
  }
  // This should never happen.
  return nullptr;
}

std::ostream &operator<<(std::ostream &os, const Regiment &regiment) {
  // TODO: insert regiment stats into stream.
  // Stats should show as follows: Soldiers: x Archers: y Chariots: z
  // Total Remaining HP: a
  // Where 'x' is the number of alive soldiers, 'y' is the number of alive archers, 'z' is the number of
  // alive chariots and 'a' is the sum of all living unit's HP values.

  /* 将团数据插入流。
   * 数据应该显示如下:士兵:x弓箭手:y战车:z
   * 剩余总HP: a
   * 其中“x”为活着的士兵数量，“y”为活着的弓箭手数量，“z”为活着的战车数量，“a”为所有活着单位生命值的总和。
*/
    //os<<regiment._units.value_type<<endl;
    return os;

}
