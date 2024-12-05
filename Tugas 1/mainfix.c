#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char identitas[10]; // Role admin/user

    // Validasi jumlah argumen
    if (argc < 3) {
        printf("Penggunaan: %s <username> <password>\n", argv[0]);
        return 1;
    }

    // Menampilkan username dan password yang digunakan
    printf("Login dengan Username: %s\n", argv[1]);
    printf("Password: %s\n", argv[2]);

    // Memuat data alat_lab
    data();
