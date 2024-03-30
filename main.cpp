#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  // Seed the random number generator with the current time
  srand(time(0));

  // Generate a random number between 1 and 5
  int randNum = rand() % 5 + 1;

  // Use a switch statement to determine the prize based on the random number
  switch (randNum)
  {
  case 1:
    cout << "You win a bumper sticker!\n";
    break;
  case 2:
    cout << "You win a t-shirt!\n";
    break;
  case 3:
    cout << "You win a free lunch!\n";
    break;
  case 4:
    cout << "You win a gift card!\n";
    break;
  case 5:
    cout << "You win a concert ticket!\n";
    break;
  }

  // Return 0 to indicate successful execution
  return 0;
}
