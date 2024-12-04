#include "header.h"

int main() {
    char identitas[10]; 
    data(); 

    printf("\n---- Sistem Manajemen Alat Laboratorium ----\n\n");

    // Memanggil fungsi login
    if (!login(identitas)) 
    {
        return 0; 
    }

  if (strcmp(identitas, "admin") == 0) {
        printf("\n Selamat datang, Admin!\n");
    } else {
        printf("\n Selamat datang, User!\n");
    }

    // Mengarahkan ke menu sesuai dengan identitas
    if (strcmp(identitas, "admin") == 0) {
        admin_menu(); // Menu admin
    } else if (strcmp(identitas, "user") == 0) {
        user_menu(); // Menu user
    }

    return 0;
}
