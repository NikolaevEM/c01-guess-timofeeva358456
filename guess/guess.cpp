#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru"); // äëÿ ðóññêèõ áóêâ â êîíñîëè

	printf("Çàãàäàéòå ÷èñëî îò 0 äî 1024, ÿ ïîïûòàþñü åãî óãàäàòü.\n");
	printf("Îòâå÷àéòå 1, åñëè çàãàäàííîå ÷èñëî áîëüøå,\n");
        printf("-1, åñëè ìåíüøå, è 0, åñëè ÿ óãàäàþ.\n");

	int l = 0, r = 1024, s = 1, c, answer; // s = ñ÷åò÷èê ïîïûòîê
	c = (l + r) / 2;
	printf("Ïîïûòêà %d : %d?", s, c);
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
			printf("ß óãàäàë");
			break;
		}
		s++;
		c = (l + r) / 2;
		printf("Ïîïûòêà %d : %d?", s, c);
		scanf("%d", &answer);

	}
    return 0;
}
