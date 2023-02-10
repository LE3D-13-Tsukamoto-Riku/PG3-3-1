#pragma once

class TestSingleton
{
private:
	TestSingleton();
	~TestSingleton();

public:
	TestSingleton(const TestSingleton& obj) = delete;
	TestSingleton& operator=(const TestSingleton& obj) = delete;

	void Title();
	void NewGame();
	void GamePlay();
	void GameClear();

	static TestSingleton* GetInstance();
};