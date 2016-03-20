#include <stdlib.h>
#include <stdio.h>
int main (){
    int Ninja, Naruto=7000, Sakura=5000, Sasuke=10000, RockLee=6000, Neji=10000, Tenten=5000, Jiraiya=20000, Tsunade=18000, Orochimaru=1000, Total_Mission, Total, Courier, Total_Akhir;
    printf("=========Selamat datang di Ninja Village========== \n \n");
    printf("Team Ninja \n");
    printf("=============\n");
    printf("Team 1 \n  Team 2 \n  Team 3 \n Silakan pilih Team yang ada :");
    scanf("%d",&Ninja);
    printf("Total Mission :");     scanf("%d",&Total_Mission);
    printf("\n");

    switch (Ninja) {

    case 1 :
    printf("Team 1 \n");
    printf("\nNaruto :%d",Naruto);
    printf("\nSakura :%d",Sakura);
    printf("\nSasuke :%d",Sasuke);
    printf("\nTotal_Mission :%d Team",Total_Mission);
        Total=(Naruto+Sakura+Sasuke)*Total_Mission;
        Courier=(Total)*15/100;
        Total_Akhir=Total+Courier;
    printf("\n");
    printf("\nTotal, Team 1 * %d :%d",Total_Mission,Total);
    printf("\nBiaya Courier 15 persen : %d",Courier);
    printf("\nJadi, total yang harus anda bayar :%d",Total_Akhir);
    printf("\n");
    break;

    case 2 :
    printf("Team 2 \n");
    printf("\nRockLee :%d",RockLee);
    printf("\nNeji :%d",Neji);
    printf("\nTenten :%d",Tenten);
    printf("\nTotal_Mission :%d Team",Total_Mission);
        Total = (RockLee + Neji + Tenten) * Total_Mission;
        Courier = (Total) * 15 / 100;
        Total_Akhir=Total+Courier;
    printf("\n");
    printf("\nTotal, Team 2 * %d :%d",Total_Mission,Total);
    printf("\nBiaya Courier 15 persen : %d",Courier);
    printf("\nJadi, total yang harus anda bayar :%d",Total_Akhir);
    printf("\n");
    break;

    case 3 :
    printf("Team 3 \n");
    printf("\nJiraiya :%d",Jiraiya);
    printf("\nTsunade :%d",Tsunade);
    printf("\nOrochimaru :%d",Orochimaru);
    printf("\nTotal_Mission :%d Team",Total_Mission);
    Total=(Jiraiya+Tsunade+Orochimaru)*Total_Mission;
    Courier=(Total)*15/100;
    Total_Akhir=Total+Courier;
    printf("\n");
    printf("\nTotal, Team 3 * %d :%d",Total_Mission,Total);
    printf("\nBiaya Courier 15 persen : %d",Courier);
    printf("\nJadi, total yang harus anda bayar :%d",Total_Akhir);
    printf("\n");
    break;

    default:
    printf("Maaf, Team yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi ^^\n");
    }
    system("pause");
    return 0; }
