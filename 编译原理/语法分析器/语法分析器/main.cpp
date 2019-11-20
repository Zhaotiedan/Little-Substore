#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>    
#include<string>

char str[50];
int index = 0;
void E();                //E->TX; 
void X();                //X->+TX | e 
void T();                //T->FY 
void Y();                //Y->*FY | e 
void F();                //F->(E) | i 

int main()                /*递归分析*/
{
	int len;
	int m;
	printf("请输入字符串(长度<50>）:\n");
	scanf("%s", str);
	len = strlen(str);
	//str[len]='#';
	str[len + 1] = '\0';
	E();
	printf("%s为合法符号串\n", str);
	strcpy(str, "");
	index = 0;
	system("pause");
	return 0;
}

void E()
{
	T();    
	X();
}
void X()
{
	if (str[index] == '+')
	{
		index++;
		T();
		X();
	}
}
void T()
{
	F();     
	Y();
}
void Y()
{
	if (str[index] == '*') 
	{
		index++;
		F();
		Y();
	}
}
void F()
{
	
	if (str[index] =='i')
	{
		index++;
	}
	else if (str[index] == '(')
	{
		index++;
		E();
		if (str[index] == ')')
		{
			index++;
		}
		else
		{
			printf("\n不合法\n");
			system("pause");
			exit(0);
		}
	}
	else
	{
		printf("不合法\n");
		system("pause");
		exit(0);
	}
}
