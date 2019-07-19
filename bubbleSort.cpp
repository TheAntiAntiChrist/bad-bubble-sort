#include <iostream>
#include <vector>

using namespace std;

//#define PI 3.14159265 //constants can be defined using "#define [CONSTANT NAME] [CONSTANT VALUE]"

bool checkSorted(vector<int> array) {
    bool isSorted = true;
    for (int x=0;x<array.size()-1;x++) {
        if (array[x] > array[x+1]) {
            isSorted = false;
        }
    }
    return isSorted;
}

int main()
{
    vector<int> toBeSorted = {26,34,23,86,403,12,9,77,99,245,56,233,212,127,124,912}; //vectors are very similar to the arrays used in python - dynamically sized depending the amount of items currently stored in it (it's size does not have to be declared w/ it)
    int currentIteration = 0;
    while (!checkSorted(toBeSorted))
    {
        cout << "Current Iteration: " << currentIteration << "\n";
        currentIteration++;
        for (int x=0;x<toBeSorted.size()-1;x++) { //loops thru list
            if (toBeSorted[x] > toBeSorted[x+1]) {
                int tempContainer = toBeSorted[x];
                toBeSorted[x] = toBeSorted[x+1];
                toBeSorted[x+1] = tempContainer;
            }
        }
        for (int x=0;x<toBeSorted.size();x++) {
            cout << toBeSorted[x] << "\n";
        }
    }
    cout << "Sorted list: ";
    for (int x=0;x<toBeSorted.size();x++) {
            cout << toBeSorted[x] << ", ";
        }
    return 0;
}