# linked-list

## C++ Linked list library

This is a linked list library. You can add, list and delete any type of data you want.

### Compilers recommended

Windows: Visual Studio 2015+

### Usage

#### Create List

```
    LinkedList <int> newList;
    newList.Add(5);
    newList.Add(10);
    newList.Add(11);
    newList.Add(12);
```

#### Show List
```
    void ShowListOFPrimitiveType(Node <int>* list)
    {
        while(list != NULL)
        {
            cout << list->data << endl;
            list = list->next;
        }
    }
    ....
    Node <int>* head = newList.GetList();
    // Show list elements
    ShowListOFPrimitiveType(head);
```
#### Get Count
```
    int count = newList.Count();
```
#### Remove Item
```
    newList.Remove(10);
```
#### Remove by index
```
    int indexCount = 1;
    newList.RemoveIndex(indexCount);
```
### Note

If you are planning to create a list of structs, it is essential to override the "==" operator in the struct.
```
    struct Student
    {
        int number;
        string name;
        string surname;
        string className;

    bool operator==(const Student& other) const {
            return number == other.number && name == other.name &&
            surname == other.surname && className == other.className;
        }
    };
```
