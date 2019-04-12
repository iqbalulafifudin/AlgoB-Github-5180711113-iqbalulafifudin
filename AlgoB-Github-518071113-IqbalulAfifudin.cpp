#include <iostream>
using namespace std;

double nilai(string txt){
double angka;
cout<<"Masukan nilai "<<txt<<" : ";cin>>angka;
return angka;
}

double hasil(float uts,float uas,float tugas,float absen){
double total;
total=uts*0.2+uas*0.3+tugas*0.35+absen*0.15;
cout<<"total nilai : "<<total;
{
if (total>=81)
    cout<<" Nilai yang didapat: A";
else if (total>=61)
    cout<<" Nilai yang didapat: B";
else if (total>=41)
    cout<<" Nilai yang didapat: C";
else if (total>=21)
    cout<<" Nilai yang didapat: D";
else
    cout<<" Nilai yang didapat: E";
}
return total;
}

main(){
double uts,uas,tugas,absen;

uts=nilai("uts");
uas=nilai("uas");
tugas=nilai("tugas");
absen=nilai("absen");
hasil(uts,uas,tugas,absen);
}


