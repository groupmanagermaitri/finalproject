
using namespace std; 
  
typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<LL> vl; 
typedef vector<vl> vvl; 
  
double EPS = 1e-9; 
int INF = 1000000005; 
long long INFF = 1000000000000000005LL; 
double PI = acos(-1); 
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 }; 
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 }; 
  
#ifdef TESTING 
#define DEBUG fprintf(stderr, "====TESTING====\n") 
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl 
#define debug(...) fprintf(stderr, __VA_ARGS__) 
#else 
#define DEBUG 
#define VALUE(x) 
#define debug(...) 
#endif 
  
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define FOREACH(a, b) for (auto&(a) : (b)) 
#define REP(i, n) FOR(i, 0, n) 
#define REPN(i, n) FORN(i, 1, n) 
#define MAX(a, b) a = max(a, b) 
#define MIN(a, b) a = min(a, b) 
#define SQR(x) ((LL)(x) * (x)) 
#define RESET(a, b) memset(a, b, sizeof(a)) 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define ALL(v) v.begin(), v.end() 
#define ALLA(arr, sz) arr, arr + sz 
#define SIZE(v) (int)v.size() 
#define SORT(v) sort(ALL(v)) 
#define REVERSE(v) reverse(ALL(v)) 
#define SORTA(arr, sz) sort(ALLA(arr, sz)) 
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 
#define PERMUTE next_permutation 
#define TC(t) while (t--) 
  
inline string IntToString(LL a) 
{ 
    char x[100]; 
    sprintf(x, "%lld", a); 
    string s = x; 
    return s; 
} 
  
inline LL StringToInt(string a) 
{ 
    char x[100]; 
    LL res; 
    strcpy(x, a.c_str()); 
    sscanf(x, "%lld", &res); 
    return res; 
} 
=======
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
}

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

#include <stdio.h>
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
}int beerORliqour(int answer)
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

        return;}
  {
float hw, part, hwp; float total=0;
cout << " Scores are: ";
for(int i=1; i <= 11; i++)
{
infile >> hw; 
infile >> part;
hwp = hw + part;
cout << hwp << endl;
}
return total;
}

//score on the tests, maximum 50.
float compute_tests(float tests, istream& infile)
{

infile >> tests;
cout << " tests are " << tests << endl;
return 0.0;
} 



float hwp, tests;
//homework and participation + tests, maximum 100.
float compute_totalscore(float totalscore) 
{
totalscore = hwp + tests; 
cout << " Total score is " << totalscore << endl;
return 0.0;
}




if (totalscore >= 90)
{

cout << "A" << endl; }
else
{

if (totalscore >= 80)
{

cout << "B" << endl; }
else
{

if (totalscore >= 70)
{

cout << "C" << endl; }
else
{

if (totalscore >= 60)
{

cout << "D" << endl; }
else
{

if (totalscore < 60)
{

cout << "F" << endl; }
}
}
}
}



void printRecord (char name[20], char Id[8], float hwp, float tests, float totalscore, float grade, ostream& outfile)
{
outfile << "Name: "<< name << endl
<< "Id: "<< Id << endl
<< "Homework/Participation: " << hwp << endl
<< "Tests: " << tests << endl
<< "Total course score: " << totalscore << endl
<< "Letter Grade: " << grade << endl 
<<"-------------------------------------------------"<<endl<< endl;
}

int main()
{
ofstream outfile;
ifstream infile; 


char file_name[21], name[20], Id[20];

float hwp, tests, totalscore;
int deductions;

cout << "Please enter name of input file: ";
cin >> file_name;
infile.open(file_name);
if ( !infile)
{
// abandons operation with error mesg
cout << "Could not open input file \n";
return 0;
}


outfile.open("ScoreResult");
if ( !outfile)
{
cout << "Could not open output file \n";
return 0;
}


infile >> name; 
while(!infile.eof())
{
infile >> Id;
cout << name << " " << Id << endl;
hwp = compute_hw_participation(infile);
tests = compute_tests(tests, infile);
totalscore = compute_totalscore(totalscore, infile);
// grade
printRecord(name, Id, hwp, tests, totalscore, outfile);
infile >> name; 
}

return 0;
}

{
float hw, part, hwp; float total=0;
cout << " Scores are: ";
for(int i=1; i <= 11; i++)
{
infile >> hw; 
infile >> part;
hwp = hw + part;
cout << hwp << endl;
}
return total;
}

//score on the tests, maximum 50.
float compute_tests(float tests, istream& infile)
{

infile >> tests;
cout << " tests are " << tests << endl;
return 0.0;
} 



