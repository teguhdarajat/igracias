#ifndef class_kampus
#define class_kampus

#include <iostream>
#include <list>
#include <iterator>
#include <tuple>
#include <stdexcept>

using namespace std;

class Kampus {
    protected:
        list <tuple<string, string, string, double, string>> mahasiswa;
        list <tuple<string, string, string>> dosen;
        list <tuple<string, string>> matkul;
        list <tuple<string, string>> admin;
    
    public:
        virtual void tambahData() = 0;
        virtual void editData() = 0;
        virtual void hapusData() = 0;
        virtual void tampilData() = 0;

};

#endif