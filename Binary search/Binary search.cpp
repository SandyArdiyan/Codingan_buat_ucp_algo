#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Elemen ditemukan
        }

        if (arr[mid] < target) {
            low = mid + 1;  // Pencarian pada setengah kanan
        }
        else {
            high = mid - 1;  // Pencarian pada setengah kiri
        }
    }

    return -1;  // Elemen tidak ditemukan
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    }
    else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    return 0;
}
// Binary Search
// 1. Fungsi binarySearch :

// - Menggunakan loop untuk terus membagi array menjadi dua bagian sampai elemen ditemukan atau seluruh array sudah diperiksa.
// - Membandingkan elemen tengah dengan elemen yang dicari(target).
// - Menyesuaikan batas pencarian(low dan high) berdasarkan perbandingan.
// - Mengembalikan indeks elemen yang ditemukan atau - 1 jika tidak ditemukan.

// 2. Fungsi main :

// - Mendefinisikan array yang sudah diurutkan dan ukurannya.
// - Memanggil fungsi binarySearch dan menampilkan hasilnya.



// Data diambil dari posisi 1 sampai posisi akhir n
// - Kemudian cari posisi data tengah dengan rumus : (posisi awal + posisi akhir) / 2
// - Kemudian data yang dicari dibandingkan dengan data yang di tengah, apakah sama atau lebih kecil, atau lebih besar ?
// - Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1
// - Jika lebih kecil, maka proses pencarian dicari dengan posisi akhir adalah posisi tengah – 1
// - Jika data sama, berarti ketemu.