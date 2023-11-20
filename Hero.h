#pragma once
#pragma once
#include"Object.h"
class Enemy;
struct Item//アイテム
{
	char itemName[16 + 1];
	int attackPoint;//攻撃力
	int defPoint;//防御力
	int healPoint;//回復
	int itemNumber;//アイテム個数
};
class Hero :public Object {
private:
	Item item[3] = {
		{"パワー薬",15,0,0,2},
		{"カッチン薬",0,12,0,2},
		{"やくそう",0,0,15,2},};//ここに宣言が必要　　構造体(# ﾟДﾟ)

public:
	Hero(const char* name);//コンストラクタ
	Hero(const Hero& hero);//コピーコンストトラクタ
	int Attack(Enemy enemy);//攻撃
	void UseItem();//アイテムを使う処理
	int DefGetter();
	void ViewStatus();//ステータス表示
private:
	int _itemNum;
	bool _item;
	char* _name;
	int _nameSize;
};