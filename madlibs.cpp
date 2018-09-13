//Authors:Samual Morales 
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string adj1;
  string name;
  string noun1;
  string place;
  string noun2;
  string adj2;
  string noun3;
  int num;
  string obj;
  string sw;
  cout << "Please enter an adjective."<< endl;
  cin >> adj1;
  cout << "Please enter a name" << endl;
  cin >> name;
  cout << "Please enter a place." << endl;
  cin >> place;
  cout << "Please enter a noun." << endl;
  cin >> noun1;
  cout << "Please enter an object." << endl;
  cin >> obj;
  cout << "Please enter a noun." << endl;
  cin >> noun2;
  cout << "Please enter an adjective." << endl;
  cin >> adj2;
  cout << "Please enter a noun." << endl;
  cin >> noun3;
  cout << "Please enter a number." << endl;
  cin >> num;
  cout << "Please enter a silly word." << endl;
  cin >> sw;
  cout << adj1 << " " << name << " and his/her group of " << noun1 << " went to " << place << " to find, " << obj << endl;
  cout << "but they ended up finding " << noun2 << " instead. Suddenly, a " << adj2 << " " << noun3 << " arrives " << endl;
  cout << "and gives them " << num << " " << sw << endl;
  
  return 0;
}
