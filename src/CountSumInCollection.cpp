#include "CountSumInCollection.h"

CountSumInCollection::CountSumInCollection()
{
}

void CountSumInCollection::insertNew(int number){
    std::unordered_map<int, int>::iterator it = collection.find(number);
    if (it != collection.end()){
        it->second++;
    }
    else{
        collection.insert({number, 1});
        std::pair<int, int> newPair;
        newPair.first = number;
        newPair.second = 1;
        lis.headInsert(newPair);
    }
}


/** TODO
    linked list is working all i have to do is run a for loop
*/
int CountSumInCollection::findAllSumsAandB(){
    return 0;
}

void CountSumInCollection::printList(){
    Node<std::pair<int, int> >* curr = lis.returnHead();
    while (curr){
        std::cout << curr->data.first << " ";
        curr = lis.nextNode(curr);
    }
}

std::ostream& operator << (std::ostream &out, const CountSumInCollection &c){
    std::unordered_map<int, int>::const_iterator it = c.collection.begin();

    for (; it != c.collection.end(); it++){
        out << it->first << ":" << it->second << std::endl;
    }

    return out;
}
