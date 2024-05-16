#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Fungsi partisi
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Memilih elemen terakhir sebagai pivot
    int i = (low - 1);      // Indeks elemen yang lebih kecil

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fungsi utama untuk mengurutkan menggunakan Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Fungsi utama
int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Array yang telah diurutkan: \n";
    printArray(arr, n);
    return 0;
}
// Penjelasan Implementasi
// 1. Fungsi swap :
// Menukar nilai dua elemen array.
// 
// 2. Fungsi partition :
//Memilih elemen terakhir sebagai pivot.
// Mengatur ulang array sehingga elemen yang lebih kecil dari pivot berada di sebelah kiri, dan elemen yang lebih besar berada di sebelah kanan.
// Mengembalikan indeks dari pivot setelah partisi.

// 3. Fungsi quickSort :
// Memanggil fungsi partition untuk menemukan posisi pivot.
// Melakukan panggilan rekursif pada sub - array di kiri dan kanan pivot.

// 4.  Fungsi printArray :
// Mencetak elemen - elemen array.

// 5. Fungsi main :
// Mendefinisikan array dan ukurannya.
// Memanggil fungsi quickSort untuk mengurutkan array.
// Mencetak array yang telah diurutkan.