#include <iostream>
#include <crypt.h>
#include <stdio.h>
#include <unistd.h>
using namespace std;

int main()
{
     cout << "KCS-Auto-File-Deleter 2021.1.0-* By Arda KC" << endl;
     cout << "Otomatik Dosya Silmek için : 1" << endl;
     cout << "Çıkış Yapmak İçin          : 2" << endl;
     string x;
     cout << "";
     getline(cin,x);
     cout << "";
     if (x == "1") {
        cout << "Silinecek dosyanın konumunu giriniz." << endl;
        cout << "";
        char xx[100000];
        cout << "";
        cin >> xx;
        FILE *dosya;
        if (dosya = fopen(xx, "r")) {
        fclose(dosya);
        int saniye=0;
        int saniyeyavaslat=0;
        int surebasladı=0;

        int saniyebitir;
        cout << "Dosyanın kaç saniyede tekrar silineceğini yazın." << endl;
        cout << "";
        cin >> saniyebitir;

        while(true) {

           if (saniye == saniyebitir) {
                   cout << saniye << endl;
                   usleep(510000);
                   int hata = remove(xx);
                   if (hata != 0) {
                   cout << "Dosya bulunamadı veya erişilemiyor. Süre Sıfırlanıyor..." << endl;

                   }
                   else {
                   cout << "Dosya Silindi!. Süre Sıfırlanıyor..." << endl;

                   }

                   surebasladı=2;
                   saniye=0;


           }

           else {
            if (saniyeyavaslat = 100) {
                cout << saniye << endl;
                usleep(510000);
                saniye += 1;
                saniyeyavaslat += 0;

            }
            else {
            if (surebasladı == 0) {
              cout << "Saniye başlatıldı." << endl;
              surebasladı=1;
            }
            else {
              if (surebasladı == 2) {

                cout << "Saniye Sıfırlandı." << endl;
                surebasladı=1;
              }

            }

            if (surebasladı == 1) {
                   usleep(510000);
                   saniyeyavaslat=+1;
            }

}



           }

        }
        }
        else {
        cout << "Dosya Bulunamadı işlemler iptal edildi.";
        return 0;

        }





}
else {
     if (x == "2") {



return 0;
}


    }
}
