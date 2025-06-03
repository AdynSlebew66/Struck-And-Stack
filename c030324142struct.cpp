#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[]){
    Mahasiswa Zidan;
    Mahasiswa *ptrZidan = &Zidan;

     cout << "Masukkan NIM: ";
    cin >> ptrZidan->nim;
    system("cls");
    cout << "Masukkan Nama: ";
    cin >> ptrZidan->nama;
    system("cls");
    cout << "Masukkan Alamat: ";
    cin >> ptrZidan->alamat;
    system("cls");
    cout << "Masukkan ipk: ";
    cin >> ptrZidan->ipk;
    system("cls");
    cout << "NIM: " << ptrZidan->nim << endl;
    cout << "Nama: " << ptrZidan->nama << endl;
    cout << "Alamat: " << ptrZidan->alamat << endl;
    cout << "IPK: " << ptrZidan->ipk << endl;
    return 0;
}