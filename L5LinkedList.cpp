#include <iostream>
using namespace std;

struct Element {
    int data;
    Element *next;
};

void appendElement (Element **list, Element **tail, int data) {
    Element *e = new Element;
    e -> data = data;
    e -> next = NULL;   //Pointer is initially null (address 0)

    if(!(*list)) {
        *list = e;  //List is empty
        *tail = e;
    } 
    else {
        (*tail)->next = e;
        *tail = e;  //Append to end of list
    }
}

void printList (Element **list) {
    while(*list) {
        cout << (*list)->data << " ";
        *list = (*list)->next;
    }
}

void deleteList(Element **list) {
    Element *next;
    while(*list) {
        next = (*list) -> next;
        delete *list;
        *list = next;
    }
}

int main() {
    Element *list = NULL;
    Element *tail = NULL;
    appendElement (&list, &tail, 5);
    appendElement (&list, &tail, 10);
    appendElement (&list, &tail, 15);
    printList(&list);
    deleteList(&list);
    cout << endl;
    return 0;
}