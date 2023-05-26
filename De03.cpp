#include "stdio.h"
#include "conio.h"

typedef struct
{
	int t;
	int m;
} PS;

int Xuat(PS ps); //Viet ham in ra phan so da duoc rut gon. VD: 2/4->1/2
int RutGon(PS &ps); //Sau khi goi ham. Phan so duoc rut gon. 
int Tru2PS(PS p1, PS p2);
int Nhan2PS(PS p1, PS p2);
int SoSanh2PS(PS p1, PS p2); //In ra phan so lon hon

int USCLN(int a, int b);


int main()
{
	PS ps1, ps2;
	ps1.t = 2;
	ps1.m = 4;
	ps2.t = 3;
	ps2.m = 18;
	//Xuat(ps1);
	//RutGon(ps1);
	//Nhan2PS(ps1, ps2);
	//2PS(ps1, ps2);
	//SoSanh2PS(ps1, ps2);
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
