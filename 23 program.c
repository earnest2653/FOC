#include<stdio.h>
int binaryproduct(int,int);
int main()
{
	long binary1,binary2,multiply=0;
	int digit,factor=1;
	printf("enter the first binary number:");
	scanf("%ld",&binary1);
	printf("enter the second binary number:");
	scanf("%ld",&binary2);
	while (binary2 !=0)
	{
		digit = binary2 % 10;
		if (digit == 1)
		{
			binary1=binary1*factor;
			multiply=binaryproduct(binary1,multiply);
		}
		else
			binary1=binary1*factor;
		binary2=binary2/10;
		factor=10;
	}
	printf("product of two binary number:%ld",multiply);
	return 0;
}
	int binaryproduct(int binary1,int binary2)
	{
		int i=0,reminder=0,sum[20];
		int binaryprod=0;
		while(binary1 !=0|| binary2 !=0)
		{
			sum[i++]=(binary1%10+binary2%10+reminder)%2;
			reminder=(binary1 %10+binary2%10+reminder)/2;
			binary1=binary1/10;
			binary2=binary2/10;
		}
		if(reminder !=0)
			sum[i++]=reminder;
		--i;
		while(i>=0)
			binaryprod=binaryprod*10+sum[i--];
			return binaryprod;
	}
}