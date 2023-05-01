#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
struct Node
{
    T data;
    Node<T> *next;
    Node<T> *previous;
    Node(T data) : data(data), next(nullptr), previous(nullptr) {}
};

template <typename T>
class LinkedList
{
private:
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;
    Node<T> *previous = nullptr;

public:
    void Add(T data);

    Node<T> *GetList();

    void Remove(const T &data);

    void RemoveIndex(int i);

    int Count();
};

#endif // LINKEDLIST_H