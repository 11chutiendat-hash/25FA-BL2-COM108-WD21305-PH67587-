// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>

void thongTinThuCung()
{
	char tenthucung[50];
	char mathucung[50];
	int namsinh;
	int year;
	int currentyear = 2025;

	printf("Nhap ten thu cung: ");
	scanf_s("%d", &tenthucung);
	fgets(tenthucung, sizeof(tenthucung), stdin);

	printf("Nhap ma thu cung: ");
	scanf_s("%d", &mathucung);
	//tinh
	printf("Nhap nam sinh thu cung: ");
	scanf_s("%d", &year);
	printf("%stuoi: %d\n", tenthucung, currentyear - year);


}

void tinhTong()
{
	//tinh
	int n, tong;
	printf("Nhap so nguyen n (n > 3): ");
	scanf_s("%d", &n);
	//tinh tong
	tong = n * (n + 1) / 2;
	printf("tong tu 1 den: %d = %d\n", n, tong);
	//kiem tra so chia het cho 5
	if (n % 5 == 0)
	{
		printf("%d Chia het cho 5\n", n);
	}
	else
	{
		printf("%d Khong chia het cho 5\n", n);
	}
}

void thongTinCuaHang()
{
	int soluong, cannang;
	printf("Nhap so luong thu cung: ");
	scanf_s("%d", &soluong);
	printf("Nhap can nang thu cung: ");
	scanf_s("%d", &cannang);

}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongTinThuCung();
			break;
		case 2:
			tinhTong();
			break;
		case 3:
			thongTinCuaHang();
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
		printf("1. thongTinThuCung");
		printf("\n");
		printf("2. tinhTong");
		printf("\n");
		printf("3. thongTinCuaHang");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [1-3]: ");
		scanf_s("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}
