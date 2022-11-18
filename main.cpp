#include <conio.h>           
#include <iostream>
#include <windows.h>       
#include <iomanip>
#include <stdio.h>         
#include <stdlib.h>  

void chgcolor(unsigned short color)		
   {
	HANDLE sCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(sCon,color);
   }


//Script text animasi
void delay(int I)
{
  for(int x=0;x<I*100;x++)
  {
   for(int y=0;y<I*100;y++)
   {
     }
  }
}

void gotoxy(short x,short y){
    COORD pos{x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

//script text animasi berjalan ke kanan
void kanan()
{
  for(int n=1;n<30;n++)
  {
   gotoxy(n,2);
   delay(200);
   std::cout <<" Institut Teknologi Budi Utomo";
  }
}

using namespace std;
main()

{
   char Nama[20],TempatL[20],Kuliah[20],Kelas[10],Hobi[20];  //variable
   int i,j,n; //variabel

   mulai:
   system("cls");
int pil;
   std::cout<<"--------------------MENU----------------\n";
   std::cout<<"1. Biodata\n";
   std::cout<<"2. Deret                                                  \n";
   std::cout<<"3. Animasi Text Berjalan                         \n";
   std::cout<<"4. Exit                                 \n";
   std::cout<<"--------------------------------------------\n";
   std::cout<<"Masukkan Pilihan  anda [1 s/d 4] = ";cin>>pil;
   switch(pil){
case 1:
   //isi program pertama (Biodata);
   system("cls");		//membersihkan layar
   chgcolor(15);

	std::cout<<"=======ISI BIODATA========";
	std::cout<<"\n\n";
	chgcolor(15);
   	std::cout<<"";cin.getline(Nama,sizeof(20));
	std::cout<<"Nama Lengkap : ";cin.getline(Nama,20);
	std::cout<<"Tempat Lahir : ";cin.getline(TempatL,20);
	std::cout<<"Kuliah       : ";cin.getline(Kuliah,20);
	std::cout<<"Kelas        : ";cin.getline(Kelas,10);
	std::cout<<"Hobi         : ";cin.getline(Hobi,20);

std::cout<<endl;
	chgcolor(14);
	std::cout<<"==========OUTPUT==========";
	std::cout<<"\n\n";
	chgcolor(15);
	std::cout<<"Nama Lengkap : "<<Nama<<endl;
	std::cout<<"Tempat Lahir : "<<TempatL<<endl;
	std::cout<<"Kuliah       : "<<Kuliah<<endl;
	std::cout<<"Kelas        : "<<Kelas<<endl;
	std::cout<<"Hobi         : "<<Hobi<<endl;
	std::cout<<"\n\n";
	std::cout<<"Terima Kasih Telah mengisi biodata";

   getch();
   goto mulai;
 case 2:
   //isi program kedua (Deret);
   system("cls");	//membersihkan layar

   std::cout<<"========PROGRAM DERET==========";
	std::cout<<"\n\n";
   cout << "Masukkan nilai : ";
	cin >> n;
   std::cout<<"\n\n";
   chgcolor(14);
   std::cout<<"============OUTPUT=============";
   std::cout<<"\n\n";
   chgcolor(15);
	for (i=1;i<=n;i++) {                //proses deret segitiga
		for (j=1;j<=i;j++) {

      std::cout<<setw(5)<<j;
		}
		std::cout<<endl;
	}
   getch();
   goto mulai;

   case 3:
   system("cls");	//membersihkan layar
   //isi program pertama (Animasi Text Berjalan);
	kanan(); //memanggil script animasi

   std::cout<<"\n\n";
   system ("pause");
   goto mulai;
case 4:
   system("cls");        //membersihkan layar
   //isi program ke delapan (Exit);
   exit(0);

   system("cls");        //membersihkan layar
   default:std::cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Pilih yang Lain";

   }
   getch();
   return 0;
}
