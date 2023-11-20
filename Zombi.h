#pragma once
#include"Enemy.h"
struct ZombiType
{
	char name[16 + 1];
	int attack;
	int def;
	int hp;
};
class Zombi :public Enemy{
private:
	ZombiType zombiType[3] = {
		{"�]���r(��20�N)",5,7,20},
		{"�]���r(��50�N)",12,15,23},
		{"�]���r(��100�N)",20,25,26} };
public:
	Zombi();//�R���X�g���N�^
	/*int Attack(Hero hero);
	void Heal();
	int DefGetter();*/
//private:
//	int _enemyNum;//�G�̔ԍ��ێ�
////	int _maxHp;//�ő�Hp
////	int _hp;
////	int _atk;
////	int _def;
public:
	void ViewStatus();
	int Attack(Hero hero);
	void Heal();
private:
	char* _name;
	int _nameSize;
};