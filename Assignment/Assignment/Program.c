// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>


void kiemTraSoNguyen()
{

	
		int x;
		printf("Nhap x: ");
		scanf_s("%d", &x);
		printf("%d la so nguyen.\n", x);
		// Kiem tra so nguyen to
		int nguyento = 1, i = 2;
		if (x < 2) nguyento = 0;
		while (i * i <= x && nguyento) 
		{
			if (x % i == 0) nguyento = 0;
			i++;
		}
		printf("%d %s la so nguyen to.\n", x, nguyento ? "" : "KHONG");
		// Kiem tra so chinh phuong
		int chinhphuong = 0;
		for (i = 0; i * i <= x; i++) 
		{
			if (i * i == x) chinhphuong = 1;
		}
		printf("%d %s la so chinh phuong.\n", x, chinhphuong ? "" : "KHONG");
	
}

void timUocSoChungVaBoiChungCua2So()
{
	int x, y;
	printf("Nhap hai so nguyen x va y: ");
	scanf_s("%d %d", &x, &y);
	//Tim ucln)
	int ucln;
	int min = (x < y) ? x : y;
	for (int i = min; i >= 1; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			ucln = i;
			break;
		}
	}
	//Tim bcnn
	int bcnn = (x * y) / ucln;

	printf("Uoc so chung lon nhat (UCLN) cua %d va %d la: %d\n", x, y, ucln);
	printf("Boi so chung nho nhat (BCNN) cua %d va %d la: %d\n", x, y, bcnn);

	return 0;

}

void tinhTienKaraoke()
{
	
		int gioBatDau, gioKetThuc;
		float tien = 0;
		printf("Nhap gio bat dau: ");
		scanf_s("%d", &gioBatDau);
		printf("Nhap gio ket thuc: ");
		scanf_s("%d", &gioKetThuc);
		// kiem tra 
		if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc) 
		{
			printf("Gio khong hop le!");
			printf("\n");
			
		}
		int soGio = gioKetThuc - gioBatDau;
		//tinh tien 
		if (soGio <= 3) 
		{
			tien = soGio * 150000;
		}
		else 
		{
			tien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
		}

		//in ra 
		if (gioBatDau >= 14 && gioBatDau <= 17) 
		{
			tien = tien * 0.9;
		}

		printf("Tien can thanh toan: %.0f VND\n", tien);


	
}

void tinhTienDien()
{

}

void chucNangDoiTien()
{
	//nhap so tien
	int tien;
	int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int soTo;
	//nhap so tien cam doi
	printf("Nhap so tien can doi: ");
	scanf_s("%d", &tien);
	//cac menh gia sau khi doi
	printf("Cac menh gia sau khi doi:\n");
	//ket qua
	for (int i = 0; i < 9; i++)
	{
		if (tien >= menhGia[i])
		{
			soTo = tien / menhGia[i];
			tien %= menhGia[i];
			printf("%d to %d", soTo, menhGia[i]);
			printf("\n");
		}
	}
	

}

void tinhLaiXuatVayNganHangTraGop()
{

}

void vayTienMuaXe()
{
	    //nhap cac ki tu
		float phantramvay;
		float sotien = 500000000;       
		float laiXuatNam = 0.072;       
		float laixuatthang = laiXuatNam / 12;  
		int thang = 24 * 12;             
		//vay
		printf("Nhap phan tram vay (vd: 80): ");
		scanf_s("%f", &phantramvay);
		//ti le
		float tilevay = phantramvay / 100.0;         
		float sotienphaitratruoc = sotien * (1 - tilevay); 
		float sotienthucte = sotien * tilevay;     
		//tinh toan
		float M = sotienthucte * (laixuatthang * pow(1 + laixuatthang, thang))
			/ (pow(1 + laixuatthang, thang) - 1);
		//ket qua
		printf("Tien tra truoc (lan dau): %.0f VND", sotienphaitratruoc);
		printf("\n");
		printf("Tien phai tra hang thang: %.0f VND", M);
		printf("\n");

		
}

void sapXepThongTinSinhVien()
{
	float diem;
	//nhap diem
	do
	{
		printf("Nhap diem sinh vien (0-10): ");
		scanf_s("%f", &diem);

		if (diem < 0 || diem > 10)
		{
			printf("Diem khong hop le! Vui long nhap lai.");
			printf("\n");
		}
	} while (diem < 0 || diem > 10);
	//xep loai hoc luc 
	{
		if (diem >= 9)
		{
			printf("Hoc luc: Xuat sac");
			printf("\n");
		}
		else if (diem >= 8)
		{
			printf("Hoc luc: Gioi");
			printf("\n");
		}
		else if (diem >= 6.5)
		{
			printf("Hoc luc: Kha");
			printf("\n");
		}
		else if (diem >= 5)
		{
			printf("Hoc luc: Trung binh");
			printf("\n");
		}
		else if (diem < 5)
		{
			printf("Hoc luc: Yeu");
			printf("\n");
		}
		else
		{
			printf("Hoc luc: Kem");
			printf("\n");
		}

		return 0;

	}
}

void xayDungGameFPOLY()
{ 
	    //nhap du lieu
	    int a, b, x, y;
		int dem = 0;
		printf("Nhap so thu nhat tu 1 den 15: ");
		scanf("%d", &a);
		printf("Nhap so thu hai tu 1 den 15: ");
		scanf("%d", &b);
		//tinh toan
		x = random() % 15 + 1;
		y = random() % 15 + 1;
		printf("\nSo may man: %d - %d\n", x, y);
		if (a == x || a == y) dem++;
		if (b == x || b == y) dem++;
		//in ra
		if (dem == 0)
			printf("Chuc ban may man lan sau\n");
		else if (dem == 1)
			printf("Chuc mung ban trung giai NHI\n");
		else
			printf("Chuc mung ban trung giai NHAT\n");


	
}

	void lapChucNang(int chonChucNang)
	{
		int tiepTuc = 1;
		while (tiepTuc == 1)
		{
			switch (chonChucNang)
			{
			case 1:
				kiemTraSoNguyen();
				break;
			case 2:
				timUocSoChungVaBoiChungCua2So();
				break;
			case 3:
				tinhTienKaraoke();
				break;
			case 4:
				tinhTienDien();
				break;
			case 5:
				chucNangDoiTien();
				break;
			case 6:
				tinhLaiXuatVayNganHangTraGop();
				break;
			case 7:
				vayTienMuaXe();
				break;
			case 8:
				sapXepThongTinSinhVien();
				break;
			case 9:
				xayDungGameFPOLY();
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
			printf("1. kiemTraSoNguyen");
			printf("\n");
			printf("2.  timUocSoChungVaBoiChungCua2So");
			printf("\n");
			printf("3. tinhTienKaraoke");
			printf("\n");
			printf("4. tinhTienDien");
			printf("\n");
			printf("5. chucNangDoiTien");
			printf("\n");
			printf("6. tinhLaiXuatVayNganHangTraGop");
			printf("\n");
			printf("7. vayTienMuaXe");
			printf("\n");
			printf("8. sapXepThongTinSinhVien");
			printf("\n");
			printf("9. xayDungGameFPOLY");
			printf("\n");
			printf("0. Thoat");
			printf("\n");
			printf("Hay chon chuc nang [1-10]: ");
			scanf_s("%d", &chonChucNang);
			lapChucNang(chonChucNang);
		} while (chonChucNang != 0);
	}


