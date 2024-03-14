/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 03
 *   Hari dan Tanggal    : 14/03/2024
 *   Nama (NIM)          : Dennis Hubert(13222018) 
 *   Nama File           : main.c 
 *   Deskripsi           : decoder
 */
#include <stdio.h>
#include <string.h>
int main(){
long int code, arrayofinput[3][5],len = 0,i,j; 

FILE *test;
test = fopen("test.txt","r");
char full[3][100];
//menghapus row dan menjadikan array
for (i=0;i<3;i++){
    fgets(full[i],100,test);
    full[i][strcspn(full[i],"\n")] = 0;
}
//menjadikan substring pada row sebagai masing-masing array

char token[3][5][100];
for (i=0;i<3;i++){
    char *ptr = strtok(full[i]," ");
    for (j=0;j<5;j++){
        token[i][j] = strcpy(*ptr, token[i][j]);
        ptr = strtok(NULL," ");
    }  
    }

//input dari key 
printf("masukkan key: ");
scanf("%ld",&code);

//menjadikan key sebagai array
for (j =0;j<3;j++){
    for (i = 0; i<5 ; i++){
        int temp = code % 10;
        arrayofinput[j][i] = temp;
        code = code / 10;
    }
}


for (i = 0; i<3 ; i++){
    for (j = 0; j<5;j++){
    if (arrayofinput[i][j] <= 5){
        printf("%s",token[i][j]);
    }
}
}

return 0;
}
