#include <stdio.h>

//int main(void)
//{
//	//01 00 00 00
//	
//	char* pstr = "hello bit.";
//	printf("%s\n", pstr);
//	return 0;
//}

//int main(void)
//{
//	int arr[10] = { 0 };
//	/*0115FC48
//		0115FC48*/
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//}

//void test3(int (*arr)[5])
//{
//	
//}
//
//int main(void)
//{
//	int arr[3][5] = { 0 };
//	test3(arr);
//	return 0;
//}

//void test(int** p)
//{
//
//}
//
//int main(void)
//{
//	int* a = 10;
//	int** p = &a;
//	test(p);
//	test(&a);
//	return 0;
//}



//int main(void)
//{
//	int a = 10;
//	int	*p = &a;
//	printf("%d\n",sizeof(p));
//}
//int main(void)
//{
//	char ch = 'w';
//	char* p = &ch;
//	printf("%c", *p);
//	//printf("%d", );
//}

//int main(void)
//{
//	char* pstr = "hello wei.";
//	printf("%s\n", pstr);
//}

//int main(void)
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	//if (str1 == str1)
//		printf("hehe %p\n",str1);
//	//else
//		printf("haha %p\n",str2);
//}

//int main(void)
//{
//	int* p;//pΪָ���������ָ����Ǹ����ͱ���
//	int a[10] = { 0 };//����һ������
//	int* arr1[10] = a;
//	
//	char ch[10] = { 'c' };
//	char* arr1[10] = &ch;
//	char** arr3[10] = &arr1;
//}

//void print1(int (*arr1)[5], int x, int y)
//{
//	int i = 0;int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", arr1[i][j]);
//			//printf("%d ", *(*(arr1+i)+j));
//			printf("%d ", (*arr1 + i)[j]);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	print1(arr, 3, 5);
//	
//}


//int main(void)
//{
//	printf("%d:\n", sizeof(int*));
//	printf("%d:\n", sizeof(char*));
//	printf("%d:\n", sizeof(short*));
//	printf("%d:\n", sizeof(double*));
//	return 0;
//}

//int main(void)
//{
//	int a = 0x11223344;
//	int *c = &a;
//	*c +=1;
//	/*char* ca = (char*)c;
//	printf("%p\n", c);
//	printf("%p\n", c+1);
//	printf("%p\n", ca);
//	printf("%p\n", ca+1);*/
//	return 0;
//
//	
//}

//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int (*arr1)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(arr+i));
//	}
//	return 0;
//}

//void print_arr1(int arr[2][5],int cow , int low)
//{
//	int i, j;
//	for (i = 0; i < cow; i++)
//	{
//		for (j = 0; j < low; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr1(int (*arr1)[5] , int cow, int low)
//{
//	int i, j;
//	for (i = 0; i < cow; i++)
//	{
//		for (j = 0; j < low; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 2, 5);
//	return 0;
//}

//int main(void)
//{
//	int arr[] = {1,2,3};
//	int* arr1 = arr;
//	int* arr2 = arr1;
//	printf("%d\n", *(arr2));
//	printf("%d\n", *(arr2));
//}
//void print_1(int arr1[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(arr1+i));
//	}
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_1(arr, sz);
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//int main(void)
//{
//	printf("%p\n", test);//������ַ
//	printf("%p\n", &test);
//}

//int main(void)
//{
//	int a;
//	int cont = 0;
//	for (a=100;a<1000; a++)
//	{
//		if (a % 5 == 0 && a % 7 == 0)
//		{
//			
//			printf("%d\n", a);
//			cont++;
//		}
//	}
//	printf("sum=%d", cont);
//
//}
//int main()
//{
//	char a;
//	a = getchar();
//	printf("a=%c\n", a);
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*****************************\n");
//		printf("   1.add        2.sub\n");
//		printf("   3.mul		4.div\n");
//		printf("******************************\n");
//		printf("��ѡ��:");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("���������");
//			scanf_s("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("���������");
//			scanf_s("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("���������");
//			scanf_s("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("���������");
//			scanf_s("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			break;
//		}
//	}while (input);
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = {0,add,sub,mul,div};
//	while (input)
//	{
//		printf("*****************************\n");
//		printf("   1.add        2.sub\n");
//		printf("   3.mul        4.div\n");
//		printf("   0.end\n");
//		printf("******************************\n");
//		printf("��ѡ��:");
//		scanf_s("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("�����������");
//			scanf_s("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//			break;
//		}
//		else
//			printf("��������\n");
//		printf("ret = %d\n", ret);
//	}	
//	return 0;
//}

//����ָ��

//void test(const char* str)
//{
//	printf("str1=%s", str);
//}
//int main(void)
//{
//	void(*pfun)(const char*) = test;
//
//	void(*pffun[5])(const char*);
//	pffun[0] = test;
//	(*pffun[0])("hello cao");
//	void (*(*ppfunarr)[10])(const char*) = &pffun;//ָ����ָ�������ָ�룻
//	(*pffun)("hello wei");
//	(*ppfunarr[0])("hello come");
//}

//�ص�����

//#include<stdlib.h>
//int  int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//int main(void)
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//int main(void)
//{
//	int var[] = { 1,2,3 };
//	int i,sz;
//	int* ptr=var;
//	sz = sizeof(var) / sizeof(var[0]);
//	for (i = 0; i < sz; i++,ptr++)
//	{
//		printf("%d ", *ptr);	
//	}
//}
//int main(void)
//{
//	int arr[] = { 10,100,1000 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}

//int main(void)
//{
//	int arr[3] = { 1,2,3 };
//	int* p[3];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		p[i] = &arr[i];
//	}
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("value of arr[%d]=%d\n", i, *p[i]);
//		
//	}
//}//�����ǲ���������




