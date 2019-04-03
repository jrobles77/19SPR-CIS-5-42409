#include <iostream>
#include <iomanip>  
#include <cstring>
using namespace std;

int main() {

    char choice,nProbs;

    nProbs='8';
    do{
     
        cout<<"Choose from the following Menu"<<endl<<endl;
        cout<<"1 Race"<<endl;
        cout<<"2 Bank Charges"<<endl;
        cout<<"3 Books"<<endl;
        cout<<"4 Sort Names"<<endl;
        cout<<"5 Rock Paper Scissors"<<endl;
        cout<<"6 Compatible Signs"<<endl;
        cout<<"7 Roman Conversion"<<endl;
        cout<<"8 ISP"<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
       
        switch(choice){
            case '1':{
                float T1, T2, T3, FT, ST, TT;
                string N1, N2, N3, F, S, T;

                cout << "Race Ranking Program\n";
                cout << "Input 3 Runners\n";
                cout <<  "Their names, then their times\n";
   
                cin >> N1 >> T1 >> N2 >> T2 >> N3 >> T3;
   
                if (T1 < T2 && T2 < T3) F = N1, FT = T1, S = N2, ST = T2, T = N3, TT = T3;
                if (T1 < T3 && T3 < T2) F = N1, FT = T1, S = N3, ST = T3, T = N2, TT = T2;
                if (T2 < T1 && T1 < T3) F = N2, FT = T2, S = N1, ST = T1, T = N3, TT = T3;
                if (T2 < T3 && T3 < T1) F = N2, FT = T2, S = N3, ST = T3, T = N1, TT = T1;
                if (T3 < T1 && T1 < T2) F = N3, FT = T3, S = N1, ST = T1, T = N2, TT = T2;
                if (T3 < T2 && T2 < T1) F = N3, FT = T3, S = N2, ST = T2, T = N1, TT = T1;
   
                cout << F << "\t" << setw(3) << FT << endl;
                cout << S << "\t" << setw(3) << ST << endl;
                cout << T << "\t" << setw(3) << TT;
   
                return 0;
                break;
            }
            case '2':{
                float Bal, Chk, ChkFee, MonFee = 10, LowBal, NewBal;
                cout << "Monthly Bank Fees\n";
                cout << "Input Current Bank Balance and Number of Checks\n";
                cin >> Bal >> Chk;
                if (Chk < 20) 
                ChkFee = Chk * .10;
                if (20 <= Chk && Chk <= 39)
                ChkFee = Chk * .08;
                if (40 <= Chk && Chk <= 59)
                ChkFee = Chk * .06;
                if (Chk >= 60)
                ChkFee = Chk * .04;
   
                if (Bal < 0) {
                cout << "Account is overdrawn";
                }
   
             else {
                if (Bal < 400) LowBal = 15;
                NewBal = Bal - ChkFee - MonFee - LowBal;
  
                cout << "Balance     $" << setw(9) << setprecision(2) << fixed << Bal << endl;
                cout << "Check Fee   $" << setw(9) << setprecision(2) << fixed << ChkFee << endl;
                cout << "Monthly Fee $" << setw(9) << setprecision(2) << fixed << MonFee << endl;
                cout << "Low Balance $" << setw(9) << setprecision(2) << fixed << LowBal << endl;
                cout << "New Balance $" << setw(9) << setprecision(2) << fixed << NewBal;

             };
                 return 0;
                break;
            }
            case '3':{
                int Books, Points;
                cout << "Book Worm Points\n",
                cout << "Input the number of books purchased this month.\n";
                cin >> Books;
                if (Books == 0) 
                Points = 0;
                if (Books == 1)
                Points = 5;
                if (Books == 2)
                Points = 15;
                if (Books == 3)
                Points = 30;
                if (Books >= 4)
                Points = 60;
   
                cout << "Books purchased =" << setw(3) << Books << endl;
                cout << "Points earned   =" << setw(3) << Points;

                return 0;
                break;
            }
            case '4':{
                int Size = 50;
                char N1[Size], N2[Size], N3[Size], N4[Size];
    
                cout << "Sorting Names\n";
                cout << "Input 3 names\n";
                cin.getline(N1, Size);
                cin.getline(N2, Size);
                cin.getline(N3, Size);
                cin.getline(N4, Size);
 
               if (strcmp (N2, N3) < 1 && strcmp (N3, N4) < 1) {
                cout << N2 << endl;
                cout << N3 << endl;
                cout << N4;
               };
               if (strcmp (N2, N4) < 1 && strcmp (N4, N3) < 1) {
                cout << N2 << endl;
                cout << N4 << endl;
                cout << N3;
               };
               if (strcmp (N3, N2) < 1 && strcmp (N2, N4) < 1) {
                cout << N3 << endl;
                cout << N2 << endl;
                cout << N4;
               };
               if (strcmp (N3, N4) < 1 && strcmp (N4, N2) < 1) {
                cout << N3 << endl;
                cout << N4 << endl;
                cout << N2;
               };
               if (strcmp (N4, N2) < 1 && strcmp (N2, N3) < 1) {
                cout << N4 << endl;
                cout << N2 << endl;
                cout << N3;
               };
                if (strcmp (N4, N3) < 1 && strcmp (N3, N2) < 1) {
                cout << N4 << endl;
                cout << N3 << endl;
                cout << N2;
               };
                 return 0;
                break;
            }
            case '5':{
                char Player1, Player2;
                int R = 0, P = 0, S = 0, Out;
                cout << "Rock Paper Scissors Game\n";
                cout << "Input Player 1 and Player 2 Choices\n";
                cin >> Player1 >> Player2;
 
                if (Player1 == 'R' || Player1 == 'r' || Player2 == 'R' || Player2 == 'r') R = 1;
                if (Player1 == 'P' || Player1 == 'p' || Player2 == 'P' || Player2 == 'p') P = 1;
                if (Player1 == 'S' || Player1 == 's' || Player2 == 'S' || Player2 == 's') S = 1;

                Out = (R * 100) + (P * 10) + S;
 
                if (Out == 110)
                cout << "Paper covers rock.";
                if (Out == 101)
                cout << "Rock breaks scissors.";
                if (Out == 11)
                cout << "Scissors cuts paper.";
 
                   return 0;
                break;
            }
            case '6':{
                string Hor1, Hor2;
                int Ele1 = 0, Ele2 = 0;
    
                cout << "Horoscope Program which examines compatible signs.\n";
                cout << "Input 2 signs.\n";
                cin >> Hor1 >> Hor2;
    
                if (Hor1 == "Aries" || Hor1 == "Leo" || Hor1 == "Sagittarius")  Ele1 = 1;
                if (Hor1 == "Taurus" || Hor1 == "Virgo" || Hor1 == "Capricorn") Ele1 = 2;
                if (Hor1 == "Gemini" || Hor1 == "Libra" || Hor1 == "Aquarius")  Ele1 = 3;
                if (Hor1 == "Cancer" || Hor1 == "Scorpio" || Hor1 == "Pisces")  Ele1 = 4;

                if (Hor2 == "Aries" || Hor2 == "Leo" || Hor2 == "Sagittarius")  Ele2 = 1;
                if (Hor2 == "Taurus" || Hor2 == "Virgo" || Hor2 == "Capricorn") Ele2 = 2;
                if (Hor2 == "Gemini" || Hor2 == "Libra" || Hor2 == "Aquarius")  Ele2 = 3;
                if (Hor2 == "Cancer" || Hor2 == "Scorpio" || Hor2 == "Pisces")  Ele2 = 4;

                if (Ele1 == Ele2) {
                    if (Ele1 == 1) cout << Hor1 << " and " << Hor2 << " are compatible Fire signs.";
                    if (Ele1 == 2) cout << Hor1 << " and " << Hor2 << " are compatible Earth signs.";
                    if (Ele1 == 3) cout << Hor1 << " and " << Hor2 << " are compatible Air signs.";
                    if (Ele1 == 4) cout << Hor1 << " and " << Hor2 << " are compatible Water signs.";
                }
                else {
                    cout << Hor1 << " and " << Hor2 << " are not compatible signs.";
                };
                return 0;
                break;
            }
            case '7':{
                int Num, n1, n10, n100, n1000;
                string O, T, H, Th;
                cout << "Arabic to Roman numeral conversion.\n";
                cout << "Input the integer to convert.\n";
                cin >> Num;
   
                n1 = Num % 10;
                n10 = (Num / 10) % 10;   
                n100 = (Num / 100) % 10;
                n1000 = (Num / 1000) % 10;
   
                if (n1 == 1) O = "I";
                if (n1 == 2) O = "II";
                if (n1 == 3) O = "III";
                if (n1 == 4) O = "IV";
                if (n1 == 5) O = "V";
                if (n1 == 6) O = "VI";
                if (n1 == 7) O = "VII";
                if (n1 == 8) O = "VIII";
                if (n1 == 9) O = "IX";
   
                if (n10 == 1) T = "X";
                if (n10 == 2) T = "XX";
                if (n10 == 3) T = "XXX";
                if (n10 == 4) T = "XL";
                if (n10 == 5) T = "L";
                if (n10 == 6) T = "LX";
                if (n10 == 7) T = "LXX";
                if (n10 == 8) T = "LXXX";
                if (n10 == 9) T = "XC";
   
                if (n100 == 1) H = "C";
                if (n100 == 2) H = "CC";
                if (n100 == 3) H = "CCC";
                if (n100 == 4) H = "CD";
                if (n100 == 5) H = "D";
                if (n100 == 6) H = "DC";
                if (n100 == 7) H = "DCC";
                if (n100 == 8) H = "DCCC";
                if (n100 == 9) H = "C";
   
                if (n1000 == 1) Th = "M";
                if (n1000 == 2) Th = "MM";
                if (n1000 == 3) Th = "MMM";
   
                if (Num < 1000) cout << Num << " is Out of Range!";
                if (Num > 3000) cout << Num << " is Out of Range!";
   
                if (Num >= 1000 && Num <= 3000)
                cout << Num << " is equal to " << Th << H << T << O;
   
                 return 0;
                break;
            }
            case '8':{
                float Hours, Price;
                 char Pack;
                cout << "ISP Bill\n";
                cout << "Input Package and Hours\n";
                cin >> Pack >> Hours;
   
                if (Pack == 'A') {
                    Price = 9.95;
                    if (Hours > 10) Price = Price + (2 * (Hours - 10));
                };
                if (Pack == 'B') {
                    Price = 14.95;
                    if (Hours > 20) Price = Price + (Hours - 20);
                };
                if (Pack == 'C') Price = 19.95;
   
                cout << "Bill = $ " << Price;
                 return 0;
                break;
            }
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
    }while(choice<=nProbs);

    return 0;
}