//hawwina aunil azifa
//18050623018
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

char get[1];
int a=0,i;
const string laki = "l";
const string perempuan = "p";

struct KTP
{
    char nik[50];
    char nama[20];
    char tempat [50];
    char tanggal [50];
    char bulan [50];
    int tahun;
    char kelamin [50];
    char alamat [50];
    char agama [50];
    char pekerjaan [50];
};
KTP data[10];

void Input ()
{
    cout <<"==============================="<<endl;
    cout << "Masukan Banyak Inputan Data : "; cin >> a;
    for (i=0;i<a;i++)
    {
        cin.getline (get,1);
        cout << "NIK                   : "; cin.getline(data[i].nik,50);

        cout << "Nama                  : "; cin.getline(data[i].nama,20);

        cout << "Tempat Lahir          : "; cin.getline(data[i].tempat,50);

        cout << "Tanggal               : "; cin.getline(data[i].tanggal,50);

        cout << "Bulan                 : "; cin.getline(data[i].bulan,50);

        cout << "Tahun                 : "; cin >> data[i].tahun;

        cin.getline (get,1);

        cout << "Jenis Kelamin(l/p)    : "; cin.getline (data[i].kelamin,50);

        cout << "Alamat                : "; cin.getline (data[i].alamat,50);

        cout << "Agama                 : "; cin.getline (data[i].agama,50);

        cout << "Pekerjaan             :"; cin.getline (data[i].pekerjaan,50);
        cout<<endl;
    }
    system("cls");
}

void Find ()
{
    int thn,c,d=0;
    cout <<"========================="<<endl;
    cout <<"Masukan Tahun Kelahiran : ";
    cin >> thn;
    cout<<endl;
    for (c=0;c<a;c++)
    {
        if (data[c].tahun==thn)
        {
            cout << "-----------------"<<endl;
            cout << "NIK            : "<<data[c].nik<<endl;
            cout << "Nama           : "<<data[c].nama<<endl;
            cout << "TTL            : "<<data[c].tempat<<", "<<data[c].tanggal<<"-"<<data[c].bulan<<"-"<<data[c].tahun<<endl;
            cout << "Jenis Kelamin  : "<<data[c].kelamin<<endl;
            cout << "Alamat         : "<<data[c].alamat<<endl;
            cout << "Agama          : "<<data[c].agama<<endl;
            cout << "Pekerjaan      : "<<data[c].pekerjaan<<endl;
            cout<<endl;
            d++;
        }

        else if (c+1==a && d==0)
        {
            cout << "!!!!!DATA YANG ANDA PILIH TIDAK DITEMUKAN!!!!!";
        }
    }
    getch(); system("cls");

}

void Show ()
{
    int x,e,f=0;

    cout << "============================================"<<endl;
    cout << "Tampilkan Data KTP Berdasarkan Jenis Kelamin"<<endl;
    cout << "1. Perempuan"<<endl;
    cout << "2. Laki-Laki"<<endl;
    cout << "Masukan Pilihan : ";
    cin >> x;
    cout<<endl;

    if (x==1)
    {
        for (e=0;e<a;e++)
        {
            if (data[e].kelamin == perempuan)
            {
                cout << "-----------------"<<endl;
                cout << "NIK            : "<<data[e].nik<<endl;
                cout << "Nama           : "<<data[e].nama<<endl;
                cout << "TTL            : "<<data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun<<endl;
                cout << "Jenis Kelamin  : "<<data[e].kelamin<<endl;
                cout << "Alamat         : "<<data[e].alamat<<endl;
                cout << "Agama          : "<<data[e].agama<<endl;
                cout << "Pekerjaan      : "<<data[e].pekerjaan<<endl;
                cout<<endl;
                f++;
            }
        }
    }


    if (x==2)
    {
        for (e=0;e<a;e++)
        {

            if (data[e].kelamin == laki)
            {
                cout << "-----------------"<<endl;
                cout << "NIK            : "<<data[e].nik<<endl;
                cout << "Nama           : "<<data[e].nama<<endl;
                cout << "TTL            : "<<data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun<<endl;
                cout << "Jenis Kelamin  : "<<data[e].kelamin<<endl;
                cout << "Alamat         : "<<data[e].alamat<<endl;
                cout << "Agama          : "<<data[e].agama<<endl;
                cout << "Pekerjaan      : "<<data[e].pekerjaan<<endl;
                cout<<endl;
                f++;
            }
        }
    }

    if (f==0)
        {
            cout << "!!!!!DATA YANG ANDA PILIH TIDAK DITEMUKAN!!!!!";
        }
        getch(); system("cls");


}

void Edit ()
{
    int j;
    cout << "=================="<<endl;
    cout << "Edit Data KTP ke- "; cin >> j;
    cout<<endl;
    j=j-1;
    cin.getline (get,1);
    cout << "-----------------"<<endl;
    cout << "NIK            : "; cin.getline(data[j].nik,50);

    cout << "Nama           : "; cin.getline(data[j].nama,20);

    cout << "Tempat Lahir   : "; cin.getline(data[j].tempat,50);

    cout << "Tanggal        : "; cin.getline(data[j].tanggal,50);

    cout << "Bulan          : "; cin.getline (data[j].bulan,50);

    cout << "Tahun          : "; cin >> data[j].tahun;
    cin.getline (get,1);

    cout << "Jenis Kelamin  : "; cin.getline (data[j].kelamin,50);

    cout << "Alamat         : "; cin.getline (data[j].alamat,50);

    cout << "Agama          : "; cin.getline (data[j].agama,50);

    cout << "Pekerjaan       :"; cin.getline (data[j].pekerjaan,50);
    cout<<endl;

    Show(); getch(); system("cls");

}

int main()
{
    int *b = new int;
    while (*b!=0)
    {
        cout<<" ---------------- Selamat Datang di Aplikasi Data KTP ---------------";
        cout <<" \nMENU UTAMA :\n\n";
        cout << "1. Memasukan Data"<<endl;
        cout << "2. Mencari Data berdasarkan tahun kelahiran "<<endl;
        cout << "3. Menampilkan Data berdasarkan jenis kelamin "<<endl;
        cout << "4. Mengedit Data"<<endl;
        cout << "0. Keluar"<<endl;
        cout << "Masukan Pilihan : "; cin >> *b;
        cout<<endl<<endl;

        if (*b==1)
        {
            Input();
        }

        else if (*b==2)
        {
            Find();
        }

        else if (*b==3)
        {
            Show();
        }
        else if (*b==4)
        {
            Edit();
        }
        else if (*b==0)
        {
            return 0;
        }
        else
        {
            cout << "!!!!!PILIHAN YANG ANDA MASUKKAN TIDAK DITEMUKAN!!!!!";
        }
    }

}
