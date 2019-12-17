#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#define MAX 100
char z[MAX], a[MAX], q, op;
int i, j, k, x1, x2, x3, s[MAX];
int f(char);
void get(void);
int isnum(char);
int main()
{
	printf(" 请输入表达式\n");
	i = 0;
	do {
		i++;
		scanf("%c", &a[i]);
	} while (a[i] != '#');
	i = j = k = 1;
	z[j] = '#';
	get();
	while (!(z[j] == '#'&&q == '#'))
	{
		if (isnum(q))
		{
			s[k++] = q - 48;
			get();
		}
		else if (f(z[j]) > f(q))
		{
			op = z[j--];
			x1 = s[k - 1];
			x2 = s[k - 2];
			k = k - 2;
			switch (op)
			{
			case '+':x3 = x1 + x2; break;
			case'-':x3 = x1 - x2; break;
			case'*':x3 = x1 * x2; break;
			case'/':x3 = x1 / x2; break;
			}
			s[k++] = x3;
			printf("(%c,%d,%d,%d)\n", op, x1, x2, x3);
		}
		else if (f(z[j]) < f(q))
		{
			j++;
			z[j] = q;
			get();
		}
		else if (f(z[j]) == f(q))
		{
			if (z[j] == '('&&q == ')')
			{
				j = j - 1;
				get();
			}
			else printf("´íÎó\n");
		}
		else printf("´íÎó\n");
	}
	system("pause");
	return 0;
}
int f(char op)
{
	switch (op)
	{
	case '(':return 1;
	case '+':return 2;
	case'-':return 2;
	case'*':return 3;
	case'/':return 3;
	case')':return 4;
	case '#':return 0;
	default:printf("´íÎó\n");
		return -1;
	}
}
void get(void)
{
	q = a[i];
	i++;;
}
int isnum(char num)
{
	if (num >= 48 && num <= 57)
	{
		return 1;
	}
	return 0;
}