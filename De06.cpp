#include "stdio.h"
#include "conio.h"
#define MAX 100

int InMang(int a[], int n); //In danh sach mang
int TinhTrungBinh(int a[], int n); // Tinh trung binh cac phan tu trong mang
int Min(int a[], int n); // In ra gia tri nho nhat trong mang
int DemSoZero(int a[], int n); //Dem so 0 trong mang
int SapXepGiam(int a[], int n); // In mang theo thu tu giam dan

int main()
{
	int a[MAX]={1,0,5,7,9,6};
	int n = 5;
	//InMang(a,n);
	//TinhTrungBinh(a,n);
	//Min(a,n);
	//DemSoZero(a,n);
	//SapXepGiam(a,n);
	getch();
	return 0;
}
