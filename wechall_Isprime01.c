#include<stdio.h>
#include<math.h>
/*Ѱ��ǰ������100������������Ҫ�����������λ�ϵ���֮��ҲΪ����*/

/*���������ж�����*/ 
int Isprime(m)
{
	int div;
	int flag = 1;
	if(m == 1) flag = 0;
	for(div = 2;div<=sqrt(m);div++)
	{
		if(m%div == 0){
			flag = 0;
			break; 
		}
	}
	return flag;
 } 
 /*���������������λ����֮��*/
 int Sum(m)
 {
 	int f = m;
 	int sum = 0;
 	while(f>0){
 	sum+=(f%10);
 	f/=10;	
	}
 	return sum;
  } 
 /*������*/ 
int main(void)
{
	int x;//��ǰ�� 
	int n;//�ҵ�����������
	n = 1,x = 1000000;
	while(n<=2){
		if(Isprime(x)&&Isprime(Sum(x)))
		{
			printf("%d",x);
			n++;
		}
		x++;
	} 
 } 
