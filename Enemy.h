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
		{"�]���r(��20�N)",5,7,20},
		{"�]���r(��50�N)",12,15,23},
		{"�]���r(��100�N)",20,25,26},
		{"��y�X���C��",5,7,20},
		{"�����X���C��",8,13,21},
		{"��y�X���C��",12,15,23} };*/
public:
	//Enemy();
	//int Attack(Hero hero);
	//void Heal();
	int DefGetter();
	//void ViewStatus();
	void HpSetter(int dmage);//�����ݒ�
	int HpGetter();
protected:
	int _enemyNum;//�G�̔ԍ��ێ�
	int _maxHp;//�ő�Hp
	int _hp;
	int _atk;
	int _def;
protected:
	char* _name;
	int _nameSize;
};