// 1. Struktur Node
// Tentukan node menggunakan struct :

struct Node {
    int data;
    Node* next;
};
//Basic Operations
// 1. Initialization:
//Initialize the head pointer to nullptr.
Node* head = nullptr;

// 2. Insertion at the Beginning :
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
// 3. Penyisipan di Akhir :
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
// 4. Deletion from the Beginning ( Penghapusan dari Awal ):
void deleteFromBeginning(Node*& head) {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// 5. Deletion from the End ( Penghapusan dari Akhir ): 
void deleteFromEnd(Node*& head) {
    if (head != nullptr) {
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        }
        else {
            Node* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }
}

// 6. Traversal:
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}
// 7. Search for a Value (Cari Nilai) :

bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
