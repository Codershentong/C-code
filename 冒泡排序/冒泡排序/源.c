#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int a[]);
int main()
{
	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
 bubble_sort(a);
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);

	return 0;
}
void bubble_sort(int a[])
{
	int temp;
	for (int i = 0; i < 9 ;i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;


		    }

	    }

	  }
	
}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h> 
//void bubble_sort(int a[], int n);   //��������"bubble_sort" 
//int number[10000000];   //�����������涨��������Ը��� 
//void bubble_sort(int a[], int n)    //�����Ǻ���bubble_sort�ĳ��� 
//{
//    int i, j, temp;    //�����������ͱ��� 
//    for (j = 0; j < n - 1; j++)    //��һ��Ƕ��ѭ��������һ��ÿһ������Ԫ�� ������ð�ݺ������ʱ�临�Ӷȸߣ�  
//    {
//        for (i = 0; i < n - 1 - j; i++)
//        {
//            if (a[i] > a[i + 1])  //�Ӵ�С�žͰ���ߵ�">"��Ϊ"<" ������
//            {
//                temp = a[i];      //a[i]��a[i+1](��a[i]�����Ǹ�) ����
//                a[i] = a[i + 1];    //�����Ľ���ԭ��"c=a;a=b;b=c" 
//                a[i + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()      //������ 
//{
//    int i, n;
//    printf("�������ָ�����\n");
//    scanf("%d", &n);      //�������ָ���
//    printf("����%d����:\n", n);
//    for (int j = 0; j < n; j++)    //��һ��forѭ���������������� 
//        scanf("%d", &number[j]);
//    bubble_sort(number, n);   //���ú���bubble_sort 
//    for (i = 0; i < n - 1; i++)   //�������������õ����� 
//        printf("%d ", number[i]);   //������ôд����Ϊ��Щ���и�ʽҪ��(���һ�������治���пո�)                                
//    printf("%d\n", number[i]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[10] = {1};
//	for (int i = 0; i < 10; i++)
//		printf("%d\n", a[i]);
//	return 0;
//}