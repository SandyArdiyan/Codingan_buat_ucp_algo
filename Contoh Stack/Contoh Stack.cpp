#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;

    // Menambahkan elemen ke stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Menghapus elemen dari stack
    stack.pop();

    // Menampilkan elemen teratas dalam stack
    std::cout << "Elemen teratas: " << stack.top() << std::endl;

    return 0;
}
