// Sefa Enes Ergin- 2 boyutlu dizide satır ve sütunların ortalamasını bulan kod.
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int matris[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int toplam=0;
    printf("Sütun Ortalamarı \n\n");
    for(int i=0;i<3;i++){
        float ort=0.0;
        for (int j=0; j<4; j++) {
            ort+=matris[j][i];
        }
        printf("Sonuç:  %.2f  \n",ort/4);
    }
    printf("\n\n\n*****************\n\n\n\n");
    
    printf("Satır Ortalamarı \n\n");
    for(int i=0;i<4;i++){
        float ort=0.0;
        for (int j=0; j<3; j++) {
            ort+=matris[i][j];
        }
        printf("Sonuç:  %.2f  \n",ort/3);
    }
    
    return 0;
}
