#ifndef Header_h
#define Header_h

#pragma once
template<typename T>
struct Node {
    Node *prev;
    Node *next;
    T data;
};
//class ListIterator;
template<typename T>
class List {
public:
    
    List();
    virtual ~List();
    List(const List& x);
    T& operator=(const List& x);
    void pushF(T data);
    void pushB(T data);
    void popF();
    void popB();
    T& front();
    T& back();
    void remove(T data);
    bool isempty() const;
private:
    Node<T> *head;
};
template<typename T>
static void deleteList(Node<T> *head) {
    Node<T> *p = head->next;
    while (p != head) {
        Node<T> *next = p->next;
        delete p;
        p = next;
    }
    delete head;
}
template<typename T>
static void copyList(const Node<T> *from, Node<T> *&to) {
    
    to = new Node<T>;
    to->next = to->prev = to;
    
    for (Node<T> *p = from->next; p != from; p = p->next) {
        Node<T> *t = new Node<T>;
        t->data = p->data;
        
        
        t->next = to;
        t->prev = to->prev;
        t->prev->next = t;
        t->next->prev = t;
    }
}

template<typename T>
List<T>::List() {
    head = new Node<T>;
    head->next = head->prev = head;
}

template<typename T>
List<T>::~List() {
    deleteList(head);
}

template<typename T>
List<T>::List(const List& x) {
    copyList(x.head, head);
}

template<typename T>
T& List<T>::operator=(const List& x) {
    if (this == &x) return *this;
    deleteList(head);
    copyList(x.head, head);
    return *this;
}

template<typename T>
void List<T>::pushF(T data) {
    Node<T> *p = new Node<T>;
    p->data = data;
    p->next = head->next;
    p->prev = head;
    p->next->prev = p;
    p->prev->next = p;
}

template<typename T>
void List<T>::pushB(T  data) {
    Node<T> *p = new Node<T>;
    p->data = data;
    p->next = head;
    p->prev = head->prev;
    p->next->prev = p;
    p->prev->next = p;
}

template<typename T>
void List<T>::popF() {
    Node<T> *p = head->next;
    p->prev->next = p->next;
    p->next->prev = p->prev;
    delete p;
}

template<typename T>
void List<T>::popB() {
    Node<T> *p = head->prev;
    p->prev->next = p->next;
    p->next->prev = p->prev;
    delete p;
}

template<typename T>
T& List<T>::front()  {
    if(!isempty())
        return head->next->data;
    else throw 404;
}

template<typename T>
T& List<T>::back()  {
    if (!isempty())
        return head->prev->data;
    else throw 404;
}

template<typename T>
void List<T>::remove(T data) {
    Node<T> *p = head->next;
    while (p != head) {
        Node<T> *next = p->next;
        if (p->data == data) {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            delete p;
        }
        p = next;
    }
}

template<typename T>
inline bool List<T>::isempty() const
{
    
    return head->next == head;
}



#endif /* Header_h */
