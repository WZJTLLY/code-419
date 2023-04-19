#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main()
{
	char ch = 'ab';
	char* pc = &ch;
	*pc = 'cc';
	printf("%c\n", ch);
	printf("%d\n", &ch);
	printf("%d\n", pc);
	printf("%d\n", sizeof(pc));
	return 0;

}
//extern int ADD(int,int);//函数里的extern声明外部符号
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//void test()
//{
//	static int b = 0;
//	b++;
//	printf("%d\0", b);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}
////int main()
//{
//	int a = 20;
//	int b = 30;
//	int max = 0;
//	max=(a > b ? a : b);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;//先使用a的值，再++
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//int main()//按位取反
//
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int F(int x, int y)//用函数比较数值大小
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int max1 = 10;
//	int max2 = 5;
//	int max=0;
//	max = F(max1, max2);
//	printf("max=%d\n", max);
//	return 0;
//}