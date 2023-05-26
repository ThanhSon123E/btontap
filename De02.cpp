#include "stdio.h"
#include "conio.h"

typedef struct
{
	int t;
	int m;
} PHANSO;

int Xuat(PHANSO ps); //Viet ham in ra phan so da duoc rut gon. VD: 2/4->1/2
int RutGon(PHANSO &ps); //Sau khi goi ham. Phan so duoc rut gon. 
int Chia2PHANSO(PHANSO p1, PHANSO p2);
int Nhan2PHANSO(PHANSO p1, PHANSO p2);
int SoSanh2PHANSO(PHANSO p1, PHANSO p2); //In ra phan so lon hon

int USCLN(int a, int b);


int main()
{
	PHANSO ps1, ps2;
	ps1.t = 2;
	ps1.m = 4;
	ps2.t = 3;
	ps2.m = 18;
	//Xuta(ps1);
	//RutGon(ps1);
	//Nhan2PHANSO(ps1, ps2);
	//Chia2PHANSO(ps1, ps2);
	//SoSanh2PHANSO(ps1, ps2);
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
