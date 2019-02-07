#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru"); // дл€ русских букв в консоли

	printf("«агадайте число от 0 до 1024 не включительно, € попытаюсь его угадать.\n"); 
	printf("ќтвечайте 1, если загаданное число больше,\n");
    printf("-1, если меньше, и 0, если € угадаю.\n");

	int l = 0, r = 1024, s = 1, c = 1024, answer = 1; // s = счетчик попыток

	while (answer!=0)
	{
		c = (l + r) / 2;
		printf("ѕопытка %d : %d?", s, c);
		scanf("%d", &answer);

		switch (answer)
		{
		case 1:
		//  if дл€ того, чтобы угадать число 1024 за 11 попыток
		//	if (++c == r)
		//	{
		//		c = r;
		//		answer = 0;
		//	}
		//	else 
				l = c;
			break;
		
		case -1:
			if (--c == r)
			{
				c = l;
				answer = 0;
			}
			else
				r = c;
			break;

		case 0:
			break;
		default:
			s--;
			printf("Ќеправильно\n");
			break;
		}
		s++;
	}

	printf("я угадал твоЄ загаданное число, это %d ", c);
    return 0;

}