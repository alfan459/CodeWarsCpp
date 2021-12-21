//Soal
int multiply(int a, int b)
{
  a * b;
}

//Seharusnya
int multiply(int a, int b)
{
  return a * b;
}

/*
Fungsi dari return adalah untuk mengakhiri eksekusi dari function tersebut, dan return juga dapat memberikan nilai pada saat akhir dari function kepada pemanggil
Bentuk penulisannya:
return;       // pengembalian tanpa nilai
return nilai; // pengembalian dengan nilai

Function tidak mengembalikan nilai biasanya menggunakan return type yang void
Function dengan mengembalikan nilai merupakan yang bukan bertype void yang dapat mengembalikan sebuah nilai kepada pemanggil
*/

//Contoh 1
//Pengembalian tanpa nilai
return;
//Pengembalian dengan nilai
return true;
return myVar;
return "belajarcpp.com";
return 6+myVar/5;

//Contoh function yang mengembalikan nilai
#include <iostrem>
#include <string>
using namespace std;

string hallo(string a=""){
  return "Hallo"+a+" !";
}

int main(){
  cout<<hallo("Belajar C++");
  return 0;
}

//Contoh lain
#include <iostream>
using namespace std;

double luasLingkaran(double r=0){
  if(!r){
    cout<<"Anda tidak memasukkan argument r"<<endl;
    return 0;
  }
  const double phi = 3.14;
  return phi * r * r;
}
int main(){
  cout<<luasLingkaran(3);
  return 0;
}
