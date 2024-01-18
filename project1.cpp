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
        array[i] = (rand() % 12) + 2;
    }
    for (int j = 0; j < 11; j++){
        int count = 0;
        for(int k = 0; k < rolls; k++){
            if((j+2) == array[k]){
            count++;
            }
        }
        cout << (j+2) << " was rolled " << count << " times" << endl;
    }
    
}
