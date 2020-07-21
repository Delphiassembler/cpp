#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int unsigned a, b, c, d;
  int ca, db;
   cin >> a >> b >> c >> d;
 if (a <= 8 && b <=8 && c <= 8 && d <= 8 && a > 0 && b > 0 && c > 0 && d > 0)
  {
      ca = c-a;
      db = d-b;
      
  if (ca >= 0)
  {ca = ca;}
  else if (ca < 0)
  {ca = ca*(-1);}
  
  if (db >= 0)
  {db = db;}
  else if (db < 0)
  {db = db*(-1);}
  
  if ((a != c || b != d) && ((1==ca && 1== db) || (2==ca && 2== db) || (3==ca && 3== db) || (4 ==ca && 4 == db) || (5==ca && 5== db)|| (6==ca && 6== db)|| (7==ca && 7 == db)))
  {cout << "YES" << endl;}
  else if (a == c || b == d)
  {cout << "YES" << endl;}
  else
  {cout << "NO" << endl;}
  }
 return 0;
}
