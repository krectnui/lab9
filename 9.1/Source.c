#define ROW 9
#define COL 9
#include<stdio.h>
#include<locale.h>
/*void main()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= row; col++)
		printf("%7d", col*row);
		printf("\n");
	}
}*/

/*void main()
{
	int row, col;
	printf("\n");
	for (row = 30; row <=34; ++row)
	{
		for (col = 30; col <= row; col++)
			printf("5 ");
		printf("\n");

	
	}
}*/

void main() {
	/*int sum = 0, x, ch;
	setlocale(LC_ALL,"RUS");
	puts("Введите число");
	scanf_s("%d",&x);
	while (x > 0) {
		ch = x % 10;
		if (ch % 2 != 0) sum = sum + ch;


		x = x / 10;

	}
	printf("%d",sum);
}*/
	int a;
	char b;
	setlocale(LC_ALL, "Rus");
	printf("Введите символ\n");
	scanf_s("%c", &b);
	printf("Введите длину катета\n");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
			if (j == a || i == a || i == a - j + 1)
				putchar(b);
			else
				putchar(' ');
		putchar('\n');
	}
}