#include <iostream>

#include <cstdlib>

#include <vector>



using namespace std;



class Sorter {

public:

	void create(vector<int> input) {

		storage = input;

	}

	void selectionsort_ascending() {

		for (int i = 0; i < storage.size(); i++) {

			for (int j = i + 1; j < storage.size(); j++) {

				if (storage[i] < storage[j]) {

					int temp;

					temp = storage[i];

					storage[i] = storage[j];

					storage[j] = temp;

				}

			}

		}

	}

	void selectionsort_descending() {

		for (int i = 0; i < storage.size(); i++) {

			for (int j = i + 1; j < storage.size(); j++) {

				if (storage[i] > storage[j]) {

					int temp;

					temp = storage[i];

					storage[i] = storage[j];

					storage[j] = temp;

				}

			}

		}

	}

	void print() {

		for (int i = 0; i < storage.size(); i++)

			cout << storage[i] << " ";

		cout << endl;

	}

private:

	vector<int> storage;

};

int main() {

	vector<int> original;

	original.push_back(4);

	original.push_back(2);

	original.push_back(1);

	original.push_back(3);

	Sorter sorter;

	sorter.create(original);

	sorter.print();

	sorter.selectionsort_ascending();

	sorter.print();

	sorter.selectionsort_descending();

	sorter.print();

	return 0;

}

