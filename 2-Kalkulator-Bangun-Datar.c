#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define PI 22.0/7.0

// Fungsi untuk memvalidasi input positif
float validasiInputPositif(float input) {
    while (input <= 0) {
        printf("Nilai tidak valid! Masukkan nilai positif: ");
        fflush(stdin); 
        scanf("%f", &input);
        getchar(); 
    }
    return input;
}

// Fungsi untuk memvalidasi input berupa angka bulat
float validasiInputAngka() {
    char buffer[1000];
    while (1) {
        fgets(buffer, sizeof(buffer), stdin); 
        char *endptr;
        float input = strtof(buffer, &endptr);
        if (endptr != buffer && *endptr == '\n') {
            return input;
        } else {
            printf("Input tidak valid! Masukkan angka: ");
        }
    }
}

// Fungsi untuk memvalidasi input berupa integer 1-5
int validasiPilihan() {
    int pilihanBangunDatar;
    char buffer[1000];
    while (1) {
        fgets(buffer, sizeof(buffer), stdin);
        char *endptr;
        pilihanBangunDatar = strtol(buffer, &endptr, 10);
        if (endptr != buffer && *endptr == '\n' && pilihanBangunDatar >= 1 && pilihanBangunDatar <= 5) {
            return pilihanBangunDatar;
        } else {
            printf("Pilihan tidak valid! Masukkan angka 1-5: ");
        }
    }
}

// Fungsi untuk mengulang
int validasiUlangi() {
    char buffer[20];
    while (1) {
        printf("\nApakah Anda ingin mengulang? (yes/no): ");
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = 0;

        if (strcmp(buffer, "yes") == 0 || strcmp(buffer, "no") == 0) {
            system("cls");
            return strcmp(buffer, "yes") == 0;
        } else {
            printf("Input tidak valid! Masukkan 'yes' atau 'no'.\n");
        }
    }
}

// Fungsi untuk menghitung luas dan keliling segitiga sembarang
void hitungSegitigaSembarang() {
    float panjangAlas, tinggiSegitiga, panjangSisiB, panjangSisiC;

    printf("Masukkan panjang alas segitiga: ");
    panjangAlas = validasiInputPositif(validasiInputAngka());
    printf("Masukkan tinggi segitiga: ");
    tinggiSegitiga = validasiInputPositif(validasiInputAngka());    
    printf("Masukkan panjang sisi b: ");
    panjangSisiB = validasiInputPositif(validasiInputAngka());   
    printf("Masukkan panjang sisi c: ");
    panjangSisiC = validasiInputPositif(validasiInputAngka());  
    printf("\n>> Data berhasil dimasukkan <<\n");
    printf("-----------------------------------------\n");

    float luasSegitiga = 0.5 * panjangAlas * tinggiSegitiga;
    float kelilingSegitiga = panjangAlas + panjangSisiB + panjangSisiC;

    printf("\n>> Hasil Perhitungan Segitiga Sembarang <<\n");
    printf("Luas = %.2f\nKeliling = %.2f\n", luasSegitiga, kelilingSegitiga);
}


// Fungsi untuk menghitung luas dan keliling belah ketupat
void hitungBelahKetupat() {
    float panjangDiagonal1, panjangDiagonal2, panjangSisi;

    printf("Masukkan panjang diagonal 1: ");
    panjangDiagonal1 = validasiInputPositif(validasiInputAngka());
    printf("Masukkan panjang diagonal 2: ");
    panjangDiagonal2 = validasiInputPositif(validasiInputAngka());
    printf("Masukkan panjang sisi: ");
    panjangSisi = validasiInputPositif(validasiInputAngka());
    printf("\n>> Data berhasil dimasukkan <<\n");
    printf("-----------------------------------------\n");

    float luasBelahKetupat = 0.5 * panjangDiagonal1 * panjangDiagonal2;
    float kelilingBelahKetupat = 4 * panjangSisi;

    printf("\n>> Hasil Perhitungan Belah Ketupat <<\n");
    printf("Luas = %.2f\nKeliling = %.2f\n", luasBelahKetupat, kelilingBelahKetupat);
}


