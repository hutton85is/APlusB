#include <iostream>
#include <unordered_map>
#include "CountSumInCollection.h"

using namespace std;


int main()
{
    CountSumInCollection *c = new CountSumInCollection();
    unordered_map<int, int> collection;
    int n = 0, number = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> number;
        c->insertNew(number);
    }

    cout << *c << endl;

    return 0;
}
