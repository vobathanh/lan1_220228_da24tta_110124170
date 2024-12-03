/*Mssv: 110124170
  Ho va ten: Vo Ba Thanh
 Lop:DA24TTA*/

 
#include "stdio.h"
void nhapthoigian(float a[],int n);
void xuatthoigian(float a[],int n);		
float tinhtongsogiohoc(float a[],int n);
float trungbinhsogiohoc(float a[],int n);
int main()
{
	int n;
	float a[n];
	printf("nhap so thu (< = 7): ");
	do
	{
		scanf("%d",&n);
	}while(n<0||n>7);
	nhapthoigian(a,n);
	xuatthoigian(a,n);
	printf("Tong gio = %.2f ",tinhtongsogiohoc(a,n));
	return 0;
}
void nhapthoigian(float a[],int n)
{
	
	for(int i=1;i<n;i++)
	{
		printf("nhap thu %d: ",i+1);
		scanf("%f",&a[i]);
	}
}
void xuatthoigian(float a[],int n)
{
	int i=0;
	for(int i=1;i<=n;i++)
	{
		printf("\nthu %d, %2.f gio",i+1,a[i]);
		scanf("%f" ,&a[i]);
	}
	printf("\n");
}
float tinhtongsogiohoc(float a[],int n)
{
	
	float Tong=0;
	for(int i=1;i<=n;i++)
	{
		Tong+=a[i];
	
	}
	return Tong;
}
float trungbinhsogiohoc(float a[],int n)
{
	float Tong=0;
	float Dem=0;
	for(int i=1;i<=n;i++)
	{
		Tong+=a[i];
		Dem++;
	}
	return Tong/Dem;
}

