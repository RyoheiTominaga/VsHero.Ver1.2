#pragma once
#include"Enemy.h"
#include"Object.h"
struct SlimeType
{
	char name[16 + 1];
	int attack;
	int def;
	int hp;
};
class Slime:public Enemy
{
private:
	SlimeType slimeType[3] = {
		{"��y�X���C��",5,7,20},
		{"�����X���C��",8,13,21},
		{"��y�X���C��",12,15,23}};
public:
	Slime();//�R���X�g���N�^
	//void ViewStatus();
	//int Attack(Hero hero);
	//void Heal();
	//int DefGetter();
//private:
//	int _enemyNum;//�G�̔ԍ��ێ�
//	int _maxHp;//�ő�Hp
//	int _hp;
//	int _atk;
//	int _def;
public:
	void ViewStatus();
	int Attack(Hero hero);
	void Heal();
private:
	char* _name;
	int _nameSize;
};