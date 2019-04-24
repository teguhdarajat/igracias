#include "Mahasiswa.h"

/*
* get <0> = kodeMahasiswa 
* get <1> = namaMahasiswa
* get <2> = matakuliah
* get <3> = nilai
* get <4> = prodi
*/



Mahasiswa::Mahasiswa() {
    nim = " ";
    namaMahasiswa = " ";
    nilai = 0.0;
    prodi = " ";
    matkul = " ";
}

Mahasiswa::~Mahasiswa() {
    cout << "";
}

void Mahasiswa::setNIM(string nimMHS) {
    nim = nimMHS;
}

void Mahasiswa::setNamaMahasiswa(string namaMHS) {
    namaMahasiswa = namaMHS;
}

void Mahasiswa::setNilai(double skor) {
    nilai = skor;
}

void Mahasiswa::setProdi(string jurusan) {
    prodi = jurusan;
}

void Mahasiswa::setMatkul(string pelajaran) {
    matkul = pelajaran;
}

string Mahasiswa::getNIM() {
    return nim;
}

string Mahasiswa::getNamaMahasiswa() {
    return namaMahasiswa;
}

double Mahasiswa::getNilai() {
    return nilai;
}

string Mahasiswa::getProdi() {
    return prodi;
}

string Mahasiswa::getMatkul() {
    return matkul;
}

void Mahasiswa::tambahData() {
    mahasiswa.push_back(make_tuple(getNIM(), getNamaMahasiswa(), getMatkul(), getNilai(), getProdi()));
}

void Mahasiswa::editData() {

}
void Mahasiswa::hapusData() {

}
void Mahasiswa::tampilData() {
    
}