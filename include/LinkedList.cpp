#include "LinkedList.h"

template <typename T>
void LinkedList<T>::Add(T data)
{
    Node<T> *node = new Node<T>(data);
    if (head == nullptr)
    {
        head = node;
        tail = node;
        previous = node;
    }
    else
    {
        tail->next = node;
        tail = node;
        tail->previous = previous;
        previous = node;
    }
}

template <typename T>
Node<T> *LinkedList<T>::GetList()
{
    return head;
}

template <typename T>
void LinkedList<T>::Remove(const T &data)
{
    if (head != NULL)
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                Node<T> *tempPre = temp->previous;
                Node<T> *tempNext = temp->next;

                if (head == temp)
                {
                    *head = *(tempNext);
                }
                else if (tail == temp)
                {
                    tempPre->next = NULL;
                }
                else
                {
                    tempPre->next = tempNext;
                    tempNext->previous = tempPre;
                }

                free(tempPre);
                free(tempNext);
            }

            temp = temp->next;
        }

        free(temp);
    }
}

template <typename T>
void LinkedList<T>::RemoveIndex(int index)
{
    int listCount = Count();
    if (head != NULL)
    {
        if (index > listCount - 1)
        {
            cout << "List count is less than remove index" << endl;
            return;
        }

        int count = 0;
        Node<T> *removeNode = head;
        while (count <= listCount - 1)
        {
            if (count == index)
            {
                Remove(removeNode->data);
                return;
            }
            count++;
            removeNode = removeNode->next;
        }
        free(removeNode);
    }
}

template <typename T>
int LinkedList<T>::Count()
{
    int count = 0;
    if (head != NULL)
    {
        Node<T> *list = head;
        while (list != NULL)
        {
            count++;
            list = list->next;
        }
    }
    return count;
}
