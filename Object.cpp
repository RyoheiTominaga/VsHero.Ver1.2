#include"Object.h"
#include<iostream>
//void Object::ViewStatus() {
//	printf("–¼‘O:%s\nUŒ‚—Í:%d\n–hŒä—Í:%d\n‘Ì—Í:%d/%d\n",_name, _atk, _def, _hp, _maxHp);
//}
int Object::HpGetter() {
	return _hp;
}
void Object::HpSetter(int damage) {
	_hp = _hp - damage;
}