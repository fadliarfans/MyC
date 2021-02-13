#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct{
	char nm_brg[50];
    int stok[30], harju[30];
}dalam_data[100];
char nama[30],t;
int i,n;
char huruf[]="B";
char dipilih;
int no=000;
void menu_utama();
void data_barang();
void transaksi();
void keluar_aplikasi();
void laporan();

int main()
{
    system("color 1F");
    char password[10];
    printf("\nMasukan Nama      :");scanf("%s", &nama);
    printf("Masukan Password  :");scanf("%s", &password);
    if(strcmp(password,"tokokulaku")==0){
       system("cls");
       menu_utama();
    }else{
        system("cls");
        printf("Password salah !!!");
        sleep(3);
        system("cls");
        main();
    }
    return 0;
}
void menu_utama(){
        int pilih;
        printf("\nSelamat datang %s, Silahkan Pilih Menu dibawah ini:\n", nama);
        dashbar();
        printf("\tMenu Utama\n");
        dashbar();
        printf("1. Data Barang\n");
        printf("2. Transaksi\n");
        printf("3. Laporan\n");
        printf("4. Keluar Aplikasi\n");
        dashbar();
        printf("Pilihan Anda[1..4]:");scanf("%d",&pilih);
        dashbar();
        switch(pilih){
        case 1:
            system("cls");
            data_barang();
            break;
        case 2:
            transaksi();
            break;
        case 3:
        	laporan();
            system("cls");
            break;
        case 4:
            keluar_aplikasi();
            break;
        default :
            system("cls");
        menu_utama();
        break;
        }
}
void data_barang(){
    void tambah_barang(){
            printf("Masukkan Banyak Data	: "); scanf("%d", &n);
            FILE * f;
            f=fopen("Data_Barang.DAT","w");
            fprintf(f,"|-------------------------------------------|\n");
            fprintf(f,"| %-1s| %-1s| %-1s| %-1s|\n","Kode","Nama Barang","Jumlah Stok","Harga Jual");
            fprintf(f,"|-------------------------------------------|\n");
        for (i=0;i<n;i++){
        ulang :
            printf("Masukkan data ke-%d \n", 1+i);
            printf("Masukkan Kode Barang  	: %s%03d\n",huruf,no+i+1);
            //fprintf(f,"%s%03d\n",huruf,no+i+1);
            printf("Masukkan Nama Barang  	: "); scanf (" %[^\n]",&dalam_data[i].nm_brg);
            //fprintf(f,"%s\n",nm_brg[i]);
            printf("Masukkan Jumlah Stok 	: "); scanf("%s",&dalam_data[i].stok);
            //fprintf(f,"%s\n",jumto[i]);
            printf("Masukkan Harga Jual 	: "); scanf (" %[^\n]",&dalam_data[i].harju);
            //fprintf(f,"%s\n",jumto[i]);
        fprintf(f,"| %-1s%03d| %-11s| %-11s| %-10s|\n", huruf,no+i+1, dalam_data[i].nm_brg, dalam_data[i].stok, dalam_data[i].harju);
        fprintf(f,"|-------------------------------------------|\n");
            printf("\n");
            printf("Apakah data sudah benar [Y/T] \n");
            scanf(" %c",&t);
            printf("\n");
        if (t=='T'|| t=='t')
        goto ulang;
        }
            printf("Data selesai dimasukan, tekan ENTER untuk kembali ke menu data barang\n");
            system("pause"">null");
        fclose(f);
        system("cls");
        data_barang();
    }
    void lihat_barang(){
        char data[50];
        //FILE *fp;
        //fp=fopen("Data_Barang.DAT", "r");
        char ini_file[]="Data_Barang.DAT";
        FILE *fp = fopen(ini_file,"r");
        if(fp==NULL){
            printf("\nFile tidak ada");
            getch();
            return;
        }
        while(fgets(data,50,fp)!=NULL)
        {
                printf("%s", data);
        }
        fclose(fp);
        printf("Data selesai dimasukan, tekan ENTER untuk kembali ke menu data barang\n");
        system("pause"">null");
        printf("\n");
        system("cls");
        data_barang();
    }
    void cetak_barang(char nama_barang[]){
        char line[50];
        char ini_file[]="Data_Barang.DAT";
        FILE *fp = fopen(ini_file,"r");
        int found=0;
        if(fp==NULL){
            printf("\nFile tidak ada");
            getch();
            return;
        }
            while(!feof(fp)){
                while(fgets(line, 50, fp)){
                    if(strstr(line, strupr(nama_barang))!=NULL){
                        system("cls");
                        printf("|-------------------------------------------|\n");
                        printf("| %-1s| %-1s| %-1s| %-1s|\n","Kode","Nama Barang","Jumlah Stok","Harga Jual");
                        printf("|-------------------------------------------|\n");
                        printf("%s", line);
                        printf("|-------------------------------------------|\n");
                        found=1;
                }
            }
        }
        if(found==0)
            printf("\nData tidak ditemukan");
        fclose(fp);
        printf("\nPencarian selesai, ingin mencari lagi[Y/N]:");scanf("%s",&dipilih);
        if(dipilih=='Y' || dipilih=='y'){
            system("cls");
            char w[30];
            printf("Masukan Kode Barang:");scanf("%s", &w);
            cetak_barang(w);
        }else{
            system("cls");
            data_barang();
        }
    }
    void cari_barang(){
        char w[30];
        printf("Masukan Kode Barang:");scanf("%s", &w);
        cetak_barang(w);
      }
    int pilih;
    dashbar();
    printf("\tMENU DATA BARANG\n");
    dashbar();
    printf("1. Tambah Barang\n");
    printf("2. Lihat Barang\n");
    printf("3. Cari Barang\n");
    printf("4. Kembali Ke Menu Utama\n");
    dashbar();
    printf("Pilihan Anda[1..4]:");scanf("%d",&pilih);
    dashbar();
    switch(pilih){
        case 1:
            tambah_barang();
            break;
        case 2:
            lihat_barang();
            break;
        case 3:
            cari_barang();
            break;
        case 4:
            system("cls");
            menu_utama();
            break;
        default :
            system("cls");
        menu_utama();
        break;
        }

}
void transaksi(){
     int i, brng, pmbyr, kmbl, k2, hrg[100], jmlh[100], tsh=0, ttlhrg[100],tshd,jmlhtotal;
       char nama[100][30], p[5], kode[100],t;

       
      printf("Masukan banyak data: ");
      scanf("%i",&brng);
      for(i=1; i<=brng; i++)
     {
     	ulang:
        printf("\nMasukan data %i\n",i);
        printf("Masukan kode barang : ",i);
        scanf("%s", &kode[i]);
        printf("Masukan Nama Barang : ");
        scanf("%s", &nama[i]);
        printf("Masukan Jumlah Stok : ");
        scanf("%i", &jmlh[i]);
        printf("Masukkan harga      : Rp.");
        scanf("%i",&hrg[i]);
        printf("\n");
        printf("Apakah data sudah benar [Y/T] : ");
        scanf("%c",&t);
        scanf("%c",&t);
        if(t == 'T' || t =='t')
        goto ulang;
        printf("\n");
		
     }
     jmlhtotal =0;
     for(i=1; i<=brng; i++)
     {
     	jmlhtotal += jmlh[i];
        ttlhrg[i]=jmlh[i]*hrg[i];
        tsh=tsh+ttlhrg[i];
     }
      printf("\t\t\t Total harga keseluruhan\t: Rp. %i\n", tsh);
      printf("\t\t\t Masukkan jumlah pembayaran\t: Rp. ");
      scanf("%i", &pmbyr);
      kmbl=pmbyr-tsh;
      
      printf("\t\t\t Daftar belanja anda:\n");
     for(i=1; i<=brng; i++)
     {
       printf("\t\t\t%i. %i buah %s (@ Rp. %i)\t: Rp. %i\n", i, jmlh[i], nama[i], hrg[i], ttlhrg[i]);
     }
     if(pmbyr>=tsh)
     {
        printf("\t\t\t\tTotal harga\t\t: Rp. %i\n", tsh);
        printf("\t\t\t\tPembayaran\t\t: Rp. %i\n", pmbyr);
        printf("\t\t\t\tKembalian\t\t: Rp. %i\n", kmbl);
        printf ("\t\t\t|=================================|\n");
     printf ("\t\t\t|          Terimakasih            |\n");
     printf ("\t\t\t|       Telah berbelanja          |\n");
     printf ("\t\t\t|            Di Toko              |\n");
     printf ("\t\t\t|             BAHAGIA             |\n");
   
     }
     else
     {
        k2=-1*kmbl;
        printf("\t\t\tTotal harga\t: Rp. %i\n", tsh);
        printf("\t\t\tPembayaran\t: Rp. %i\n", pmbyr);
        printf("\t\t\tKekurangan\t: Rp. %i\n", k2);
     }
      printf("\t\t\t===================================\n");
      FILE *f;
       f=fopen("Data_Transaksi.DAT","a");
       
        time_t currentTime;
	  	time(&currentTime);
	  	struct tm *myTime = localtime(&currentTime);
		
		fseek (f, 0, SEEK_END);
    	int size = ftell(f);

   		if (size == 0) {
       		fprintf(f,"|----------------------------------------------|\n");
			fprintf(f,"| Tanggal      |   Jumlah Item   | Jumlah bayar|\n");
 			fprintf(f,"|----------------------------------------------|\n");
    	}
 		fprintf(f,"| %-2d/%-2d/%-2d   |       %-10d|    %-9d|\n",myTime -> tm_mday,myTime -> tm_mon+1,myTime -> tm_year+1900, jmlhtotal, tsh);
		fprintf(f,"|----------------------------------------------|\n");
      	fclose(f);
      menu_utama();
}


void laporan(){
char data[50];
FILE *f = fopen("Data_Transaksi.DAT","r");
        if(f==NULL){
            printf("\nFile tidak ada");
            getch();
        }
        while(fgets(data,50,f)!=NULL)
        {
                printf("%s", data);
        }
        fclose(f);
        menu_utama();
}

void keluar_aplikasi(){
exit(0);
}

#define BATAS 39
garis()
{
	int hitung;
	for(hitung = 1 ; hitung <= BATAS; hitung++) putchar('-');printf("\n");
}

#define BATAS2 29
dashbar()
{
	int hitung;
	for(hitung = 1 ; hitung <= BATAS2; hitung++) putchar('-');printf("\n");
}
