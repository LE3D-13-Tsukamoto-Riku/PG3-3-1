#include "test.h"
#include <stdio.h>
#include <time.h>

int main() {

	int sceneNo = 0;
	int timer = 60000;
	while (true) {
		if (timer <= 0) {
			if (sceneNo == 0) {
				printf("\033[2J");
				printf("\033[%d;%dH", 0, 0);
				TestSingleton* p = TestSingleton::GetInstance();
				p->Title();
				printf("---\n");
				timer = 60000;
				sceneNo++;
			}
			else if (sceneNo == 1) {
				TestSingleton* p = TestSingleton::GetInstance();
				p->NewGame();
				printf("---\n");
				timer = 60000;
				sceneNo++;
			}
			else if (sceneNo == 2) {
				TestSingleton* p = TestSingleton::GetInstance();
				p->GamePlay();
				printf("---\n");
				timer = 60000;
				sceneNo++;
			}
			else if (sceneNo == 3) {
				TestSingleton* p = TestSingleton::GetInstance();
				p->GameClear();
				printf("---\n");
				timer = 60000;
				sceneNo = 0;
			}	
		}
		else {
			for (int a = 0; a < 5000; a++) {}
				timer--;
		}
	}
	
	return 0;
}