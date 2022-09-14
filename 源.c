

#include <stdio.h>
int main()	//主函数
{
	printf("Hellow,World\n");//将文字显示在屏幕上
	printf("你好，世界\n");
	printf("%d\n",200000);  //打印一个整数
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	return 0;//函数返回值
}
//运行 F5
//一个工程中有且只有一个main函数
//一个工程中可以有多个.c文件
// 返回类型为整数类型（integer）
//{ } 花括号内部是函数体，可以做一些处理
//数据类型包括   
//char  字符数据类型
//short 短整型
//int   整形
//long  长整形
//long long 更长整形
//float weight  单精度浮点型
//double d  双精度浮点型