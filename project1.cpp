#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>

using namespace std;

int main() {
    int rolls = 0;
    cout << "How many rolls?" << endl;
    cin >> rolls;
    cout << "Simulating " << rolls << " rolls..." << endl;
    int * array = nullptr;

    array = new int[rolls];

    srand(time(NULL));

    for (int i = 0; i < rolls; i++){
        array[i] = (rand() % 11) + 2;
    }
    for (int i = 0; i < rolls; i++){
        cout << array[i] << endl;
    }

}