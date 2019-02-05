#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru"); // для русских букв в консоли

	printf("Загадайте число от 0 до 1024, я попытаюсь его угадать.\n");
	printf("Отвечайте 1, если загаданное число больше,\n");
    printf("-1, если меньше, и 0, если я угадаю.\n");

	int l = 0, r = 1024, s = 1, c, answer; // s = счетчик попыток
	c = (l + r) / 2;
	printf("Попытка %d : %d?", s, c);
	scanf("%d", &answer);

	while (answer!=0)
	{
		switch (answer)
		{
		case 1:
			l = c;
			break;

		case -1:
			r = c;
			break;

		case 0:
			printf("Я угадал");
			break;
		}
		s++;
		c = (l + r) / 2;
		printf("Попытка %d : %d?", s, c);
		scanf("%d", &answer);

	}
    return 0;
}