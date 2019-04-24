#include "Kampus.h"

class Mahasiswa: public Kampus{
    protected:
        string nim, namaMahasiswa, matkul, prodi;
        double nilai;
    
    public:
        Mahasiswa();
        ~Mahasiswa();

        void setNIM(string);
        void setNamaMahasiswa(string);
        void setNilai(double);
        void setProdi(string);
        void setMatkul(string);


        string getNIM();
        string getNamaMahasiswa();
        double getNilai();
        string getProdi();
        string getMatkul();

        void tambahData();
        void editData();
        void hapusData();
        void tampilData();
};