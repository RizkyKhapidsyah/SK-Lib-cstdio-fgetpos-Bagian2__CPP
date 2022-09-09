#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;
    fpos_t pos;
    int c;

    fp = fopen("fileSaya.txt", "w+");

    /* Dapatkan posisi awal */
    fgetpos(fp, &pos);
    fputs("Hari yang menyenangkan!", fp);

    /* Atur posisi ke awal */
    fsetpos(fp, &pos);

    while (!feof(fp)) {
        c = getc(fp);
        putchar(c);
    }

    fclose(fp);

    _getch();
    return 0;
}