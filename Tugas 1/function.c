#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

// Inisialisasi variabel 
Alat_Lab alat_lab[MAX_ALAT];
unsigned int total_alat = 0;
unsigned int total_peminjaman = 0;
Alat_Peminjaman peminjaman[MAX_PEMINJAMAN];

// Fungsi untuk membaca data dari file
void data() {
    FILE *file = fopen("alat_lab.txt", "r");
    if (file == NULL) {
        printf("file tidak ditemukan.\n");
        return;
    }
