#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char*str)//��������Ϊvoid?
{
	assert(str);
	int len=strlen(str);//strlen�Ǻ���,ͷ�ļ�string
	char* left= str;//ʹ��ָ���ȡright������Ԫ�ص�ַI
	char* right= str + len - 1;//����ֱ�Ӽ�strlen
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
	//scanf("%s", arr);//����--I am a student
	gets(arr);//��ȡ�ַ���һ��
	reverse(arr);
	printf("%s\n",arr);//���--tneduts a ma I
	return 0;
}


int main()
{
	int a = 0;
	int n = 0;	
	scanf("%d%d",&a,&n);//¼������ֵ
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
	printf("%d\n",sum);//��ӡ��
	return 0;
}
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{

		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
		//����i��λ��
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
	   //����i��ÿһλn��֮��sum
		//123%10=3;123/10=12
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, n);//ƽ���⺯��������ͷ�ļ�math.h
			temp /= 10;
		}
	  //�ж�i==sum
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
	//�ȴ�ӡ�ϰ벿��
	int i = 0;
	//��ӡ�ϰ벿��,ȷ������
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		for (int j = 0; j < line - 1 - i; j++)//j=0,����6��
		{
			printf(" ");
		}
		//��ӡ*
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
		//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
			//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)//i=0,����һ��
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