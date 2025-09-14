#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Создание списка (вектора)
    std::vector<int> list = {1, 2, 3, 4, 5};

    // Добавление элемента в конец
    list.push_back(6);

    // Вставка элемента по индексу (например, на позицию 2)
    list.insert(list.begin() + 2, 10);

    // Удаление элемента по значению (удаляет первое вхождение)
    list.erase(std::remove(list.begin(), list.end(), 3), list.end());

    // Удаление элемента по индексу (например, первый элемент)
    list.erase(list.begin());

    // Обратный порядок
    std::reverse(list.begin(), list.end());

    // Вывод списка
    std::cout << "Обновленный список: ";
    for (int num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Размер списка
    std::cout << "Длина списка: " << list.size() << std::endl;

    return 0;
}
