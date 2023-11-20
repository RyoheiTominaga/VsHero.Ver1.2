#define _CRT_SECURE_NO_WARNINGS
#include"Zombi.h"
#include"Hero.h"
#include<iostream>
//int Zombi::Attack(Hero hero){
//	int attack = _atk - hero.DefGetter();
//	printf("%d�̃_���[�W��^����", attack);
//	return attack;
//}
//void  Zombi::Heal() {
//	int healPower = (_atk + _def) / 2;
//	_hp += healPower;
//	if (_hp >= _maxHp) {
//		_hp = _maxHp;
//	}
//}
Zombi::Zombi() {
	_enemyNum = rand() % 3;
	_maxHp = zombiType[_enemyNum].hp;
	_hp = zombiType[_enemyNum].hp;
	_atk = zombiType[_enemyNum].attack;
	_def = zombiType[_enemyNum].def;

	_nameSize = strlen(zombiType[_enemyNum].name);
	_name = new char[_nameSize + 1];
	strcpy(_name, zombiType->name);
}
void Zombi::ViewStatus() {
	printf("���O:%s\n�U����:%d\n�h���:%d\n�̗�:%d/%d\n", _name, _atk, _def, _hp, _maxHp);
}
int Zombi::Attack(Hero hero) {

	int attack = _atk - hero.DefGetter();
	if (attack <= 0) {
		attack = rand() % 3;
	}
	printf("%s�̍U��%d�̃_���[�W��^����", _name, attack);
	return attack;

}
void Zombi::Heal() {
		
		int healPower = (_atk + _def) / 2;
		printf("%s�͂߂��������g����%d�񕜂���", _name, healPower);
		_hp += healPower;
		if (_hp >= _maxHp) {
			_hp = _maxHp;
		}
	}
//int  Zombi::DefGetter() {
//	return _def;
//}