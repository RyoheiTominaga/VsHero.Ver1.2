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
	printf("%d�̃_���[�W��^����", attack);
	
	return attack;
	if (item[_item==true&&_itemNum].attackPoint > 0) {
		cout << "�A�C�e���g���Ă�";
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

/*����
char itemName[16 + 1];
		int attackPoint;//�U����
		int defPoint;//�h���
		int healPoint;//��
		int hpPoint;//�̗�
		int itemNumber;//�A�C�e���̌�
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
Hero::Hero(const Hero& other)//�R�s�[�R���X�g���N�^ 
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
		printf("�A�C�e�����Ԃ��g���܂����H\nNo.0:%s�@����%d��\nNo.1:%s�@����%d��\nNo.2:%s�@����%d��\n",
			item[0].itemName, item[0].itemNumber, item[1].itemName, item[1].itemNumber, item[2].itemName, item[2].itemNumber);
		cout << endl;
		cin >> number;
		if (number > -1 && number < 3) {
			if (item[number].itemNumber <= 0) {
				printf("%s���g�����Ƃ����A�����������Ă��Ȃ�����...\n\n", item[number].itemName);
				number = -1;
			}
		}
	}
	_atk += item[number].attackPoint;
	_def += item[number].defPoint;
	item[number].itemNumber--;
	_itemNum = number;
	_item = true;
	printf("%s���g����", item[number].itemName);

	if (_hp + item[number].healPoint < _maxHp && item[number].healPoint>0)
	{
		printf("\n%d�񕜂���", item[number].healPoint);
		_hp += item[number].healPoint;
		_item = false;
	}
	else if (_hp == _maxHp && item[number].healPoint > 0) {
		printf("\n�����������N����Ȃ�����");
		_item = false;
	}
	else if (_hp + item[number].healPoint > _maxHp && item[number].healPoint > 0)
	{
		printf("\n%d�񕜂���", _maxHp - _hp);_hp = _maxHp;
		_item = false;
	}

}
void Hero::ViewStatus() {
	printf("���O:%s\n�U����:%d\n�h���:%d\n�̗�:%d/%d\n", _name, _atk, _def, _hp, _maxHp);
}
