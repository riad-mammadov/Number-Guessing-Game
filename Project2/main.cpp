#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(nullptr));
	int n = 25;
	int count = 1;
	int secret = rand() % n + 1;
	cout << "Guess a number between 1 and " << n << ": ";
	int guess;
	cin >> guess;
	while (guess != secret) {

		if (guess < secret)
		{
			cout << "Too low! Guess again: ";
			cin >> guess;
			count = count + 1;
		}

		else if (guess > secret)
		{
			cout << "Too high! Guess again: ";
			cin >> guess;
			count = count + 1;

		}
	}
		cout << "Correct!\n";
		cout << "You made " << count << " number of guesses";
		return 0;
	
}

