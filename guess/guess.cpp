#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru"); // ��� ������� ���� � �������

	printf("��������� ����� �� 0 �� 1024, � ��������� ��� �������.\n");
	printf("��������� 1, ���� ���������� ����� ������,\n");
    printf("-1, ���� ������, � 0, ���� � ������.\n");

	int l = 0, r = 1024, s = 1, c, answer; // s = ������� �������
	c = (l + r) / 2;
	printf("������� %d : %d?", s, c);
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
			printf("� ������");
			break;
		}
		s++;
		c = (l + r) / 2;
		printf("������� %d : %d?", s, c);
		scanf("%d", &answer);

	}
    return 0;
}