// Fungsi untuk menghitung luas dan keliling jajar genjang
void hitungJajarGenjang() {
    float panjangAlas, tinggiJajarGenjang, panjangSisiMiring;

    printf("Masukkan panjang alas jajar genjang: ");
    panjangAlas = validasiInputPositif(validasiInputAngka());
    printf("Masukkan tinggi jajar genjang: ");
    tinggiJajarGenjang = validasiInputPositif(validasiInputAngka());
    printf("Masukkan panjang sisi miring: ");
    panjangSisiMiring = validasiInputPositif(validasiInputAngka());
    printf("\n>> Data berhasil dimasukkan <<\n");
    printf("-----------------------------------------\n");

    float luasJajarGenjang = panjangAlas * tinggiJajarGenjang;
    float kelilingJajarGenjang = 2 * (panjangAlas + panjangSisiMiring);

    printf("\n>> Hasil Perhitungan Jajar Genjang <<\n");
    printf("Luas = %.2f\nKeliling = %.2f\n", luasJajarGenjang, kelilingJajarGenjang);
}


// Fungsi untuk menghitung luas dan keliling trapesium
void hitungTrapesium() {
    float panjangSisiA, panjangSisiB, tinggiTrapesium, panjangSisiC, panjangSisiD;

    printf("Masukkan panjang sisi a: ");
    panjangSisiA = validasiInputPositif(validasiInputAngka());
    printf("Masukkan panjang sisi b: ");
    panjangSisiB = validasiInputPositif(validasiInputAngka());
    printf("Masukkan tinggi trapesium: ");
    tinggiTrapesium = validasiInputPositif(validasiInputAngka());
    printf("Masukkan panjang sisi c: ");
    panjangSisiC = validasiInputPositif(validasiInputAngka());
    printf("Masukkan panjang sisi d: ");
    panjangSisiD = validasiInputPositif(validasiInputAngka());
    printf("\n>> Data berhasil dimasukkan <<\n");
    printf("-----------------------------------------\n");

    float luasTrapesium = 0.5 * (panjangSisiA + panjangSisiB) * tinggiTrapesium;
    float kelilingTrapesium = panjangSisiA + panjangSisiB + panjangSisiC + panjangSisiD;

    printf("\n>> Hasil Perhitungan Trapesium <<\n");
    printf("Luas = %.2f\nKeliling = %.2f\n", luasTrapesium, kelilingTrapesium);
}


// Fungsi untuk menghitung luas dan keliling lingkaran
void hitungLingkaran() {
    float jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    jariJari = validasiInputPositif(validasiInputAngka());
    printf("\n>> Data berhasil dimasukkan <<\n");
    printf("-----------------------------------------\n");

    float luasLingkaran = PI * jariJari * jariJari;
    float kelilingLingkaran = 2 * PI * jariJari;

    printf("\n>> Hasil Perhitungan Lingkaran <<\n");
    printf("Luas = %.2f\nKeliling = %.2f\n", luasLingkaran, kelilingLingkaran);
}



int main() {
    int pilihanBangunDatar;

    printf("\n=========================================\n");
    printf("==   Program Kalkulator Bangun Datar   ==\n");
    printf("=========================================\n");

    do {
        do {
            printf("\nPilih bangun datar yang ingin dihitung:\n");
            printf("-----------------------------------------\n");
            printf("1. Segitiga Sembarang\n");
            printf("2. Belah Ketupat\n");
            printf("3. Jajar Genjang\n");
            printf("4. Trapesium\n");
            printf("5. Lingkaran\n");
            printf("-----------------------------------------\n");
            printf("Masukkan pilihan (1-5): ");
            pilihanBangunDatar = (int)validasiPilihan();

            if (pilihanBangunDatar < 1 || pilihanBangunDatar > 5) {
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
            }
        } while (pilihanBangunDatar < 1 || pilihanBangunDatar > 5);

        switch (pilihanBangunDatar) {
            case 1: {
                hitungSegitigaSembarang();
                break;
            }
            case 2: {
                hitungBelahKetupat();
                break;
            }
            case 3: {              
                hitungJajarGenjang();
                break;
            }
            case 4: {
                hitungTrapesium();
                break;
            }
            case 5: {
                hitungLingkaran();
                break;
            }
        }

    } while (validasiUlangi());

    printf("\n=========================================\n");
    printf("==           Program Selesai           ==\n");
    printf("=========================================\n");

    return 0;
}