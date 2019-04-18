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
	for(i=0;i<n;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	cout<<"Sum of all the "<<n<<" number is "<<sum;
	getch();
}
#include <bits/stdc++.h>
using namespace std;

// Returns length of maximum length subsequence
int findSubsequence(int arr[], int n)
{

    // To store the length of the
    // maximum length subsequence
    int len = 1;

    // To store current element arr[i]
    int tmp;

    int i, j, d;

    // To store the length of the sub-sequence
    // ending at index i and having common digit d
    int dp[n][10];

    memset(dp, 0, sizeof(dp));

    // To store digits present in current element
    int cnt[10];

    // To store length of maximum length subsequence
    // ending at index i
    int locMax;
    tmp = arr[0];
    while (tmp > 0) {
        dp[0][tmp % 10] = 1;
        tmp /= 10;
    }

    // Find digits of each element, then find length
    // of subsequence for each digit and then find
    // local maximum
    for (i = 1; i < n; i++) {
        tmp = arr[i];
        locMax = 1;
        memset(cnt, 0, sizeof(cnt));

        // Find digits in current element
        while (tmp > 0) {
            cnt[tmp % 10] = 1;
            tmp /= 10;
        }

        // For each digit present find length of
        // subsequence and find local maximum
        for (d = 0; d <= 9; d++) {
            if (cnt[d]) {
                dp[i][d] = 1;
                for (j = 0; j < i; j++) {
                    dp[i][d] = max(dp[i][d], dp[j][d] + 1);
                    locMax = max(dp[i][d], locMax);
                }   }
        }

        // Update value of dp[i][d] for each digit
        // present in current element to local maximum
        // found.
        for (d = 0; d <= 9; d++) {
            if (cnt[d]) {
                dp[i][d] = locMax;
            }
        }

        // Update maximum length with local maximum
        len = max(len, locMax);
    }

    return len;
}

// Driver code
int main()
{
    int arr[] = { 1, 12, 44, 29, 33, 96, 89 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findSubsequence(arr, n);

    return 0;
} #include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, rev=0, rem;
	cout<<"Enter a number : ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"Reverse = "<<rev;
	getch();
}
