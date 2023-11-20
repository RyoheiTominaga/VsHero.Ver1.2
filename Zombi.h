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
		{"ゾンビ(歴20年)",5,7,20},
		{"ゾンビ(歴50年)",12,15,23},
		{"ゾンビ(歴100年)",20,25,26} };
public:
	Zombi();//コンストラクタ
	/*int Attack(Hero hero);
	void Heal();
	int DefGetter();*/
//private:
//	int _enemyNum;//敵の番号保持
////	int _maxHp;//最大Hp
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