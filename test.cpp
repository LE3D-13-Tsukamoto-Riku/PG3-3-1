#include "test.h"
#include <stdio.h>

//コンストラクタ
TestSingleton::TestSingleton()
{}

//デストラクタ
TestSingleton::~TestSingleton()
{}

TestSingleton* TestSingleton::GetInstance()
{
	//static : 静的な(あらかじめ準備済み)
	static TestSingleton instance;//instance : 実体
							//すごろくゲームについているサイコロのような

	return &instance;
}

void TestSingleton::Title() 
{
	printf("タイトル\n");
}

void TestSingleton::NewGame() 
{
	printf("新規ゲーム\n");
}

void TestSingleton::GamePlay() 
{
	printf("ゲームプレイ\n");
}
void TestSingleton::GameClear()	
{
	printf("ゲームクリア\n");
}