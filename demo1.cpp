#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//分支与循环
//1）.顺序结构  2）.选择结构  3）.循环结构
//选择结构-分支语句-if  switch
//循环结构-循环语句-while ,for ,do while
// 
// 
// 3.）1.while
//int main()
//{
//	int a = 1;
//	while (a<=10)
//	{
//		
//		if (a == 5)
//			continue;//break可以跳出循环，但是如果为continue并不会往后走，
//		//会陷入死循环所以换种写法如下
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
//		continue;//终止循环中本次循环的后面的代码，
//	//直接跳转到本次循环的判断部分，判断本次循环要不要执行下一次循环
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
//			break;//break只打碎当前所在的区块
//		printf("%d\n", a);
//		
//	}
//	printf("%s\n", b);
//
//}
//3.)1.-附属代码
//代码1.getchar()-获取字符,putchar-输出字符
int main()
{
	int ch = 0;
	//ctrl+z可以终止代码
	//EOF-end of file->-1
	while ((ch = getchar()) !=EOF )//EODF就是-1，头文件的函数
	{
		putchar(ch);
	 }
	return 0;
	
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
}

 
 //2).2.switch语句，专门实现多分支结构 
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}
//3.switch语句可以嵌套使用的
  
  
 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //注意swwitch后面只能是整形表达式
//	{
//	case 1://这里仍需要整形表达式，或者整形函数式如1.0不行，1+0可以，且还需要常量，
//	//不能是int a=0;case n://这个时候n属于变量
//		printf("星期1\n");//加上break或者return 0;就可以跳出这个区块，不然就会降下述也给执行
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//    }
//}
 
 
 
 
// 2).1.if else-if else选择语句，else可以省略

// ps:可读性，比较下面两条代码的可读性
// 代码1.if(condition){
// return x;
// }
// retrun y;
// 代码2.if (condition)
// {
//     return x;
// }
// else
// {retrun y;
// }
// 两条代码的正确性相同，但第二个的可读性更好
// 代码3.
//int main()
//{
//    int num = 2;
//    if (num = 5)
//    {
//        printf("hehe\n");
//    }//这个代码是错误的的，但是可以跑起来，不容易发现num==5的错误，因为num=5为赋值可以跑动
//    //但换种写法就可以解决问题，这样写（5==num)这样不容易掉，且掉的时候还会报错，
//    //因为想让5这个常量赋给num变量是不行的
//}
// 
// 
// 
//代码4/
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
//    else//这个会出错，编辑器会将这个else会与离得最近的未匹配if匹配，所以会报不出来的，
//       printf("haha\n");
// return 0;
// 
// } 


//练习：1.判断一个数是否为奇数2.输出1-100之间的奇数
//#include<string.h>
//练习1.
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//再次注意这里不要换行符号
//	
//	if (1 == a % 2)
//	{
//		printf("%d为奇数\n", a);
//	}
//	else
//		printf("%d为偶数\n", a);
//}
 

//练习2
//int main()
//{
//	   int a = 1;
//	   while (a <= 100)
//	   {
//		   if (a % 2 == 1 && a <= 100)
//			   printf("%d为奇数\n", a);
//		   else
//			   ;// printf(" % d为偶数\n", a);
//		   
//		a++;
//	   }
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//    else if (age >= 18 && age < 28)//不能这样写代码else if(18<=age<28)
//		//因为执行原则为先执行18<=age为假，则布尔值为0，则此时翻译为0<28为真则打印青年
//		printf("青年\n");
//	else if (age >= 28 && age < 60)
//		printf("壮年\n");
//	else
//		printf("老年\n");
// 
//
//
//
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else {//也可以这样写//如果想在If语句中控制多条语句，就需要使用代码块
//		if (age >= 18 && age < 28)//不能这样写代码else if(18<=age<28)
//		//因为执行原则为先执行18<=age为假，则布尔值为0，则此时翻译为0<28为真则打印青年
//			printf("青年\n");
//		else if (age >= 28 && age < 60)
//			printf("壮年\n");
//		else
//			printf("老年\n");
//	}
//	return 0;
//}
 

//1.由;号隔开的叫一个语句
//int main()
//{//语句
//	int a = 0;
//	;//此处仍然是语句，只是是空语句
//	return 0;
//}