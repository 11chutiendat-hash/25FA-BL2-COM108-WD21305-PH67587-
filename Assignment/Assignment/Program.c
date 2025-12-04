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
	//khai bao
	float tienVay;
	const float laiThang = 0.05; 
	const int soThang = 12;
	//nguoi dung nhap
	printf("Nhap so tien muon vay: ");
	scanf_s("%f", &tienVay);
	//tong lai, tien vay
	float tongLai = tienVay * laiThang * soThang;
	float tongPhaiTra = tienVay + tongLai;
	float traMoiThang = tongPhaiTra / soThang;
	//in ket qua
	printf("Tong tien lai: %.0f VND\n", tongLai);
	printf("Tong phai tra: %.0f VND\n", tongPhaiTra);
	printf("So tien phai tra hang thang: %.0f VND\n", traMoiThang);

}

void vayTienMuaXe()
{
	//khai bao
	float phanTram, giaXe = 500000000, laiThang = 0.072 / 12;
	int soThang = 24 * 12;
	//nguoi dung nhap
	printf("Nhap phan tram vay: ");
	scanf_s("%f", &phanTram);
	//tinh toan
	float soTienVay = giaXe * phanTram / 100;
	float traTruoc = giaXe - soTienVay;
	float luyThua = 1;
	for (int i = 0; i < soThang; i++)
		luyThua *= (1 + laiThang);
	float traHangThang = soTienVay * laiThang * luyThua / (luyThua - 1);
	//in ket qua
	printf("Tien tra truoc: %.0f VND\n", traTruoc);
	printf("Tien tra hang thang: %.0f VND\n", traHangThang);
		
}

void sapXepThongTinSinhVien()
{
	//thong tin sinh vien: ho ten
	char name[50] = "DAT";
	while (getchar() != '\n');
	printf("Nhap ten cua ban : ");
	fgets(name, sizeof(name), stdin);
	printf("%s", name);
	float diem;
	printf("\n");
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


	}
	
}

void xayDungGameFPOLY()
{ 
	    


	
}

void tinhToanPhanSo()
{
    //khai bao
	int a, b, c, d;
	//moi nguoi dung nhap vao 
	printf(" Moi nhap so thu nhat (tu mau): ");
	scanf_s("%d %d", &a, &b);
	printf(" Moi nhap so thu hai (tu mau): ");
	scanf_s("%d %d", &c, &d);
	//tinh toan
	printf("\nTong   = %d/%d", a * d + b * c, b * d);
	printf("\nHieu   = %d/%d", a * d - b * c, b * d);
	printf("\nTich   = %d/%d", a * c, b * d);
	printf("\nThuong = %d/%d", a * d, b * c);
	


	
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
			case 10:
				tinhToanPhanSo();
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
			printf("10. tinhToanPhanSo");
			printf("\n");
			printf("0. Thoat");
			printf("\n");
			printf("Hay chon chuc nang [1-10]: ");
			scanf_s("%d", &chonChucNang);
			lapChucNang(chonChucNang);
		} while (chonChucNang != 0);
	}


