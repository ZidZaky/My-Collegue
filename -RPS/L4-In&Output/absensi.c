#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool hadir;
    printf("Kehadiran Mahasiswa (0 for izin) : ");
    scanf("%d",&hadir);
    switch(hadir)
    {
    case 1:
        printf("<-----Welcome---->\n\nLoading....\n\n");
        break;
    case 0:
         printf("Silahkan Mengisi Di lain Waktu");
         return 0;
    }

    unsigned int repeat = 1;
    do
    {
    printf("<----> Selamat Datang <---->\nSilahkan Isi Data Diri Anda :\n\n");
    //NIM
    int NIM;
    printf("Insert NIM\t\t: ");
    scanf("%d",&NIM);

    //NAMA
    char Nama[20];
    printf("Insert Nama\t\t: ");
    scanf("%s",Nama);getchar();

    //No.Telp
    char NoTelp[20];
    printf("Insert No.Telp\t\t: ");
    scanf("%s",NoTelp);getchar();

    //Email
    char Email[20];
    printf("Insert Email\t\t: ");
    scanf("%s",Email);getchar();

    //Prodi
    char Prodi[20];
    printf("Insert Prodi\t\t: ");
    scanf("%s",Prodi);getchar();

    //Gender
    char JenisKelamin[20];
    printf("Insert Gender (\f or \v)\t: ");
    scanf("%s",JenisKelamin);getchar();

    //IPK
    float IPK;
    printf("Insert IPK\t\t: ");
    scanf("%f",&IPK);
    printf("\n<---------------------------->");

    printf("\n\nProccessing....\n\n");

    //OUTPUT
    printf("<-------------HASIL--------------->\n");
    printf("1. NIM\t\t:%d\n",NIM);
    printf("2. Nama\t\t:%s\n",Nama);
    printf("3. NoTelp\t:%s\n",NoTelp);
    printf("4. Email\t:%s\n",Email);
    printf("5. Prodi\t:%s\n",Prodi);
    printf("6. JenisKelamin\t:%s\n",JenisKelamin);
    printf("7. IPK\t\t:%.2f\n",IPK);
    (IPK > 2)? printf("8. Kelulusan\t:Lulus\n") : printf("8. Kelulusan\t:ulangi\n");
    printf("<-------------HASIL--------------->\n");

    printf("\nMau Mengisi Ulang? (1 for yes / 0 for no) : ");
    scanf("%u",&repeat);

    } while(repeat != 0);
    printf("silahkan datang kembali (UwU)/ ");

    return 0;
}
