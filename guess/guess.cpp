#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru"); // ��� ������� ���� � �������

	printf("��������� ����� �� 0 �� 1024 �� ������������, � ��������� ��� �������.\n");
	//���� ��� ���� ��������� ����� �� 0 �� 1023, � 1024 ��������� � 11 �������
	printf("��������� 1, ���� ���������� ����� ������,\n");
    printf("-1, ���� ������, � 0, ���� � ������.\n");

	int l = 0, r = 1024, s = 1, c = 1024, answer = 1; // s = ������� �������

	while (answer!=0)
	{
		c = (l + r) / 2;
		printf("������� %d : %d?", s, c);
		scanf("%d", &answer);

		switch (answer)
		{
		case 1:
			//if ��� ����, ����� �������� �� 11 ������� 1024, �� ���� �� ��������� 1024 �� 10 �������
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
			printf("�����������\n");
			break;
		}
		s++;
		
	}

	printf("� ������ ��� ���������� �����, ��� %d ", c);
    return 0;
}