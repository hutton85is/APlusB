#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>

//  Struct containing a node with a pointer to the next node in linked list
template <typename T>
struct Node{
    Node* next;
    T data;
};

template <typename T>
class SinglyLinkedList
{
    public:
        //  Constructor does not do anything but create a new instance
        SinglyLinkedList(){
            head = nullptr;
            tail = nullptr;
            sz = 0;
        }

        //  Destructor will delete the single linked list to prevent memory loss
        virtual ~SinglyLinkedList(){
            while (head){
                headRemove();
            }
        }

        //  insert new item infront of list
        void headInsert(T &data){
            if (!head){
                head = new Node<T>();
                head->data = data;
                tail = head;
                tail->next = nullptr;
            }
            else{
                Node<T>* newHead = new Node<T>();
                newHead->data = data;
                newHead->next = head;
                head = newHead;
            }
            sz++;
        }

        //  Remove and delete first element
        void headRemove(){
            if (head){
                Node<T>* deleteHead = head;
                head = head->next;
                delete deleteHead;
                sz--;
            }
        }

        //  return next element after 'node'
        Node<T>* nextNode(Node<T>* node){
            return node->next;
        }

        //  return pointer to head
        Node<T>* returnHead(){
            return head;
        }

        //  return pointer to tail
        Node<T>* returnTail(){
            return tail;
        }

        //  return list size
        int returnSize(){
            return sz;
        }

    private:
        Node<T>* head;
        Node<T>* tail;
        int sz;
};

#endif // SINGLYLINKEDLIST_H
