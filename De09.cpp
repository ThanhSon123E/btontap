#include "stdio.h"
#include "conio.h"
#include "string.h"

int XuatChuoi(char s[]);
int MyDoDaiChuoi(char s[]); //Sinh vien tu tinh do dai
int DemKyTyB(char s[]); //Dem Ky Tu la Chu B Hoa
int HoaThanhThuong(char s[]);
int ThuongThanhHoa(char s[]);
int MyHoaThanhThuong(char s[]);
int MyThuongThanhHoa(char s[]);
int KiemTraDoiXung(char s[]);
int SoSanhDoDai(char s1[], char s2[]);

int main()
{
	char s[100] = "ABC112233cba";
	XuatChuoi(s);
	HoaThanhThuong(s);
	DoDaiChuoi(char s[]);
	MyDoDaiChuoi(char s[]);
	DemKhoangTrang(char s[]);
	HoaThanhThuong(char s[]);
	ThuongThanhHoa(char s[]);
	MyHoaThanhThuong(char s[]);
	MyThuongThanhHoa(char s[]);
	KiemTraDoiXung(char s[]);
	SoSanhDoDai(char s1[], char s2[]);
	getch();
	return 0;
}
