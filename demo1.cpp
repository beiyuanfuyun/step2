#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��֧��ѭ��
//1��.˳��ṹ  2��.ѡ��ṹ  3��.ѭ���ṹ
//ѡ��ṹ-��֧���-if  switch
//ѭ���ṹ-ѭ�����-while ,for ,do while
// 
// 
// 3.��1.while
//int main()
//{
//	int a = 1;
//	while (a<=10)
//	{
//		
//		if (a == 5)
//			continue;//break��������ѭ�����������Ϊcontinue�����������ߣ�
//		//��������ѭ�����Ի���д������
//		printf("%d\n", a);
//	 a++;
//	}
//	return 0;
//}




//int main()
//{
//int a = 0;
//while (a < 10)
//{
//	a++;
//	if (a == 5)
//		continue;//��ֹѭ���б���ѭ���ĺ���Ĵ��룬
//	//ֱ����ת������ѭ�����жϲ��֣��жϱ���ѭ��Ҫ��Ҫִ����һ��ѭ��
//	
//	printf("%d\n", a);
//	
//}
//return 0;
//}


//int main()
//{
//	int a = 0;
//	char b[20] = "helloworld";
//	while (a < 10)
//	{
//		a++;
//		if (a == 4)
//			break;//breakֻ���鵱ǰ���ڵ�����
//		printf("%d\n", a);
//		
//	}
//	printf("%s\n", b);
//
//}
//3.)1.-��������
//����1.getchar()-��ȡ�ַ�,putchar-����ַ�
int main()
{
	int ch = 0;
	//ctrl+z������ֹ����
	//EOF-end of file->-1
	while ((ch = getchar()) !=EOF )//EODF����-1��ͷ�ļ��ĺ���
	{
		putchar(ch);
	 }
	return 0;
	
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
}

 
 //2).2.switch��䣬ר��ʵ�ֶ��֧�ṹ 
//int main() 
//{ 
//	int a = 0;
//	scanf("%d", &a);
//	switch(a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//3.switch������Ƕ��ʹ�õ�
  
  
 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //ע��swwitch����ֻ�������α��ʽ
//	{
//	case 1://��������Ҫ���α��ʽ���������κ���ʽ��1.0���У�1+0���ԣ��һ���Ҫ������
//	//������int a=0;case n://���ʱ��n���ڱ���
//		printf("����1\n");//����break����return 0;�Ϳ�������������飬��Ȼ�ͻή����Ҳ��ִ��
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//    }
//}
 
 
 
 
// 2).1.if else-if elseѡ����䣬else����ʡ��

// ps:�ɶ��ԣ��Ƚ�������������Ŀɶ���
// ����1.if(condition){
// return x;
// }
// retrun y;
// ����2.if (condition)
// {
//     return x;
// }
// else
// {retrun y;
// }
// �����������ȷ����ͬ�����ڶ����Ŀɶ��Ը���
// ����3.
//int main()
//{
//    int num = 2;
//    if (num = 5)
//    {
//        printf("hehe\n");
//    }//��������Ǵ���ĵģ����ǿ����������������׷���num==5�Ĵ�����Ϊnum=5Ϊ��ֵ�����ܶ�
//    //������д���Ϳ��Խ�����⣬����д��5==num)���������׵����ҵ���ʱ�򻹻ᱨ��
//    //��Ϊ����5�����������num�����ǲ��е�
//}
// 
// 
// 
//����4/
//int main()
//{
//    int a = 10;
//    if (5 == a)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
// 
// 
// int main()
//{   int a=0;
//    int b=1;
//    if (a == 1)
//    {
//        if (b == 1)
//            printf("hehe\n");
//    }
//    else//���������༭���Ὣ���else������������δƥ��ifƥ�䣬���Իᱨ�������ģ�
//       printf("haha\n");
// return 0;
// 
// } 


//��ϰ��1.�ж�һ�����Ƿ�Ϊ����2.���1-100֮�������
//#include<string.h>
//��ϰ1.
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//�ٴ�ע�����ﲻҪ���з���
//	
//	if (1 == a % 2)
//	{
//		printf("%dΪ����\n", a);
//	}
//	else
//		printf("%dΪż��\n", a);
//}
 

//��ϰ2
//int main()
//{
//	   int a = 1;
//	   while (a <= 100)
//	   {
//		   if (a % 2 == 1 && a <= 100)
//			   printf("%dΪ����\n", a);
//		   else
//			   ;// printf(" % dΪż��\n", a);
//		   
//		a++;
//	   }
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//    else if (age >= 18 && age < 28)//��������д����else if(18<=age<28)
//		//��Ϊִ��ԭ��Ϊ��ִ��18<=ageΪ�٣��򲼶�ֵΪ0�����ʱ����Ϊ0<28Ϊ�����ӡ����
//		printf("����\n");
//	else if (age >= 28 && age < 60)
//		printf("׳��\n");
//	else
//		printf("����\n");
// 
//
//
//
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else {//Ҳ��������д//�������If����п��ƶ�����䣬����Ҫʹ�ô����
//		if (age >= 18 && age < 28)//��������д����else if(18<=age<28)
//		//��Ϊִ��ԭ��Ϊ��ִ��18<=ageΪ�٣��򲼶�ֵΪ0�����ʱ����Ϊ0<28Ϊ�����ӡ����
//			printf("����\n");
//		else if (age >= 28 && age < 60)
//			printf("׳��\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//}
 

//1.��;�Ÿ����Ľ�һ�����
//int main()
//{//���
//	int a = 0;
//	;//�˴���Ȼ����䣬ֻ���ǿ����
//	return 0;
//}