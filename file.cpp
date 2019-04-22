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

     }

void Inventory(){

     cout << "Your inventory cont
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
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark[5], i;
	float sum=0;
	cout<<"Enter marks obtained in Physics, Chemistry, Maths, CS, English :";
	for(i=0; i<5; i++)
	{
		cin>>mark[i];
		sum=sum+mark[i];
	}
	float avg=sum/5;
	float perc;
	perc=(sum/500)*100;
	cout<<"Average Marks = "<<avg;
	cout<<"\nPercentage = "<<perc<<"%";
	getch();
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n, i, arr[50], sum=0;
	cout<<"How many number you want to enter ?\n";
	cin>>n;
	cout<<"Enter "<<n<<" Numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	int armean=sum/n;
	cout<<"Arithmetic Mean = "<<armean;
	getch();
}
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	float a, b, res;
	char choice, ch;
	do
	{
		cout<<"1.Addition\n";
		cout<<"2.Subtraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cout<<"5.Exit\n\n";
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case '1' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a+b;
				cout<<"Result = "<<res;
				break;
			case '2' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a-b;
				cout<<"Result = "<<res;
				break;
			case '3' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a*b;
				cout<<"Result = "<<res;
				break;
			case '4' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a/b;
				cout<<"Result = "<<res;
				break;
			case '5' : exit(0);
				break;
			default : cout<<"Wrong Choice..!!";
				break;
		}
		cout<<"\n------------------------------------\n";
	}while(choice!=5 && choice!=getchar());
	getch();

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int len, bre, peri, area;
	cout<<"Enter length and breadth of the rectangle :";
	cin>>len>>bre;
	area=len*bre;
	peri=(2*len)+(2*bre);
	cout<<"Area = "<<area<<"\tPerimeter="<<peri;
	getch();
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int mark[5], i;
	float sum=0,avg;
	cout<<"Enter marks obtained in 5 subjects :";
	for(i=0; i<5; i++)
	{
		cin>>mark[i];
		sum=sum+mark[i];
	}
	avg=sum/5;
	cout<<"Your Grade is ";
	if(avg>80)
	{
		cout<<"A";
	}
	else if(avg>60 && avg<=80)
	{
		cout<<"B";
	}
	else if(avg>40 && avg<=60)
	{
		cout<<"C";
	}
	else
	{
		cout<<"D";
	}
	getch();
}
return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, x, y, t, hcf, lcm;
	cout<<"Enter two number : ";
	cin>>x>>y;
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
	lcm=(x*y)/hcf;
	cout<<"HCF = "<<hcf<<"\n"
	cout<<"LCM = "<<lcm<<"\n";
	getch();
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, n, sum=0, num;
	cout<<"How many number you want to enter and add them ?";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
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


#include <iostream>
using namespace std;


// function prototypes
void myname();                                  // author info
int beerORliqour(int);                          // asks if beer or hard a
float mlTOoz(float, int);                       // converts mL to Oz
float containerVolume(float, int, int);         // calculate volume
int beer(int);                                  // calculate total case volume if beer
void conclusion(float, float, float, int, int); // outputs calculations

