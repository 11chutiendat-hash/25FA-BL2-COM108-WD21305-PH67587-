// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>


	void kiemTraSoNguyen()
	{
		printf("Kiem Tra So Nguyen");
		printf("\n");
	}

	void sapXepPhanTuMang()
	{
		int integerArray[100];
		int tmp;
		int length;
		printf("Nhap kich thuoc mang: ");
		scanf_s("%d", &length);
		printf("Nhap du lieu trong mang %d phan tu\n", length);
		for (int i = 0; i < length; i++)
		{
			printf("mang[%d] = ", i);
			scanf_s("%d", &integerArray[i]);
		}
		printf("Du lieu trong mang %d phan tu\n", length);
		for (int i = 0; i < length; i++)
		{
			if (integerArray[i] > integerArray[i + 1])
			{

				tmp = integerArray[i];
				integerArray[i] = integerArray[i + 1];
				integerArray[i + 1] = tmp;
			}
		}
		printf("Du lieu trong mang %d phan tu\n", length);
		for (int i = 0; i < length - 1; i++)
		{
			printf("Mang[%d] = %d\n ", i, integerArray[i]);
		}
	}

	void demoMangHaiChieu()
	{
		//string - string.h
		char mangkytu[10] = "DAT";
		//scanf_s( %c
		//printf( %c
		//gets(mangkytu);

		for (int i = 0; i < 3; i++)
		{
			scanf_s(" %c", &mangkytu[i]);
		}
		puts(mangkytu);

		int array[2][3];
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("mang[%d][%d] = ", i, j);
				scanf_s("%d", &array[i][j]);
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d, ", array[i][j]);
			}
			printf("\n");
		}
	}

	void demoString()
	{
		//char mangKyTu[10] = "DAT";
		//gets(mangKyTu)
		//while (getchar() != '\n'); 

		//printf("Nhap du lieu String: ");
		//fgets(mangKyTu, sizeof(mangKyTu), stdin);
		//loop + printf("%c\n"
		//printf("%s", mangKyTu);
		//printf("\n");

		//puts (mangKyTu)
		//printf("%d", strlen(mangKyTu) -1);
		//printf("\n");

		printf("%d", strcmp("B", "b"));
		printf("\n");

		char str[5] = "ABC";
		printf("%s", strrev(str));
		printf("\n");

		printf("%s", strlwr(str));
		printf("\n");

		printf("%d", strupr(str));
		printf("\n");

		if (strstr("ABC", "D") != NULL)
		{
			printf(strstr("ABC", "D"));
		}
		else
		{
			printf("NOT found");
			printf("\n");
		}

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
				sapXepPhanTuMang();
				break;
			case 3:
				demoMangHaiChieu();
				break;
			case 4:
				demoString();
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
			printf("1. Kiem Tra So Nguyen");
			printf("\n");
			printf("2. sapXepPhanTuMang");
			printf("\n");
			printf("3. demoMangHaiChieu");
			printf("\n");
			printf("4.  demoString");
			printf("\n");
			printf("0. Thoat");
			printf("\n");
			printf("Hay chon chuc nang [0-3]: ");
			scanf_s("%d", &chonChucNang);
			lapChucNang(chonChucNang);
		} while (chonChucNang != 0);
	}


	