#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char*str)//返回类型为void?
{
	assert(str);
	int len=strlen(str);//strlen是函数,头文件string
	char* left= str;//使用指针获取right，及首元素地址I
	char* right= str + len - 1;//不能直接加strlen
	while (left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++; 
		right--;
	}
	
}
int main()
{
	char arr[100] = {0};
	//scanf("%s", arr);//输入--I am a student
	gets(arr);//获取字符串一行
	reverse(arr);
	printf("%s\n",arr);//输出--tneduts a ma I
	return 0;
}


int main()
{
	int a = 0;
	int n = 0;	
	scanf("%d%d",&a,&n);//录入两个值
	int sum = 0;
	int i = 0;
	int ret = 0;
	//2 22 222 2222 22222
	//a a*10+a
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;//
		sum += ret;	
	}
	printf("%d\n",sum);//打印和
	return 0;
}
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{

		//判断i是否为水仙花数（自幂数）
		//计算i的位数
		int n = 0;
		//123
		int temp = i;
		int sum = 0;
		while (temp)
		{
			n++;
			temp /= 10;
			//i /= 10;
		}
	   //计算i的每一位n次之和sum
		//123%10=3;123/10=12
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, n);//平方库函数，引入头文件math.h
			temp /= 10;
		}
	  //判断i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}



//      * 
//     ***
//    ***** 
//   *******
//  *********
// ***********
//*************
//
//


int main()
{
	int line = 0;
	scanf("%d", &line);
	//先打印上半部分
	int i = 0;
	//打印上半部分,确定行数
	for (i = 0; i < line; i++)
	{
		//打印空格
		for (int j = 0; j < line - 1 - i; j++)//j=0,进来6次
		{
			printf(" ");
		}
		//打印*
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
		//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
			//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)//i=0,进来一次
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//11 9 7 6 5 3 1
		{
			printf("*");
		}
			printf("\n");
	}
	return 0;
}