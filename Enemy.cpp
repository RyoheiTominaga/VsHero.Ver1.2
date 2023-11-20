#define _CRT_SECURE_NO_WARNINGS
#include"Enemy.h"
#include"Hero.h"
#include"Slime.h"
#include"Zombi.h"
#include<iostream>
//Enemy::Enemy() {
//	_enemyNum = rand() % 3;
//	_maxHp = enemyType[_enemyNum].hp;
//	_hp = enemyType[_enemyNum].hp;
//	_atk = enemyType[_enemyNum].attack;
//	_def = enemyType[_enemyNum].def;
//
//	_nameSize = strlen(enemyType[_enemyNum].name);
//	_name = new char[_nameSize + 1];
//	strcpy(_name, enemyType[_enemyNum].name);
//}
//int Enemy::Attack(Hero hero) {
//
//	int attack = _atk - hero.DefGetter();
//	if (attack <= 0) {
//		attack = rand() % 3;
//	}
//	printf("%s‚ÌUŒ‚%d‚Ìƒ_ƒ[ƒW‚ğ—^‚¦‚½",_name, attack);
//	return attack;
//
//}
//void Enemy::Heal() {
//	
//	int healPower = (_atk + _def) / 2;
//	printf("%s‚Í‚ß‚¢‚»‚¤‚ğg‚Á‚½%d‰ñ•œ‚µ‚½", _name, healPower);
//	_hp += healPower;
//	if (_hp >= _maxHp) {
//		_hp = _maxHp;
//	}
//}
int Enemy::DefGetter() {
	return _def;
}
//void Enemy::ViewStatus() {
//	printf("–¼‘O:%s\nUŒ‚—Í:%d\n–hŒä—Í:%d\n‘Ì—Í:%d/%d\n",_name, _atk, _def, _hp, _maxHp);
//}
void Enemy::HpSetter(int damage) {
	_hp = _hp - damage;
}
int Enemy::HpGetter()
{
	return _hp;
	
}

