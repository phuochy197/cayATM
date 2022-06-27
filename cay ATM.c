#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Menu(int ten,int mk);
int Ruttien(int str, int tongA);
int CK(int str,int HM, int tongA);
void main()
 {int ten,mk,luachon; 
	int str,HM,tongA;
	tongA=1000000;	
	HM=5000000;
	
		printf("\nMoi nhap ten:");
		scanf("%d",&ten);
		printf("\nNhap mk: ");
		scanf("%d",&mk);
	if(ten==123&&mk==456){
	 
		do	{
			printf("\nXin chao %d,\nSo du cua ban: %d\n",ten,tongA);
			Menu(ten,mk);
				printf("\nMoi lua chon 1-4: ");
				scanf("%d",&luachon);
			}
		while((luachon)<=0||(luachon>4));
			switch (luachon){
				case 1 :
					printf("\nCam on!\n Moi ban nhan the:");
					break;
				case 2:
					Ruttien(str,tongA);
					break;
				case 3:
					CK(str,HM,tongA);
					break;
				case 4:
					printf("So du cua ban la: %d", tongA);
					break;	
				}
		}
	else {
			printf("\nTen hoac mk khong dung.");
			printf("\nMoi ban nhap lai.");
		}
	}
		int Menu(int ten,int mk)
		
			{	printf("\n1. Thoat");
				printf("\n2. rut tien.");
				printf("\n3. chuyen khoan.");
				printf("\n4. kiem tra so du.");			
			}
		int Ruttien(int str, int tongA)
		{
			do{
				printf("\nSo tien rut la boi cua 50000,\nnho hon 3000000.");
				printf("\nNhap so tien muon rut:");
				scanf("%d",&str);
					if(str >tongA){
					printf("\nSo du khong du");
				}
					if(str>3000000){
					printf("\nVuot qua han muc.");
				}	
			}while((str>tongA)||(str>3000000)||(str%50000!=0));
			
					tongA=tongA - str;
					printf("\nBan da rut %d,so du %d",str,tongA);
					printf("\nBan nhan tien va the.\nHen gap lai");
			
			
		}
		int CK(int str,int HM, int tongA){
				int ID;
				printf("\n Nhap nguoi nhan: ");
				scanf("%d",&ID);
			do{
					printf("\nNhap so tien muon chuyen:");
					scanf("%d",&str);
				if(str>tongA){
					printf("\nSo du khong du");
	}	
				if(str>HM){
					printf("\nHan muc ngay nho hon %d",HM);
				}
			}		
			while((str>tongA)||(str>HM));
					tongA=tongA-str;
					printf("\nBan %d da CK : %d, \nSo du con lai: %d ",ID,str,tongA);
					printf("\nCam on!");
		
	}
	
	


	

