#include "CountSumInCollection.h"

CountSumInCollection::CountSumInCollection(std::unordered_map<int, int> collection)
{
    this->collection = collection;
}

std::unordered_map<int, int> CountSumInCollection::getCollection(){
    return collection;
}

void CountSumInCollection::write(){
    std::unordered_map<int, int>::iterator it = collection.begin();
    for (; it != collection.end(); it++){
        std::cout << it->first << ":" << it->second << std::endl;
    }
}

std::ostream& operator << (std::ostream &out, const CountSumInCollection &c){
    std::unordered_map<int, int>::const_iterator it = c.collection.begin();

    for (; it != c.collection.end(); it++){
        out << it->first << ":" << it->second << std::endl;
    }

    return out;
}
