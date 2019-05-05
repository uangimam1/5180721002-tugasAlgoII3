#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

bool ketemu;

struct DataVariabel{
    string Member;
};
DataVariabel dataV;

struct DataMember{
    int jenis_barang,jmlh_barang2[5];
    double harga_barang[5],total_keseluruhan,total_kel_barang;
    char barang[5];
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};
};
DataMember dataM;

void AkunArea();

void MencariIdentitas();



main(){

    cout<<" ======================================"<<endl;
    cout<<" |                                    |"<<endl;
    cout<<" |             MINIMARKET             |"<<endl;
    cout<<" |              BOLAWEN               |"<<endl;
    cout<<" |                                    |"<<endl;
    cout<<" ======================================"<<endl;

    cout<<" | Apakah Member ? <y/t> : ";cin>>dataV.Member;
    AkunArea();



}

int HitungBarangMember(){
    cout<<"Jenis Barang : ";cin>>dataM.jenis_barang;
    for(int i=1; i<=dataM.jenis_barang; i++){
        cout<<" Input Barang ke-["<<i<<"]"<<endl;
        cout<<" Input Harga Barang  : ";cin>>dataM.harga_barang[i];
        cout<<" Input Jumlah Barang : ";cin>>dataM.jmlh_barang2[i];

        dataM.total_kel_barang += dataM.jmlh_barang2[i];
        dataM.total_keseluruhan += dataM.harga_barang[i]*dataM.jmlh_barang2[i];
    }



}


void MencariIdentitas(){
   /* string cari;
    cout<<" Masukan Nomor Identitas : ";cin>>cari;
    sort(dataM.nomor[0].begin(), dataM.nomor[4].end());
    ketemu=binary_search(dataM.nomor[0].begin(), dataM.nomor[4].end(), cari);*/
    string cari;
    cout<<" | Masukan Nomor Identitas : ";cin>>cari;
    if(cari==dataM.nomor[0]){
        cout<<" | Hello "<<dataM.nama[0]<<endl;
        cout<<" -------------------------------------"<<endl;

         HitungBarangMember();
         cout<<"barang :"<<endl;
    for(int j=1; j<=dataM.jenis_barang; j++){
        cout<<dataM.harga_barang[j]<<endl;
    }
    for(int j=1; j<=dataM.jenis_barang; j++{
    sort(dataM.harga_barang.begin(), dataM.harga_barang.end());}
        cout<<dataM.total_kel_barang<<endl;
        cout<<dataM.total_keseluruhan<<endl;

    cout<<" -------------------------------------"<<endl;
    cout<<" |  + Nama : "<<endl;


    }else if(cari==dataM.nomor[1]){
        cout<<" | Hello "<<dataM.nama[1]<<endl;
        cout<<" -------------------------------------"<<endl;

    }else if(cari==dataM.nomor[2]){
        cout<<" | Hello "<<dataM.nama[2]<<endl;
        cout<<" -------------------------------------"<<endl;

    }else if(cari==dataM.nomor[3]){
        cout<<" | Hello "<<dataM.nama[3]<<endl;
        cout<<" -------------------------------------"<<endl;

    }else if(cari==dataM.nomor[4]){
        cout<<" | Hello "<<dataM.nama[4]<<endl;
        cout<<" -------------------------------------"<<endl;

    }
    else{
        cout<<" ======================================"<<endl;
        cout<<" |     MAAF! Data Tidak di Temukan    |"<<endl;
        cout<<" ======================================"<<endl;
    }
}



void AkunArea(){
    if (dataV.Member=="y"){
        cout<<" -------------------------------------"<<endl;
        cout<<" |              MEMBER               |"<<endl;
        cout<<" -------------------------------------"<<endl;
        MencariIdentitas();
    }else if (dataV.Member=="t"){
        cout<<" -------------------------------------"<<endl;
        cout<<" |            NON MEMBER             |"<<endl;
        cout<<" -------------------------------------"<<endl;
        cout<<" | Nama Anda : "<<endl;
    }else {
        cout<<" ======================================"<<endl;
        cout<<" |  MAAF! Data yang anda Input Salah  |"<<endl;
        cout<<" ======================================"<<endl;
    }
}


