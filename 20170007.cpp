#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int X, Y, num; X = Y = 0;
  int rand();
  while(X < 100 && Y < 100){
    cout << "Player 1 : Enter number between 1 : 10\n";
    cin >> num;
    X += num;
    cout << "Player 2 : Enter number between 1 : 10\n";
    cin >> num;
    Y += num;
  }
  if(X > Y)
    cout << "Player 1 wins!\n";
    else
      cout << "Player 2 wins!\n";
}

