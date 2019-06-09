//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct MyStruct
//{
//	char a[20];//前二十个位置，因为char类型的数据占一个字节，任意数都是一的整数倍
//	int n;//因为20是4的整数倍，所以直接从20 的位置开始存4个字节
//	char b[20];//接下来的20位直接存char类型的20个数据
//};
//struct MyStruct1
//{
//	double n;
//	int a;//前二十个位置，因为char类型的数据占一个字节，任意数都是一的整数倍
//	int b;
//};
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//struct S s = { 0 };
//s.a = 10;
//s.b = 12;
//s.c = 3;
//s.d = 4;
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { { 1, 2, 3, 4 }, 1000 };
//void print1(struct S s){
//	printf("%d\n", s.num);
//}
//void print2(struct S *ps){
//	printf("%d\n", ps->num);
//}
//struct point
//{
//	int x;
//	int y;
//}p1;
//struct point p2;
//struct point p3 = { 10, 20 };


//struct Stu s = { "zhangsan", 20 };
//struct Node
//{
//	int data;
//	struct point p;
//	struct Node * next;
//
//}n1 = { 10, {4,5},NULL };
//
//struct Node n2 = { 20, { 5, 6 }, NULL };


//int main(){
//	//printf("%d\n", sizeof(struct MyStruct));
//	//printf("%d\n", sizeof(struct MyStruct1));
//	//printf("%d\n", sizeof(struct S));
//	//print1(s);
//	//print2(&s);
//	typedef struct
//	{
//		int data[20];
//		int length;
//	}Sqlist;
//
//	Sqlist L;
//	L.length; //直接调用L中length的值
//	struct student{
//		int age;
//		int class_;
//	};
//	struct class2{
//		struct student s1;
//	};
//	struct class2 *c;
//	struct class2 cc = {
//		.s1 = {
//			.age = 9,
//			.class_ = 2
//		}
//	};
//	c = &cc;
//	printf("%d\n", c->s1.class_);
//	system("pause");
//	return 0;
//}