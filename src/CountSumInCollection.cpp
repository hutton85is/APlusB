#include "CountSumInCollection.h"

CountSumInCollection::CountSumInCollection()
{
}

CountSumInCollection::CountSumInCollection(std::unordered_map<int, int> collection)
{
    this->collection = collection;
}

std::unordered_map<int, int> CountSumInCollection::getCollection(){
    return collection;
}

void CountSumInCollection::insertNew(int number){
    std::unordered_map<int, int>::iterator it = collection.find(number);
    if (it != collection.end()){
        it->second++;
    }
    else{
        collection.insert({number, 1});
    }
}

std::ostream& operator << (std::ostream &out, const CountSumInCollection &c){
    std::unordered_map<int, int>::const_iterator it = c.collection.begin();

    for (; it != c.collection.end(); it++){
        out << it->first << ":" << it->second << std::endl;
    }

    return out;
}
