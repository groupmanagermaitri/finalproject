#include <iostream>
using namespace std;
int main(){
   int num=90;
   /* Nested if statement. An if statement
    * inside another if body
    */
   if( num < 100 ){
      cout<<"number is less than 100"<<endl;
      if(num > 50){
         cout<<"number is greater than 50";
      } 
   }
   return 0;
   #include <iostream>
using namespace std;

void Store(){

     cout << "The Item store is not finished yet\n" << endl;

     int Mainmenu();
     Mainmenu();

     }

void Character(){

     int PlayerHp, PlayerStr, PlayerMana;

     cout << "Your character has:\n\n";

     cout << PlayerHp << " Health" << endl;
     cout << PlayerStr << " Strength" << endl;
     cout << PlayerMana << " Mana" << endl;

     cout << endl;

     int Mainmenu();
     Mainmenu();
     }

void Inventory(){

     cout << "Your inventory contains:\n" << endl;

     int Mainmenu();
     Mainmenu();

     }

void Wilderness(){
      cout << "You search the Jungle and find:\n" << endl;

     string Creatures[10];

     Creatures[0] = "1";
     Creatures[1] = "2";
     Creatures[2] = "3";
     Creatures[3] = "4";

     cout << Creatures << " Is really dangerous " << endl;

     int Mainmenu();
     Mainmenu();
     }

void Mainmenu(){

     string choice;

     cout << "1: Attack creature" << endl;
     cout << "2: Buy equipment" << endl;
     cout << "3: Inventory" << endl;
     cout << "4: Stats" << endl;

          // invalid option returns to this
          InvalidOption:

     cin >> choice;
     if (choice == "1"){
                Wilderness ();
                }
     else if (choice == "2"){
                     Store();
                     }
     else if (choice == "3"){
                     Inventory();
                     }
     else if (choice == "4"){
                     Character();
                     }
     else{
          cout << "You have not chosen a valid option" << endl;
          goto InvalidOption;
     }



     }

int main()
{
    int PlayerHp = 100, PlayerStr = 20, PlayerMana = 50;
    Mainmenu ();
}
Edit & Run
return 0;
 return sum;
}

// Driver Code
int main()
{
    int arr[] = { 10, 20, 20, 10, 40, 40, 10 };

    int N = sizeof(arr) / sizeof(arr[0]);

    cout << findSum(arr, N);

    return 0;
    return 0;
}
