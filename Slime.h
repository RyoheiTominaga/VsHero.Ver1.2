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
		{"後輩スライム",5,7,20},
		{"同僚スライム",8,13,21},
		{"先輩スライム",12,15,23}};
public:
	Slime();//コンストラクタ
	//void ViewStatus();
	//int Attack(Hero hero);
	//void Heal();
	//int DefGetter();
//private:
//	int _enemyNum;//敵の番号保持
//	int _maxHp;//最大Hp
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