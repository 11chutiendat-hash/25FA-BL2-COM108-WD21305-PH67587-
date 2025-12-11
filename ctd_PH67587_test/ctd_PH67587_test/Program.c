// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void thongTinThuCung()
{
	char tenthucung[50];
	char mathucung[30];
	int namsinh;
	int year;
	int currentYear = 2025;
	while (getchar() != '\n');
	fgets(tenthucung, sizeof(tenthucung), stdin);
	while (getchar() != '\n');
	//tinh nam sinh
	printf("Nhap nam sinh thu cung: ");
	scanf_s("%d", &year);
	//in ket qua
	printf("%sTuoi: %d\n", tenthucung, currentYear - year);

}

void tinhTong()
{
	//nhap n
	int n, tong;
	printf("Nhap so nguyen n(n > 3): ");
	scanf_s("%d", &n);
	//tinh tong
	tong = n * (n + 1) / 2;
	printf("tong tu 1 den :%d = %d\n", n, tong);
	if (n % 5 == 0)
	{
		printf("%d chia het cho 5\n", n);
	}
	else {
		printf("%d khong chia het cho 5\n", n);
	}

}


void thongTinCuaHang()
{
	int n;
	printf("Nhap so luong thu cung: ");
	scanf_s("%d", &n);

	float w, sum = 0, min;
	for (int i = 0; i < n; i++) {
		printf("Can nang %d: ", i + 1);
		scanf_s("%f", &w);
		sum += w;
		if (i == 0 || w < min) min = w;
	}

	printf("TB: %.2f kg\nThap nhat: %.2f kg\n", sum / n, min);

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


