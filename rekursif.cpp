#include <iostream>

using namespace std;

main(){
    string nm,pd,makul;
    long int nim;
    int a,mk,sks;
    int hasil,total,ts=0,tarif=120000,diskon=15000;

    cout<<"----------------------------------------"<<endl;
    cout<<" Nama      : ";cin>>nm;
    cout<<" NIM       : ";cin>>nim;
    cout<<"----------------------------------------"<<endl;
    cout<<"jumlah mata kuliah yang di ambil : ";cin>>mk;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ;
    cout<<"----------------------------------------"<<endl;

    for (a=0; a<mk; a++){
        cout<<" Mata kuliah      : ";cin>>makul;
        cout<<" jumlah sks : ";cin>>sks;
        ts+=sks;
    }
   
    total=tarif*ts;
    hasil=total-diskon;

    cout<<"----------------------------------------"<<endl;
    cout<<"Nama Mahasiswa   :";cout<<nm<<endl;
    cout<<"Nim Mahasiswa    :";cout<<nim<<endl;
    cout<<"jumlah SKS       : ";cout<<ts<<endl;
    cout<<"jumlah pembayaran awal : ";cout<<total<<endl;
	cout<<"jumlah pembayaran setelah diskon :";cout<<hasil<<endl                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"----------------------------------------"<<endl;
}

