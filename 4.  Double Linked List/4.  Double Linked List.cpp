#include <iostream>

using namespace std;

// Struktur node
struct Node {
    int data;
    Node* next;
    Node* before;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->before = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan node baru di awal linked list
void pushHead(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == nullptr) {
        *head = newNode;
        newNode->next = nullptr;
        newNode->before = nullptr;
    }
    else {
        newNode->next = *head;
        (*head)->before = newNode;
        *head = newNode;
    }
}

// Fungsi untuk menampilkan linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Menambahkan beberapa node ke linked list
    pushHead(&head, 1);
    pushHead(&head, 2);
    pushHead(&head, 3);

    // Menampilkan linked list
    printList(head);

    return 0;
}
// Kelebihan dan Kekurangan
//  Kelebihan double linked list adalah :
// - Dapat menampung data yang besar dan kompleks.
// - Dapat menampung data yang tidak dapat diurutkan secara ascending atau descending.
// - Dapat menampung data yang memiliki relasi antar node yang kompleks.

//  Kekurangan double linked list adalah :
// - Operasi tambah, hapus, dan mencari node dapat memiliki kompleksitas waktu yang tinggi.
// - Linked list dapat menjadi tidak efisien jika node - node dalam linked list sangat banyak.