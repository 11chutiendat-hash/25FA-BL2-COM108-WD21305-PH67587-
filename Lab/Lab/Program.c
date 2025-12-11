// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void thongTinGiaDinh()
{
	char name[20] = "Dat";
	printf("Nhap ten cua ban: \n");
	fgets(name, sizeof(name), stdin);
	printf("Ten cua ban la: \n", &name);

}


void soChiaHetCho5()
{
	float n;
}

thongTinSinhVienThiLapTrinh()
{

}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongTinGiaDinh();
			break;
		case 2:
			soChiaHetCho5();
			break;
		case 3:
			thongTinSinhVienThiLapTrinh();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. thongTinGiaDinh");
		printf("\n");
		printf("2. soChiaHetCho5");
		printf("\n");
		printf("3. thongTinSinhVienThiLapTrinh");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [1-10]: ");
		scanf_s("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}
