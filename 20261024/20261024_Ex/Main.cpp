#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <limits>
#include <vector>

using namespace std;

int main()
{
	//Enemy enemy;

	//ベクターを宣言
	vector<int> number;
	vector<float> number2;
	//vector<Enemy> enemies;
	//追加
	number.push_back(10);
	number.push_back(20);
	number.push_back(30);
	//要素数確認
	cout << number.size() << endl;
	//
	int num = number[0];
	cout << num;
	//削除
	number.clear();
	return 0;
}