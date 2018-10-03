#ifndef COUNTSUMINCOLLECTION_H
#define COUNTSUMINCOLLECTION_H

#include <iostream>
#include <unordered_map>

class CountSumInCollection
{
    public:
        CountSumInCollection();
        CountSumInCollection(std::unordered_map<int, int> collection);

        void insertNew(int number);

        std::unordered_map<int, int> getCollection();

        friend std::ostream& operator << (std::ostream &out, const CountSumInCollection &c);

    private:
        std::unordered_map<int, int> collection;
};

#endif // COUNTSUMINCOLLECTION_H
