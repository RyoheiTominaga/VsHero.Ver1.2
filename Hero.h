#pragma once
#pragma once
#include"Object.h"
class Enemy;
struct Item//�A�C�e��
{
	char itemName[16 + 1];
	int attackPoint;//�U����
	int defPoint;//�h���
	int healPoint;//��
	int itemNumber;//�A�C�e����
};
class Hero :public Object {
private:
	Item item[3] = {
		{"�p���[��",15,0,0,2},
		{"�J�b�`����",0,12,0,2},
		{"�₭����",0,0,15,2},};//�����ɐ錾���K�v�@�@�\����(# ߄D�)

public:
	Hero(const char* name);//�R���X�g���N�^
	Hero(const Hero& hero);//�R�s�[�R���X�g�g���N�^
	int Attack(Enemy enemy);//�U��
	void UseItem();//�A�C�e�����g������
	int DefGetter();
	void ViewStatus();//�X�e�[�^�X�\��
private:
	int _itemNum;
	bool _item;
	char* _name;
	int _nameSize;
};