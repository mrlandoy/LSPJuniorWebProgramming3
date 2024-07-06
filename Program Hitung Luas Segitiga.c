#include <stdio.h>

// Fungsi untuk menampilkan pesan "Selamat Mengikuti Uji Kompetensi pada skema Junior Web Programmer."
void tampilkan_pesan() {
    printf("Selamat Mengikuti Uji Kompetensi pada skema Junior Web Programmer.\n");
}

// Fungsi untuk menghitung luas segitiga
// Parameter: alas (float), tinggi (float)
// Mengembalikan: luas segitiga (float)
float hitung_luas_segitiga(float alas, float tinggi) {
    return (alas * tinggi) / 2.0;
}

int main() {
    // Deklarasi variabel untuk alas, tinggi, dan luas
    float alas, tinggi, luas;
    
    // Tampilkan pesan sambutan
    tampilkan_pesan();
    
    // Menerima input alas dari pengguna
    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);
    
    // Menerima input tinggi dari pengguna
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    
    // Menghitung luas segitiga dengan memanggil fungsi hitung_luas_segitiga
    luas = hitung_luas_segitiga(alas, tinggi);
    
    // Menampilkan hasil perhitungan luas segitiga
    printf("Luas segitiga adalah: %.2f\n", luas);
    
    // Mengakhiri program
    return 0;
}
