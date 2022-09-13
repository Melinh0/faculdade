#include <stdio.h>
 
int main(void){
    float HT, VH, PD, TD, SB, SL;
 
    printf("HORAS TRABALHADAS ......: "); scanf("%f", &HT);
    printf("VALOR DA HORA ..........: "); scanf("%f", &VH);
    printf("PERCENTUAL DE DESCONTO .: "); scanf("%f", &PD);
 
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
 
    printf("SALÁRIO BRUTO ..........: %7.2f\n", SB);
    printf("DESCONTO ...............: %7.2f\n", TD);
    printf("SALÁRIO LÍQUIDO ........: %7.2f\n", SL);
    
    return(0);
}