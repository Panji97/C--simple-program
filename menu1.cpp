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
   char Nama[20],TempatL[20],Jenisk[20],Pendidikan[10],Hobi[20];  //variable
   int i,j,n; //variabel

   mulai:
   system("cls");
int pil;
   std::cout<<"--------------------MENU----------------\n";
   std::cout<<"1. Biodata\n";
   std::cout<<"2. Deret Angka                                                 \n";
   std::cout<<"3. Animasi Text Berjalan                         \n";
   std::cout<<"4. Tujuan wisata                                 \n";
   std::cout<<"5. Mencari Nilai terbesar                                 \n";
   std::cout<<"6. Daftar Nilai Mahasiswa                                 \n";
   std::cout<<"7. Menghitung Luas persegi panjang                                 \n";
   std::cout<<"8. Daftar Harga BBM                                  \n";
   std::cout<<"9. Exit                                 \n";
   std::cout<<"--------------------------------------------\n";
   std::cout<<"Masukkan Pilihan  anda [1 s/d 9] = ";cin>>pil;
   switch(pil){
case 1:
   //isi program pertama (Biodata);
   system("cls");		//membersihkan layar
   chgcolor(15);

	std::cout<<"=======ISI BIODATA========";
	std::cout<<"\n\n";
	chgcolor(15);
   	std::cout<<"";cin.getline(Nama,sizeof(20));
	std::cout<<"Nama Lengkap 		: ";cin.getline(Nama,20);
	std::cout<<"Tempat Lahir 		: ";cin.getline(TempatL,20);
	std::cout<<"Jenis kelamin       	: ";cin.getline(Jenisk,20);
	std::cout<<"Pendidikan        	: ";cin.getline(Pendidikan,10);
	std::cout<<"Hobi         		: ";cin.getline(Hobi,20);

std::cout<<endl;
	chgcolor(14);
	std::cout<<"==========OUTPUT==========";
	std::cout<<"\n\n";
	chgcolor(15);
	std::cout<<"Nama Lengkap 		: "<<Nama<<endl;
	std::cout<<"Tempat Lahir 		: "<<TempatL<<endl;
	std::cout<<"Jenis kelamin       	: "<<Jenisk<<endl;
	std::cout<<"Pendidikan        	: "<<Pendidikan<<endl;
	std::cout<<"Hobi         		: "<<Hobi<<endl;
	std::cout<<"\n\n";
	std::cout<<"Terima Kasih Telah mengisi biodata";

   getch();
   goto mulai;
 case 2:
   //isi program kedua (Deret Angka);
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
   //isi program ke tiga (Animasi Text Berjalan);
	kanan(); //memanggil script animasi

   std::cout<<"\n\n";
   system ("pause");
   goto mulai;
   
	case 4:
   	system("cls"); 	//membersihkan layar
   	 //isi program ke empat (Tujuan wisata);	
   	using namespace std;
{
	int pil;
	cout<<"Tujuan wisata : \n";
	cout<<"\n";
	cout <<"1.Bandung \n";
	cout <<"2.Yogyakarta \n";
	cout <<"3.Bali \n";
	cout <<"4.Lombok \n";
	cout<<"\n";
	cout<<"Masukan nomer Tujuan wisata : ";
	cin>>pil;
	cout<<"\n";
	if (pil == 1){
		cout<<"Tujuan wisata anda adalah Bandung"<<endl;
	}
	else if (pil == 2){
		cout<<"Tujuan wisata anda adalah Yogyakarta"<<endl;
	}
	else if (pil == 3){
		cout<<"Tujuan wisata anda adalah Bali"<<endl;
	}
	else if (pil == 4){
		cout<<"Tujuan wisata anda adalah Lombok"<<endl;
	}
	getch();
    goto mulai;
}

case 5:
	system("cls");        //membersihkan layar
   //isi program ke lima (Mencari nilai terbesar);
using namespace std;
//Deklaration variabel bilangan 1 dan 2  
int terbesar, bil1, bil2; 

//program utama 

{
    cout << "\tProgram mencari nilai Terbesar\n"<<endl;
    cout << "Masukan bilangan ke-1 : ";
    cin >> bil1;
    cout << "Masukan bilangan ke-2 : ";
    cin >> bil2;
    
    
    //program mencari nilai terbesar 
    terbesar = bil1;
    
    if (bil2 > terbesar){
      terbesar = bil2;
    }
    
    //tampilan uotput
    cout << "Bilangan dengan nilai terbesar adalah : "<<terbesar<<endl;
    getch();
    goto mulai;
}	
 
case 6:
   system("cls");        //membersihkan layar
   //isi program ke Enam (Daftar Nilai Mahasiswa);
   using namespace std;

{
	string nama;
	int tugas;
	int uts;
	int uas;
	
	cout<<"DAFTAR NILAI MAHASISWA ITBU"<<endl;
	cout<<endl;
	cout<<"Masukan Nama 		: ";
	cin>>nama;
	cout<<"Masukan Nilai Tugas 	: ";
	cin>>tugas;
	cout<<"Masukan Nilai UTS 	: ";
	cin>>uts;
	cout<<"Masukan Nilai UAS 	: ";
	cin>>uas;
	
	int ntugas=0.20*tugas;
	int nuts=0.30*uts;
	int nuas=0.50*uas;
	
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Nama	Nilai Tugas     Nilai UTS       Nilai UAS"<<endl; 
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<nama<<"   "<<tugas<<" x 20% = "<<ntugas<<"     "<<uts<<" x 30% = "<<nuts<<"   "<<uas<<" x 50% = "<<nuas<<" "<<endl;
	cout<<endl;
	cout<<endl;
	
	int total = ntugas+nuts+nuas;
	
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Total Nilai yang di Dapatkan = "<<total<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	getch();
	goto mulai;
}
 
case 7:
   system("cls");        //membersihkan layar
   //isi program ke Tujuh (Menghitung luas persegi panjang);

{

    int p, l;

    cout<<"========================================";

    cout<<"Program Menghitung luas persegi panjang";

    cout<<"========================================";
    cout<<"\n";

    cout<<"masukkan nilai panjang = ";

    cin>>p;

    cout<<"masukkan nilai lebar = ";

    cin>>l;
	cout<<"\n";
    cout<<"luas persegi panjang = "; cout<<(p*l);

    getch();
    goto mulai;
}
            
 case 8:
   system("cls");        //membersihkan layar
   //isi program ke Delapan (Daftar harga BBM);
   {

        int solar[50], premium[50], pertamax[50];
        int n, hsolar, hpremium, hpertamax;

        cout<<"Masukan Harga solar = ";
        cin>>hsolar;
        cout<<"Masukan Harga Premium = ";
        cin>>hpremium;
        cout<<"Masukan Harga Pertamax = ";
        cin>>hpertamax;
        cout<<endl;
        cout<<"Masukan Jumlah liter = ";
        cin>>n;

        cout<<endl;
        cout<<"-------------------------DAFTAR HARGA---------------------"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"lITER          SOLAR          PREMIUM            PERTAMAX"<<endl;
        cout<<"----------------------------------------------------------"<<endl;

        for (int i=1;i<=n;i++) {
                solar[i]=i*hsolar;
                premium[i] =i*hpremium;
                pertamax[i]=i*hpertamax;
                cout<<i<<"               "<<solar[i]<<"           	"<<premium[i]<<"          	  "<<pertamax[i]<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;
        getch();
        goto mulai;
}
   	
case 9:
   system("cls");        //membersihkan layar
   //isi program ke Sembilan (Exit);
   exit(0);

   system("cls");        //membersihkan layar
   default:std::cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Pilih yang Lain";

   }
   getch();
   return 0;
}
