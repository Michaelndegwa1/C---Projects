#include <iostream>
#include <cmath>
using namespace std;

int main() {
int myAge;
int votingAge = 18;
bool isCitizen = true;
cout<< "Input you age:";
cin >> myAge;
if (myAge >= votingAge) {
  cout << "Old enough to vote! \n";
  if (isCitizen) {
    cout << "And you are a citizen, so you can vote!\n";
  } else {
    cout << "But you must be a citizen to vote.\n";
  }
} else {
  cout << "Not old enough to vote.";
}
  return 0;
}
