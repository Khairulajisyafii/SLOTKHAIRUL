#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <windows.h>
//g++ yes.cpp -o yes.exe
using namespace std;
         int dana = 400;
         int coin = 0;
         int kekayaan[5] = {0,0,0,0,0};
         int code[4] = {6767,9097,8897,6678};
         int reedem;
         string nkekayaan[5] ={"motor","mobil","helikopter","rumah","hotel"};
         int hshoprice[5] = {20000,300000,12500000,40000000,652000000};
         void sleep_for_seconds(float seconds) {
    #ifdef _WIN32
    Sleep(static_cast<DWORD>(seconds * 1000));
#else
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(seconds * 1000)));
#endif
}
   int shops(int &dana,int sugih[5],int hshoprice[5],string name[5]){
      int choice = 0;
      int amount = 0;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << " uang : Rp" << dana << endl;
      cout << " motor      [0]        Rp" << hshoprice[0] << "/unit" << endl;
      cout << " mobil      [1]        Rp" << hshoprice[1] << "/unit" << endl;
      cout << " helikopter [2]        Rp" << hshoprice[2] << "/unit" << endl;
      cout << " rumah      [3]        Rp" << hshoprice[3] << "/unit" << endl;
      cout << " hotel      [4]        Rp" << hshoprice[4] << "/unit" << endl;
      cout << " batal      [5]" << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      while(true){
      cout << "pilih aset yang mau dibeli" << endl;
      cin >> choice;
         if(choice >= 5){
            cout << "transaksi batal" << endl;
            return 1;
            }
             cout << "ingin membeli brp?" << endl;
             cin >> amount;
            if(dana < hshoprice[choice]*amount){
             cout << "uang tidak cukup" << endl;
            }else{
            dana -= hshoprice[choice]*amount;
            cout << "telah membeli " << name[choice] << " sebanyak " << amount << endl;
            int *iya = &sugih[choice];
            iya[choice] += amount;
            }
      }
      }
   
      float spins(int &dana , float res){
        while(true){
          int price = 50;
         if(dana < price){
            cout << "saldo tidak cukup" << endl;
            dana += price;
            return 1;
         }
         dana -= price;
         //list hadiah
        int hadiah[50];
        for(int i = 0; i < 15 ;i++){
            hadiah[i] = 20 ;
        }
        for(int i = 15; i < 25 ; i++){
            hadiah[i] = 35;
        }
        for(int i = 25; i < 35 ; i++){
            hadiah[i] = 60;
        }
        for(int i = 35; i < 45 ; i++){
            hadiah[i] = 80;
        }
        for(int i = 45; i < 49 ; i++){
            hadiah[i] = 1000;
        }
        for(int i = 49; i < 50 ; i++){
            hadiah[i] = 50000;
        }

         
        int b = 0;
        int h = 0;
         //program spin
         int random = rand() % (50 - 0 + 1) + 0;
         h = random;
         for(int i = 0;i < 3 ;i++){
            cout << hadiah[rand() % (50 - 0 + 1) + 0] << endl;
            float tm = 0.5;
            sleep_for_seconds(tm);
            tm += 0.5;
         }
         sleep_for_seconds(2);
         cout << "kamu mendapat : " << hadiah[random] << endl;
         int resz = hadiah[random];
         dana += resz;
         int my = 1;
         cout << "apakah mau lanjut? y[1]/n[0]" << endl;
         cin >> my;
         if(my == 0){
            break;
         }
      }
      }
      float spins1(int &dana , float res){
        while(true){
          int price = 100;
         if(dana < price){
            cout << "saldo tidak cukup" << endl;
               dana += price;
            return 1;
         }
         dana -= price;
         //list hadiah
        int hadiah[50];
        for(int i = 0; i < 15 ;i++){
            hadiah[i] = 40 ;
        }
        for(int i = 15; i < 25 ; i++){
            hadiah[i] = 70;
        }
        for(int i = 25; i < 35 ; i++){
            hadiah[i] = 120;
        }
        for(int i = 35; i < 45 ; i++){
            hadiah[i] = 160;
        }
        for(int i = 45; i < 49 ; i++){
            hadiah[i] = 2000;
        }
        for(int i = 49; i < 50 ; i++){
            hadiah[i] = 100000;
        }
           int b = 0;
        int h = 0;
         //program spin
         int random = rand() % (50 - 0 + 1) + 0;
         h = random;
         for(int i = 0;i < 3 ;i++){
            cout << hadiah[rand() % (50 - 0 + 1) + 0] << endl;
            float tm = 0.5;
            sleep_for_seconds(tm);
            tm += 0.5;
         }
         sleep_for_seconds(2);
         cout << "kamu mendapat : " << hadiah[random] << endl;
         int resz = hadiah[random];
         dana += resz;
          int my = 1;
         cout << "apakah mau lanjut? y[1]/n[0]" << endl;
         cin >> my;
         if(my == 0){
            break;
      }
        }
      }
      float spins2(int &dana , float res){
    while(true){
          int price = 500;
         if(dana < price){
               dana += price;
            cout << "saldo tidak cukup" << endl;
            return 1;
         }
         dana -= price;
         //list hadiah
        int hadiah[50];
        for(int i = 0; i < 15 ;i++){
            hadiah[i] = 40*5 ;
        }
        for(int i = 15; i < 25 ; i++){
            hadiah[i] = 70*5;
        }
        for(int i = 25; i < 35 ; i++){
            hadiah[i] = 120*5;
        }
        for(int i = 35; i < 45 ; i++){
            hadiah[i] = 160*5;
        }
        for(int i = 45; i < 49 ; i++){
            hadiah[i] = 2000*5;
        }
        for(int i = 49; i < 50 ; i++){
            hadiah[i] = 100000*5;
        }
           int b = 0;
        int h = 0;
         //program spin
         int random = rand() % (50 - 0 + 1) + 0;
         h = random;
         for(int i = 0;i < 3 ;i++){
            cout << hadiah[rand() % (50 - 0 + 1) + 0] << endl;
            float tm = 0.5;
            sleep_for_seconds(tm);
            tm += 0.5;
         }
         sleep_for_seconds(2);

         cout << "kamu mendapat : " << hadiah[random] << endl;
         int resz = hadiah[random];
         dana += resz;
          int my = 1;
         cout << "apakah mau lanjut? y[1]/n[0]" << endl;
         cin >> my;
         if(my == 0){
            cout << "permainan telah berakhir" << endl;
            break;
      }
  }
  }
      float spins3(int &dana , float res){
        while(true){
         int price = 1000;
         if(dana < price){
            cout << "saldo tidak cukup" << endl;
               dana += price;
            return 1;
         }
         dana -= price;

         //list hadiah
        int hadiah[50];
        for(int i = 0; i < 15 ;i++){
            hadiah[i] = 40*10 ;
        }
        for(int i = 15; i < 25 ; i++){
            hadiah[i] = 70*10;
        }
        for(int i = 25; i < 35 ; i++){
            hadiah[i] = 120*10;
        }
        for(int i = 35; i < 45 ; i++){
            hadiah[i] = 160*10;
        }
        for(int i = 45; i < 49 ; i++){
            hadiah[i] = 2000*10;
        }
        for(int i = 49; i < 50 ; i++){
            hadiah[i] = 100000*10;
        }
           int b = 0;
        int h = 0;
         //program spin
         int random = rand() % (50 - 0 + 1) + 0;
         h = random;
         for(int i = 0;i < 3 ;i++){
            cout << hadiah[rand() % (50 - 0 + 1) + 0] << endl;
            float tm = 0.5;
            sleep_for_seconds(tm);
            tm += 0.5;
         }
         sleep_for_seconds(2);
         cout << "kamu mendapat : " << hadiah[random] << endl;
         int resz = hadiah[random];
         dana += resz;
          int my = 1;
         cout << "apakah mau lanjut? y[1]/n[0]" << endl;
         cin >> my;
         if(my == 0){
            break;
      }
      }
      }