float hwp, tests;
//homework and participation + tests, maximum 100.
float compute_totalscore(float totalscore) 
{
totalscore = hwp + tests; 
cout << " Total score is " << totalscore << endl;
return 0.0;
}




if (totalscore >= 90)
{

cout << "A" << endl; }
else
{

if (totalscore >= 80)
{

cout << "B" << endl; }
else
{

if (totalscore >= 70)
{

cout << "C" << endl; }
else
{

if (totalscore >= 60)
{

cout << "D" << endl; }
else
{

if (totalscore < 60)
{

cout << "F" << endl; }
}
}
}
}



void printRecord (char name[20], char Id[8], float hwp, float tests, float totalscore, float grade, ostream& outfile)
{
outfile << "Name: "<< name << endl
<< "Id: "<< Id << endl
<< "Homework/Participation: " << hwp << endl
<< "Tests: " << tests << endl
<< "Total course score: " << totalscore << endl
<< "Letter Grade: " << grade << endl 
<<"-------------------------------------------------"<<endl<< endl;
}

int main()
{
ofstream outfile;
ifstream infile; 


char file_name[21], name[20], Id[20];

float hwp, tests, totalscore;
int deductions;

cout << "Please enter name of input file: ";
cin >> file_name;
infile.open(file_name);
if ( !infile)
{
// abandons operation with error mesg
cout << "Could not open input file \n";
return 0;
}


outfile.open("ScoreResult");
if ( !outfile)
{
cout << "Could not open output file \n";
return 0;
}


infile >> name; 
while(!infile.eof())
{
infile >> Id;
cout << name << " " << Id << endl;
hwp = compute_hw_participation(infile);
tests = compute_tests(tests, infile);
totalscore = compute_totalscore(totalscore, infile);
// grade
printRecord(name, Id, hwp, tests, totalscore, outfile);
infile >> name; 
}

return 0;
}

lass Graph
{
        int V; // No. of vertices
        list<int> *adj; // Pointer to an array containing adjacency lists
        bool isCyclicUtil(int v, bool visited[], int parent);
    public:
        Graph(int V); // Constructor
        void addEdge(int v, int w); // to add an edge to graph
        bool isCyclic(); // returns true if there is a cycle
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int> [V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
    adj[w].push_back(v); // Add v to w’s list.
}
 
// A recursive function that uses visited[] and parent to detect
// cycle in subgraph reachable from vertex v.
bool Graph::isCyclicUtil(int v, bool visited[], int parent)
{
    // Mark the current node as visited
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        // If an adjacent is not visited, then recur for that adjacent
        if (!visited[*i])
        {
            if (isCyclicUtil(*i, visited, v))
                return true;
        }
 
        // If an adjacent is visited and not parent of current vertex,
        // then there is a cycle.
        else if (*i != parent)
            return true;
    }
    return false;
}
 
// Returns true if the graph contains a cycle, else false.
bool Graph::isCyclic()
{
    // Mark all the vertices as not visited and not part of recursion
    // stack
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to detect cycle in different
    // DFS trees
    for (int u = 0; u < V; u++)
        if (!visited[u]) // Don't recur for u if it is already visited
            if (isCyclicUtil(u, visited, -1))
                return true;
 
    return false;
}
 
// Driver program to test above functions
int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
  struct node
{
    node_info *pt;
    node *next;
}*top = NULL, *p = NULL, *np = NULL;
struct node1
{
    node1 *link;
    node_info *pt1;
}*head = NULL, *m = NULL, *n = NULL, *np1 = NULL;
int c = 0;
bool flag = false;
void push(node_info *ptr)
{
    np = new node;
    np->pt = ptr;
    np->next = NULL;
    if (top == NULL)
    {
        top = np;
    }
    else
    {
        np->next = top;
        top = np;
    }
}
node_info *pop()
{
    if (top == NULL)
    {
        cout<<"underflow\n";
    }
    else
    {
        p = top;
        top = top->next;
        return(p->pt);
        delete(p);
    }
}
void store(node_info *ptr1)
{
    np1 = new node1;
    np1->pt1 = ptr1;
    np1->link = NULL;
    if (c == 0)
    {
        head = np1;
        m = head;
        m->link = NULL;
      g1.addEdge(0, 2);
    g1.addEdge(2, 0);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCyclic() ? cout << "Undirected Graph isn't a tree\n" : cout
            << "Undirected Graph is a tree\n";
 
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCyclic() ? cout << "Undirected Graph isn't a tree\n" : cout
            << "Undirected Graph is a tree\n";
 
    return 0;
}
