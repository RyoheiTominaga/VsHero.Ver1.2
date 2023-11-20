// VsHero.ver1.0.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
/*勇者vsスライムorゾンビを戦わせるプログラムを作成しなさい。
規模はお任せしますが、以下の最低要件は満たしなさい。

■要件
アップキャスト・多態性の動作や利便性が確認できること
継承を使っていること。
クラスの値渡しやクラス生成時のコピーに対応すること。
それっぽいバトルが繰り広げられること

■作成クラスの例（基底クラスや派生クラス）
Slimeクラス、Zombieクラス、Heroクラス, Itemクラス
Enemyクラス、Objectクラス...など
*/
#include <iostream>
#include"Enemy.h"
#include"Slime.h"
#include"Zombi.h"
#include"Hero.h"
using namespace std;
enum {
	SLIME = 0,
	ZOMBI = 1,
};
int main()
{
	char name[16];
	cout << "名前を入力してね>";
	cin >> name;
	Hero hero(name);
	Slime slime;
	Zombi zombi;
	int eNum = 0;
	int num = 0;//行動選択
	cout << "戦闘は一度きりだ\n";
	bool victory = false;
	int enemyType = rand() % 2;
	switch (enemyType) {
	case SLIME:
		while (victory == false)
		{
			cout << endl;
			hero.ViewStatus();
			cout << "\n行動を選択してください>\n1:攻撃\n2:アイテムを使う\n" << endl;
			cin >> num;
			switch (num) {
			case 1:slime.HpSetter(hero.Attack(slime)); break;
			case 2:hero.UseItem();break;
			default:cout << "ぼーっとしている" << endl;
			}
			cout << endl;
			slime.ViewStatus();
			eNum = rand() % 2;
			switch (eNum) {
			case 0:hero.HpSetter(slime.Attack(hero)); break;
			case 1:slime.Heal();break;
			}
			
			if (slime.HpGetter() <= 0 || hero.HpGetter() <= 0) {
				victory = true;
			}

		}
	case ZOMBI:while (victory == false)
	{
		cout << endl;
		hero.ViewStatus();
		cout << "\n行動を選択してください>\n1:攻撃\n2:アイテムを使う\n" << endl;
		cin >> num;
		switch (num) {
		case 1:zombi.HpSetter(hero.Attack(zombi)); break;
		case 2:hero.UseItem();break;
		default:cout << "ぼーっとしている" << endl;
		}
		cout << endl;
		zombi.ViewStatus();
		eNum = rand() % 2;
		switch (eNum) {
		case 0:hero.HpSetter(zombi.Attack(hero)); break;
		case 1:zombi.Heal();break;
		}

		if (zombi.HpGetter() <= 0 || hero.HpGetter() <= 0) {
			victory = true;
		}

	} break;
	}

	////挿入ソート:：要勉強っす(^^♪
	//const int max = 10;
	//int j = 0;
	//int a[max] = { 3,2,1,6,5,4,9,8,7,10 };
	//for (int i = 1;i < 10;++i) {
	//	j = i;
	//	while ((a[j] < a[j- 1])&&j>0) {
	//		swap(a[j], a[j - 1]);
	//		--j;
	//	}
	//}
	//for (int i = 0;i < 10;++i) {
	//	cout << a[i] << "," << endl;
	//}
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
