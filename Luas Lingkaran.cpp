#include<iostream>
using namespace std;
int main (){
char ulang;
float r,LLing;
double phi = 3.14;
do {
cout<<"Masukkan Nilai r (jari-jari) :";
cin>>r;

LLing = phi*r*r;
cout<<"Maka Luas Lingkaran Tersebut adalah :"<<LLing<<endl;
cout<<"Apakah anda akan menghitung kembali ?";
cin>>ulang;
}
while(ulang=='Y'||ulang=='y');
cout<<"Senang Bisa Membantu anda"<<endl;
return 0;
}
