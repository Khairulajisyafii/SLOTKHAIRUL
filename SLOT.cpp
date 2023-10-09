#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;
         int dana = 0;

         void sleep_for_seconds(float seconds) {
    #ifdef _WIN32
    Sleep(static_cast<DWORD>(seconds * 1000));
#else
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(seconds * 1000)));
#endif
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
         int my;
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
          int my;
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
          int my;
         cout << "apakah mau lanjut? y[1]/n[0]" << endl;
         cin >> my;
         if(my == 0){
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
          int my;
         cout << "apakah mau lanjut? y[1]/n[0]" << endl;
         cin >> my;
         if(my == 0){
            break;
      }
      }
      }
int main(){
   cout << "SLOT BY DJAYIEM" << endl;
    cout << "[top]untuk top up" << endl;
         cout << "[cek]untuk cek saldo" << endl;
         cout << "[play]untuk bermain" << endl;
         cout << "[prize]untuk cek list hadiah" << endl;
         cout << "[stop]untuk keluar dari program" << endl;
       
while(true){
      string inp;
      int spin,up,bet,profit;
     cin >> inp;
    

       if(inp == "cek"){
         cout << "sisa saldo kamu Rp" << dana << endl;

       }else if(inp =="top"){
         cout << "pilih beberapa opsi top up" << endl;
         cout << "[1]Rp20  [2]Rp50  [3]Rp100  [4]Rp200 [5]batal" << endl;
         cin >> up ;
         if(up == 1){
            dana += 20;
            cout << "top up berhasil!" << endl;
         }else if(up == 2){
            dana += 50;
            cout << "top up berhasil!" << endl;
         }else if(up == 3){
            dana += 100;
            cout << "top up berhasil!" << endl;
         }else if(up == 4){
            dana += 200;
            cout << "top up berhasil!" << endl;
         }else if(up == 5){
            cout << "top up gagal!" << endl;

         }}else if(inp =="play"){
         cout << "pilih bet" << endl;
         cout << "[1]50  [2]100 [3]500 [5]1000" << endl;
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
         }else{
          cout << "tolong masukkan dengan benar!!" << endl;
    }
  
}
return 0;
}
  
