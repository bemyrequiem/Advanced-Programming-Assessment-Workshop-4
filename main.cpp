#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

class Animal
{
public:
	virtual void speak(void) = 0;
};

class Sheep : public Animal
{
public:
	void speak(void) {
		cout << "Sheep says: \t\tbaa!" << endl;
	}
};

class Cow : public Animal
{
public:
	virtual void speak(void) {
		cout << "Cow says: \t\tmoo!" << endl;
	}
};

class Frisian : public Cow
{
	void speak(void) {
		cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
	}
};

int main() {
	Sheep sheep;
	Cow cow;
	Frisian frisian_cow;

	Animal* sheep_pointer = &sheep;
	Animal* cow_pointer = &cow;
	Animal* frisian_cow_pointer = &frisian_cow;

	std::vector<Animal*> animals;

	int amount;

	cout << "How many sheep? " << endl;
	cin >> amount;
	for (int i = 0; i < amount; i++) {
		animals.push_back(sheep_pointer);
	}

	cout << "How many cows? " << endl;
	cin >> amount;
	for (int i = 0; i < amount; i++) {
		animals.push_back(cow_pointer);
	}

	cout << "How many frisian cows? " << endl;
	cin >> amount;
	for (int i = 0; i < amount; i++) {
		animals.push_back(frisian_cow_pointer);
	}

	for (int a = 0; a < animals.size(); a++) {
		animals[a]->speak();
	}
}