int main()
{
        char convertyn;                 // convert ml to oz? (y or n)
        float volume;                   // volume of container(s)
        int yn;                         // beer yes or no (1 or 2)
        int beercase;                   // number of beers in a case
        float proof, price;             // user inputs
        float content, worth;           // calculations

        beercase = 0;                   // set beercase and volume to 0, had
        volume = 0;                     // to do this to get program to work


        myname();

        yn = beerORliqour(yn);          // declare yn for use in other fucntions
        if (yn == 1)                    // only do if calculating for beer
        {
        cout << "Enter the number of beers in a case: ";
        cin >> beercase;                // input # beers in a case
        cout << endl;
        }


        volume = mlTOoz(volume, yn);    // run function to convert mL to Oz, if wanted.
                                        // if wanted, output volume. if not, volume
                                        // remains '0'.

        if (volume == 0)                // only run if volume has not been entered yet
        volume = containerVolume(volume, yn, beercase);
                                        // run function to figure out volume.


        cout << "Enter the proof (2x the listed alcohol content by %volume): ";
        cin >> proof;                   // user input proof
        cout << endl;

        cout << "Enter the price: $";
        cin >> price;                   // user input price
        cout << endl;


        conclusion(volume, proof, price, yn, beercase); // conclusion


        return 0;


int beerORliqour(int answer)
{
        cout << "Enter 1 for beer. Enter 2 for everything else. ";
        cin >> answer;          // input 1 for beer, 2 for anything else
        cout << endl;

        return(answer);         // returns user input to main. is called "yn" in main function
}
float mlTOoz(float v, int beeryn)
{
        char convertyn;                 // need help converting, y or n;
        float mL;                       // user input milliliters

        cout << "Volume input must be in ounces. Do you ";
        cout << "need help converting from milliliters ";
        cout << "to Oz? (Y or N) ";
        cin >> convertyn;
        cout << endl;

        switch (convertyn)
        {
                case 'Y': case 'y':
                        if (beeryn == 1)
                        cout << "Enter the volume of one can of beer: ";
                        else if (beeryn == 2)
                        cout << "Enter the volume: ";

                        cin >> mL;
                        cout << endl;
                        
                        v = mL * 0.0338140226;
                        cout << mL << " milliliters is equal to " << v << " ounces." << endl;
                break;
                case 'N': case 'n':
                v = 0;                  // if no need to convert mL to Oz, volume remains
                                        // '0' for now. Will be changed with next function
        }



        return(v);                      // return v to main. is called "volume" in main function"
}
float containerVolume(float v, int beeryn, int beerc)
{
        float oz;                       // local float used for calculating volume
        if (beeryn == 1)                // run if beer
        {
        cout << "Enter the volume of one can of beer: ";
        cin >> oz;
        cout << endl;
        v = oz * beerc;                 // Oz must be multiplied by # cans in case to get total volume
        }
        else if (beeryn == 2)           // run if other
        {
        cout << "Enter the volume in ounces: ";
        cin >> v;
        cout << endl;
        }

        return(v);
}
void conclusion(float v, float prf, float prc, int beeryn, int cb)
{
        float costcan;                  // cost of one can of beer
        float contcan;                  // alcohol content of one can of beer
        float c;                        // content
        float w;                        // worth

        c = ((v) * ((prf) / 200));      // content = volume * (proof / 200)
                                        // units of Oz pure alcohol content
        w = ((prc) / (c));              // worth = price / content
                                        // units of $ per ounce of pure alcohol

        costcan = ((prc) / (cb));       // cost per can = price / # beers in case
        contcan = ((v) / (cb)) * ((prf) / 200); // contents of can = (volume / # beers in case) * (proof /200)

        cout << "beeryn is " << beeryn << endl;

        if (beeryn == 1)
        {
                cout << "There are " << c << " total ounces of pure alcohol present, ";
                cout << "which you are paying for at a rate of $" << w;
                cout << " per ounce of pure alcohol." << endl;
                cout << "Each can costs approximately $" << costcan << endl;
                cout << "Each can contains approximately " << contcan;
                cout << " ounces of pure alcohol" << endl;
        }
        if (beeryn == 2)
        {
                cout << "There are " << c << " total ounces of pure alcohol present, ";
                cout << "which you are paying for at a rate of $" << w;
                cout << " per ounce of pure alcohol." << endl;
                if (w < 1)
                cout << "WOW!!! That's cheap!" << endl;         // nested if statement
        }
}
void myname()
{
        cout << endl << endl << endl;
        cout << "***********************************************************" << endl;
        cout << "* This program calculates how much you are paying for an  *" << endl;
        cout << "* ounce of pure alcohol when you buy booze. This can be   *" << endl;
        cout << "* used as an effective way of comparing the value of one  *" << endl;
        cout << "* spirit versus another. Have fun and drink responsibly!  *" << endl;
        cout << "***********************************************************" << endl;
        cout << endl;
        cout << "          **************************************" << endl;
        cout << "          *              Created by            *" << endl;
        cout << "          *           Samuel xxxxxxxxx         *" << endl;
        cout << "          *   xxxxxxxxxxxx@xxxxxxxxxxxxxx.edu  *" << endl;
        cout << "          **************************************" << endl;
        cout << endl << endl << endl;

        return;
}


Edit & Run
}	
