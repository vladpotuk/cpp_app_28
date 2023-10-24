#include<Windows.h>
#include <iostream>

int main() {
    system("chcp 1251");
    system("cls");
   
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    int min_element = array[0][0];
    int max_element = array[0][0];
    int total_elements = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
  
            sum += array[i][j];

            if (array[i][j] < min_element) {
                min_element = array[i][j];
            }
            if (array[i][j] > max_element) {
                max_element = array[i][j];
            }

            total_elements++;
        }
    }

    double average = static_cast<double>(sum) / total_elements;

    std::cout << "Сума всіх елементів: " << sum << std::endl;
    std::cout << "Середнє арифметичне: " << average << std::endl;
    std::cout << "Мінімальний елемент: " << min_element << std::endl;
    std::cout << "Максимальний елемент: " << max_element << std::endl;

    return 0;
}
