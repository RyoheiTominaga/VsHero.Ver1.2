#define _CRT_SECURE_NO_WARNINGS
#include"Slime.h"
#include"Object.h"
#include"Hero.h"
#include<iostream>
//int Slime::Attack(Hero hero) {
//
//	int attack = _atk - hero.DefGetter();
//	printf("%d‚Ìƒ_ƒ[ƒW‚ğ—^‚¦‚½", attack);
//	return attack;
//}
//void  Slime::Heal() {
//	int healPower = (_atk + _def) / 2;
//	_hp += healPower;
//	if (_hp >= _maxHp) {
//		_hp = _maxHp;
//	}
//}
Slime::Slime() {
	_enemyNum = rand() % 3;
	_maxHp = slimeType[_enemyNum].hp;
	_hp = slimeType[_enemyNum].hp;
	_atk = slimeType[_enemyNum].attack;
	_def = slimeType[_enemyNum].def;

	_nameSize = strlen(slimeType[_enemyNum].name);
	_name = new char[_nameSize + 1];
	strcpy(_name, slimeType[_enemyNum].name);
}
void Slime::ViewStatus() {
	printf("–¼‘O:%s\nUŒ‚—Í:%d\n–hŒä—Í:%d\n‘Ì—Í:%d/%d\n", _name, _atk, _def, _hp, _maxHp);
}
int Slime::Attack(Hero hero) {

	int attack = _atk - hero.DefGetter();
	if (attack <= 0) {
		attack = rand() % 3;
	}
	printf("%s‚ÌUŒ‚%d‚Ìƒ_ƒ[ƒW‚ğ—^‚¦‚½", _name, attack);
	return attack;

}
void Slime::Heal() {
		
		int healPower = (_atk + _def) / 2;
		printf("%s‚Í‚ß‚¢‚»‚¤‚ğg‚Á‚½%d‰ñ•œ‚µ‚½", _name, healPower);
		_hp += healPower;
		if (_hp >= _maxHp) {
			_hp = _maxHp;
		}
	}
//void Slime::ViewStatus() {
//	printf("UŒ‚—Í:%d\n–hŒä—Í:%d\n‘Ì—Í:%d/%d\n", _atk, _def, _hp, _maxHp);
//}
//int  Slime::DefGetter() {
//	return _def;
//}