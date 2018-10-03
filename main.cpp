#include <iostream>
#include <map>

using namespace std;

map<int, int> collection;

int negativeSum(map<int, int> collection){
    for (map<int, int>::const_iterator it = collection.begin();it->first < 1; it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}

int positiveSum();

int posNegSum();

int countPossibleSum();

int main()
{
    int n = 0, number = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> number;
        if (!collection[number]){
            collection[number] = 1;
        }
        else{
            collection[number]++;
        }
    }

    negativeSum(collection);
/*
    for (map<int, int>::const_iterator it = collection.begin(); it != collection.end(); it++){
        cout << it->first << endl;
    }
*/

    return 0;
}