int main(){
         cout << "SLOT BY KHAIRUL" << endl;
         cout << "[top]untuk top up" << endl;
         cout << "[aset]untuk cek aset" << endl;
         cout << "[play]untuk bermain" << endl;
         cout << "[shop]untuk membeli aset" << endl;
         cout << "[code]untuk penukaran kode" << endl;
         cout << "[stop]untuk keluar dari program" << endl;
       string inp;
while(true){
      int spin,up,bet,profit,cv;
     cin >> inp;
    

       if(inp == "aset"){
         cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
         cout << "  uang         : Rp " << dana << endl;
         cout << "  coin         : " << coin << endl;
         cout << "  motor        : " <<  kekayaan[0] <<  " unit" << endl;
         cout << "  mobil        : " << kekayaan[1] <<   " unit" << endl;
         cout << "  helikopter   : "<< kekayaan[2] <<    " unit" << endl;
         cout << "  rumah        : "<< kekayaan[3] <<    " unit" << endl;
         cout << "  hotel        : "<< kekayaan[4] <<    " unit" << endl;
         cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

       }else if(inp =="top"){
         cout << "pilih beberapa opsi top up(membutuhkan 1 coin)" << endl;
         if(coin <= 0){
            cout << "oops coinmu tidak cukup" << endl;
         }else{
         cout << "[1]Rp20  [2]Rp50  [3]Rp100  [4]Rp200 [5]batal" << endl;
         cin >> up ;
         if(up == 1){
            cout << "top up brp kali[maks 10]?" << endl;
            cin >> cv;
            if(cv > 10){
               cv = 10;
            }else if(cv < 0){
               cv = 0;
            }
            dana += 20*cv;
            cout << "top up berhasil!" << endl;
         }else if(up == 2){
            cout << "top up brp kali[maks 10]?" << endl;
            cin >> cv;
            if(cv > 10){
               cv = 10;
            }else if(cv < 0){
               cv = 0;
            }
            dana += 50*cv;
            cout << "top up berhasil!" << endl;
         }else if(up == 3){
            cout << "top up brp kali[maks 10]?" << endl;
            cin >> cv;
            if(cv > 10){
               cv = 10;
            }else if(cv < 0){
               cv = 0;
            }
            dana += 100*cv;
            cout << "top up berhasil!" << endl;
         }else if(up == 4){
            cout << "top up brp kali[maks 10]?" << endl;
            cin >> cv;
            if(cv > 10){
               cv = 10;
            }else if(cv < 0){
               cv = 0;
            }
            dana += 200*cv;
            cout << "top up berhasil!" << endl;
         }else{
            cout << "top up gagal!" << endl;
         }
         }}else if(inp =="play"){
         cout << "pilih bet" << endl;
         cout << "[1]50  [2]100 [3]500 [4]1000" << endl;
         cin >> bet;
         if(bet == 1){
            spins(dana,0);
         }else if(bet == 2){
            spins1(dana,0);
         }else if(bet == 3){
            spins2(dana,0);
         }else if(bet == 4){
            spins3(dana,0);
         }else{
            cout << "tolong masukkan dengan benar!!" << endl;
         }
         }else if(inp == "stop"){
            break;
         }else if(inp == "shop"){
             shops(dana,kekayaan,hshoprice,nkekayaan);
         }else if(inp == "code"){
              cout << "masukkan kode reedem" << endl;
              cin >> reedem;
              int succes = 0;
              for(int g = 0;g < 5;g++){
               if(reedem == code[g]){
                  cout << "code berhasil! +1 coin" << endl;
                  coin += 1;
                  succes += 1;
               }
              }
              if(succes <= 0){
               cout <<"code salah" << endl;
              }
         }else{
          cout << "tolong masukkan dengan benar!!" << endl;
         }
    }
  
return 0;
}
  
