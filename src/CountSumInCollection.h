#ifndef COUNTSUMINCOLLECTION_H
#define COUNTSUMINCOLLECTION_H

#include <iostream>
#include <unordered_map>
#include "SinglyLinkedList.h"
#include <utility>

class CountSumInCollection
{
    public:
        CountSumInCollection();

        //  Insert new number to unordered map, if number already exists increase counter in container
        void insertNew(int number);

        //  Find all possible sums of two numbers in a collection, that also equal another number found in the collection
        int findAllSumsAandB();

        //  print list
        void printList();

        //  friend function to write out all numbers in unordered map
        friend std::ostream& operator << (std::ostream &out, const CountSumInCollection &c);

    private:
        //  container for all numbers
        std::unordered_map<int, int> collection;

        //  single linked list containing collection
        SinglyLinkedList<std::pair<int, int> > lis;
};

#endif // COUNTSUMINCOLLECTION_H
