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

    array = new int[11];

    srand(time(NULL));

    for (int i = 0; i < rolls; i++){
        int roll1 = (rand() % 6) + 1;
        int roll2 = (rand() % 6) + 1;
        int total = roll1+roll2;
        array[total-2]++;
    }

    for(int i = 0; i < 11; i++){
        cout << i+2 << " was rolled " << array[i] << " times" << endl;
    }
    
}
