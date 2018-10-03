#include <iostream>
#include <unordered_map>
#include "CountSumInCollection.h"

using namespace std;


int main()
{
    unordered_map<int, int> collection;
    int n = 0, number = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> number;
        collection.insert({number, 1});
    }

    CountSumInCollection *c = new CountSumInCollection(collection);

    c->write();

    //cout << c << endl;

    return 0;
}
