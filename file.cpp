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
	
