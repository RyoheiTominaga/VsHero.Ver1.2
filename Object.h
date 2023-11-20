#pragma once
#pragma once
class Object {
protected:
	int _hp;
	int _atk;
	int _def;
	int _maxHp;
public:
	//void ViewStatus();//ステータス表示
	int HpGetter();//hp情報受け渡し
	void HpSetter(int dmage);//ｈｐ設定
};