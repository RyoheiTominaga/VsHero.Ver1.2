#define _CRT_SECURE_NO_WARNINGS
#include"Hero.h"
#include"Enemy.h"
#include<iostream>
using namespace std;

int Hero::Attack(Enemy enemy) {
	int attack = _atk - enemy.DefGetter();
	if (attack <= 0) {
		attack = rand() % 3;
	}
	printf("%dのダメージを与えた", attack);
	
	return attack;
	if (item[_item==true&&_itemNum].attackPoint > 0) {
		cout << "アイテム使われてる";
		_atk -= item[_itemNum].attackPoint;
		_item = false;
	}
}

int Hero::DefGetter() {
	return _def;
	if (_item && item[_itemNum].defPoint > 0) {
		_def -= item[_itemNum].defPoint;
		_item = false;
	}
}

/*メモ
char itemName[16 + 1];
		int attackPoint;//攻撃力
		int defPoint;//防御力
		int healPoint;//回復
		int hpPoint;//体力
		int itemNumber;//アイテムの個数
*/
Hero::Hero(const char* name) {
	_hp = 50;
	_def = 12;
	_atk = 14;
	_itemNum = -1;
	_maxHp = 50;
	_item = false;
	_nameSize = strlen(name);
	_name=new char[_nameSize+1];
	strcpy(_name, name);
}
Hero::Hero(const Hero& other)//コピーコンストラクタ 
{
	_nameSize = other._nameSize;
	_name = new char[_nameSize+1];
	strcpy(_name, other._name);
	_hp = other._hp;
	_maxHp = other._maxHp;
	_atk = other._atk;
	_def = other._def;
	_item = other._item;
	_itemNum = other._itemNum;

}
void Hero::UseItem() {

	int number = -1;
	while ((number > 2 || number < 0)) {
		printf("アイテム何番を使いますか？\nNo.0:%s　あと%d個\nNo.1:%s　あと%d個\nNo.2:%s　あと%d個\n",
			item[0].itemName, item[0].itemNumber, item[1].itemName, item[1].itemNumber, item[2].itemName, item[2].itemNumber);
		cout << endl;
		cin >> number;
		if (number > -1 && number < 3) {
			if (item[number].itemNumber <= 0) {
				printf("%sを使おうとした、しかし持っていなかった...\n\n", item[number].itemName);
				number = -1;
			}
		}
	}
	_atk += item[number].attackPoint;
	_def += item[number].defPoint;
	item[number].itemNumber--;
	_itemNum = number;
	_item = true;
	printf("%sを使った", item[number].itemName);

	if (_hp + item[number].healPoint < _maxHp && item[number].healPoint>0)
	{
		printf("\n%d回復した", item[number].healPoint);
		_hp += item[number].healPoint;
		_item = false;
	}
	else if (_hp == _maxHp && item[number].healPoint > 0) {
		printf("\nしかし何も起こらなかった");
		_item = false;
	}
	else if (_hp + item[number].healPoint > _maxHp && item[number].healPoint > 0)
	{
		printf("\n%d回復した", _maxHp - _hp);_hp = _maxHp;
		_item = false;
	}

}
void Hero::ViewStatus() {
	printf("名前:%s\n攻撃力:%d\n防御力:%d\n体力:%d/%d\n", _name, _atk, _def, _hp, _maxHp);
}
