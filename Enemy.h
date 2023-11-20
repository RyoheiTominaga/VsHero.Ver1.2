#pragma once
#pragma once
#include"Object.h"
class Hero;
struct EnemyType
{
	char name[16 + 1];
	int attack;
	int def;
	int hp;
};
class Enemy :public Object
{

private:
	/*EnemyType enemyType[6] = {
		{"ゾンビ(歴20年)",5,7,20},
		{"ゾンビ(歴50年)",12,15,23},
		{"ゾンビ(歴100年)",20,25,26},
		{"後輩スライム",5,7,20},
		{"同僚スライム",8,13,21},
		{"先輩スライム",12,15,23} };*/
public:
	//Enemy();
	//int Attack(Hero hero);
	//void Heal();
	int DefGetter();
	//void ViewStatus();
	void HpSetter(int dmage);//ｈｐ設定
	int HpGetter();
protected:
	int _enemyNum;//敵の番号保持
	int _maxHp;//最大Hp
	int _hp;
	int _atk;
	int _def;
protected:
	char* _name;
	int _nameSize;
};