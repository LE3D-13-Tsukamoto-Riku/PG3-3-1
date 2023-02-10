#include "test.h"
#include <stdio.h>

//�R���X�g���N�^
TestSingleton::TestSingleton()
{}

//�f�X�g���N�^
TestSingleton::~TestSingleton()
{}

TestSingleton* TestSingleton::GetInstance()
{
	//static : �ÓI��(���炩���ߏ����ς�)
	static TestSingleton instance;//instance : ����
							//�����낭�Q�[���ɂ��Ă���T�C�R���̂悤��

	return &instance;
}

void TestSingleton::Title() 
{
	printf("�^�C�g��\n");
}

void TestSingleton::NewGame() 
{
	printf("�V�K�Q�[��\n");
}

void TestSingleton::GamePlay() 
{
	printf("�Q�[���v���C\n");
}
void TestSingleton::GameClear()	
{
	printf("�Q�[���N���A\n");
}