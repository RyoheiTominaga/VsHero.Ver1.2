#include"Object.h"
#include<iostream>
//void Object::ViewStatus() {
//	printf("���O:%s\n�U����:%d\n�h���:%d\n�̗�:%d/%d\n",_name, _atk, _def, _hp, _maxHp);
//}
int Object::HpGetter() {
	return _hp;
}
void Object::HpSetter(int damage) {
	_hp = _hp - damage;
}