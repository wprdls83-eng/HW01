//main.c

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <windows.h>

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;
}

int FullPotion(int Max)
{
	Max = 5;

	return 5;
}

int main(void)
{
	SetConsoleOutputCP(65001);

	int character[4] = { 0, };
	int i = 0;
	int a = character[0] + character[1];
	int b;
	int j = 0;
	int z = 0;

	while (i < 1)
	{
		printf("체력과 마나를 입력해주세요. : ");

		scanf("%d", &character[0]);
		scanf("%d", &character[1]);

		if (character[0] <= 50 && character[1] <= 50)
		{
			printf("체력과 마나가 50 이하입니다.\n\n");
		}
		else if (character[0] <= 50)
		{
			printf("체력이 50 이하입니다.\n\n");
		}
		else if (character[1] <= 50)
		{
			printf("마나가 50 이하입니다.\n\n");
		}
		else
		{
			++i;
		}
	}

	while (j < 1)
	{
		printf("공격력과 방어력을 입력해주세요. : ");

		scanf("%d", &character[2]);
		scanf("%d", &character[3]);

		if (character[2] <= 0 && character[3] <= 0)
		{
			printf("공격력과 방어력이 0 이하입니다.\n\n");
		}
		else if (character[2] <= 0)
		{
			printf("공격력이 0 이하입니다.\n\n");
		}
		else if (character[3] <= 0)
		{
			printf("방어력이 0 이하입니다.\n\n");
		}
		else
		{
			++j;
		}
	}

	int count = 0;
	int p_HPPotion = 0;
	int p_MPPotion = 0;
	int L = 1;

	setPotion(5, &p_HPPotion, &p_MPPotion);
	FullPotion(5);

	printf("HP MP 포션이 각각 5개씩 지급됩니다.\n");

	while (z < 1)
	{
		printf("캐릭터 상태창\n\n");
		printf("1.HP UP\n2.MP UP\n3.공격력 UP\n4.방어력 UP\n5.현재 능력치\n6.Level Up\n7.HP MP 포션 충전\n8.0.나가기\n\n");

		scanf("%d", &b);

		if (b == 0)
		{
			++z;
		}
		else if (b == 1)
		{
			printf("HP 포션을 사용합니다.\n\n");
			{
				if (p_HPPotion > 0)
				{
					p_HPPotion = p_HPPotion - 1;
					character[0] = character[0] + 20;

					printf("남은 포션 : %d\n\n", p_HPPotion);
				}
				else
				{
					printf("HP 포션이 없습니다! \n\n");
				}

			}

		}
		else if (b == 2)
		{
			printf("MP 포션을 사용합니다.\n\n");
			{
				if (p_MPPotion > 0)
				{
					p_MPPotion = p_MPPotion - 1;
					character[1] = character[1] + 20;

					printf("남은 포션 : %d\n\n", p_MPPotion);
				}
				else
				{
					printf("MP 포션이 없습니다! \n\n");
				}
			}
		}
		else if (b == 3)
		{
			printf("공격력을 2배로 만듭니다.\n\n");
			character[2] = character[2] * 2;
		}
		else if (b == 4)
		{
			printf("방어력을 2배로 만듭니다.\n\n");
			character[3] = character[3] * 2;
		}
		else if (b == 5)
		{
			printf("현재 상태입니다.\n");
			printf("HP : %d\n", character[0]);
			printf("MP : %d\n", character[1]);
			printf("공격력 : %d\n", character[2]);
			printf("방어력 : %d\n", character[3]);
			printf("레밸 : %d\n", L);
			printf("현제 남은 HP 포션 : %d개\n", p_HPPotion);
			printf("현제 남은 MP 포션 : %d개\n", p_MPPotion);
		}
		else if (b == 6)
		{
			printf("레벨업합니다!\n\n");
			L = L + 1;
		}
		else if (b == 7)
		{
			printf("포션을 충전합니다\n\n");
			p_HPPotion = FullPotion(5);
			p_MPPotion = FullPotion(5);
		}
	}

	printf("상태창을 종료합니다.\n\n");

	return 0;
}