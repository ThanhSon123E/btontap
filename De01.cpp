#include "stdio.h"
#include "conio.h"

typedef struct
{
	int t;
	int m;
} PhanSo;

int Xuat(PhanSo ps); //Viet ham in ra phan so da duoc rut gon. VD: 2/4->1/2
int RutGon(PhanSo &ps); //Sau khi goi ham. Phan so duoc rut gon. 
int Cong2PhanSo(PhanSo p1, PhanSo p2);
int Nhan2PhanSo(PhanSo p1, PhanSo p2);
int SoSanh2PhanSo(PhanSo p1, PhanSo p2); //In ra phan so lon hon

int USCLN(int a, int b);


int main()
{
	PhanSo ps1, ps2;
	ps1.t = 2;
	ps1.m = 4;
	ps2.t = 3;
	ps2.m = 18;
	//Xuat(ps1)
	//RutGon(ps1)
	//Nhan2PhanSo(ps1, ps2);
	//Cong2PhanSo(ps1, ps2);
	//SoSanh2PhanSo(ps1, ps2);
}


int USCLN(int a, int b)
{
	int r;
	while(b != 0)
 	{
 		r = a  % b;
 		a = b;
 		b = r;
	}
 	return a;
}
