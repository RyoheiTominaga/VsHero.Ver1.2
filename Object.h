#pragma once
#pragma once
class Object {
protected:
	int _hp;
	int _atk;
	int _def;
	int _maxHp;
public:
	//void ViewStatus();//�X�e�[�^�X�\��
	int HpGetter();//hp���󂯓n��
	void HpSetter(int dmage);//�����ݒ�
};