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
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, temp;
	cout<<"Enter value of A and B : \n";
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"Number interchanged successfully..!!\n";
	cout<<"A = "<<a<<"\n"<<"B = "<<b;
	getch();
}return 0;}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int countp=0, countn=0, countz=0, arr[10], i;
	cout<<"Enter 10 numbers : ";
	for(i=0; i<10; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<10; i++)
	{
		if(arr[i]<0)
		{
			countn++;
		}else if(arr[i]==0)
		{
			countz++;
		}
		else
		{
			countp++;
		}
	}
	cout<<"Positive Numbers = "<<countp<<"\n";
	cout<<"Negative Numbers = "<<countn<<"\n";
	cout<<"Zero = "<<countz<<"\n";
	getch();
}
return 0
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, c, big;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	//let a is the biggest
	big=a;
	if(big<b)
	{
		if(b>c)
		{
			big=b;
		}
		else
		{
			big=c;
		}
	}
	else if(big<c)
	{
		if(c>b)
		{
			big=c;
		}
		else
		{
			big=b;
		}
	}else
	{
		big=a;
	}
	cout<<"Biggest number is "<<big;
	getch();
}return 0;
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float r, area, circum;
	cout<<"Enter the radius of the circle :";
	cin>>r;
	area=3.14*r*r;
	circum=2*3.14*r;
	cout<<"Area of the circle = "<<area<<"\nCircumference of the circle = "<<circum<<"\n";
	getch();
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int start, end, i, j, count=0;
	// to print all the prime number between any range
	// enter the two number (starting and ending)
	cout<<"Enter starting number : ";
	cin>>start;
	cout<<"Enter ending number : ";
	cin>>end;
	cout<<"Prime Number Between "<<start<<" and "<<end<<" is :\n";
	for(i=start; i<=end; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
			}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
	getch();
}return0;

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float fah, cel;
	cout<<"Enter temperature in Fahrenheit : ";
	cin>>fah;
	cel=(fah-32) / 1.8;
	cout<<"Temperature in Celsius = "<<cel;
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, res;
	cout<<"Enter two number :";
	cin>>a>>b;
	res=a+b;
	cout<<"\nAddition = "<<res;
	res=a-b;
	cout<<"\nSubtraction = "<<res;
	res=a*b;
	cout<<"\nMultiplication = "<<res;
	res=a/b;
	cout<<"\nDivision = "<<res;
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int yr;
	cout<<"Enter year :";
	cin>>yr;
	if((yr%4==0) && (yr%100!=0))
	{
		cout<<"This is a Leap Year";
	}
	else if((yr%100==0) && (yr%400==0))
	{
		cout<<"This is a Leap Year";
	}
	else if(yr%400==0)
	{
		cout<<"This is a Leap Year";
	}
	else
	{
		cout<<"This is not a Leap Year";
	}
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, i, tab;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"Table of "<<num<<" is \n\n";
	for(i=1; i<=10; i++)
	{
		tab=num*i;
		cout<<num<<" * "<<i<<" = "<<tab<<"\n";
	}
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, c, big;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	//let a is the biggest
	big=a;
	if(big<b)
	{
		if(b>c)
		{
			big=b;
		}
		else
		{
			big=c;
		}
	}
	else if(big<c)
	{
		if(c>b)
		{
			big=c;
		}
		else
		{
			big=b;
			big=b;
		}
	}
	else
	{
		big=a;
	}
	cout<<"Biggest number is "<<big;
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, rem, orig, rev=0;
	cout<<"Enter a number : ";
	cin>>num;
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	if(rev==orig)  // check if original number is equal to its reverse
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, temp;
	cout<<"Enter value of A and B : \n";
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"Number interchanged successfully..!!\n";
	cout<<"A = "<<a<<"\n"<<"B = "<<b;
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	int i;
	for(i=1; i<255; i++)
	{
		ch=i;
		cout<<i<<"-> "<<ch<<"\t";
	}
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=0, b=1, c=0, limit;
	cout<<"Upto How many term ? ";
	cin>>limit;
	cout<<"Fabonacci Series : "<<a<<" "<<b<<" ";  // first two term
	c=a+b;
	limit=limit-2;   // decrease the limit by 2. since two numbers already printed
	while(limit)
	{
		cout<<c<<" ";
		a=b;
		b=c;
		c=a+b;
		limit--;
	}
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num1, num2, i, n, rem, temp, count=0;
	//enter the interval (enter the two number)
	cout<<"Enter Starting Number : ";
	cin>>num1;
	cout<<"Enter Ending Number : ";
	cin>>num2;
	for(i=num1+1; i<num2; i++)
	{
		temp=i;
		n=0;
		while(temp!=0)
		{
			rem=temp%10;
			n = n + rem*rem*rem;
			temp=temp/10;
		}
		if(i==n)
		{
			if(count==0)
			{
				cout<<"Armstrong numbers between the given interval are : \n";
			}
			cout<<i<<" ";
			count++;
		}
	}}
	if(count==0)
	{
		cout<<"Armstrong number not found between the given interval";
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
	float cen, fah;
	cout<<"Enter temperature in Celsius : ";
	cin>>cen;
	fah=(1.8 * cen) + 32;
	cout<<"\nTemperature in Fahrenheit = "<<fah;
	getch();
}return 0;
}
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int decnum, rem, quot;
	int binnum[100], i=1, j;
	cout<<"Enter any decimal number : ";
	cin>>decnum;
	quot=decnum;
	while(quot!=0)
	{
		binnum[i++]=quot%2;
		quot=quot/2;
	}
	cout<<"Equivalent binary value of "<<decnum<<" :\n";
	for(j=i-1; j>0; j--)
	{
		cout<<binnum[j];
	}
	getch();
}
