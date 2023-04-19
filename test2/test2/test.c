#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	int a=3;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);
	return 0;

}


//int main()//数组
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//int add(x, y)//函数
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = 0;
//	int sum2 = 0;
//	int c = 30;
//	int d = 30;
//	sum1= add(a, b);
//	sum2 = add(c, d);
//	printf("sum1=%d\nsum2=%d", sum1,sum2);
//	return 0;
//}

//int main()//while循环
//{
//	int line = 0;
//	printf("加入强生集团\n");
//	while (line < 20000)
//	{
//		printf("敲代码:%d\n",line);
//			line++;
//	}
//	if(line>=20000)
//	printf("offer\n");
//	return 0;
//
//}

//int main()//选择语句
//	{
//	int input=0;
//	printf("加入强生集团\n");
//	printf("你要好好学习吗(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//
//	}

//int main()//字符串长度
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//
//}
////#include <stdio.h>
////enum Sex//枚举
//{
//	MALE,
//    FEMALE,
//    SECRET
//};
//int main()
//{
//    printf("%d\n", MALE);
//    printf("%d\n", FEMALE);
//    printf("%d\n", SECRET);
//    return 0;
//}

//#include <stdio.h>//字符串/0是结束的标志
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//
//}
