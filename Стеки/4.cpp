#include <iostream>
#include <stack>
#include <string>
#include <cctype> // для функции isdigit
#include <stdexcept> // для исключений

// Функция для проверки, является ли символ оператором
bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%';
}

// Функция для выполнения арифметической операции
int applyOperator(char op, int a, int b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0) throw std::runtime_error("Деление на ноль");
            return a / b;
        case '%': 
            if (b == 0) throw std::runtime_error("Деление на ноль");
            return a % b;
        default:
            throw std::runtime_error("Неподдерживаемая операция");
    }
}

// Функция для вычисления выражения в постфиксной записи
int evaluatePostfix(const std::string& expression) {
    std::stack<int> stack;

    for (size_t i = 0; i < expression.length(); ++i) {
        char ch = expression[i];

        // Пропускаем пробелы
        if (ch == ' ') continue;

        // Если символ является числом
        if (isdigit(ch)) {
            int num = 0;
            // Учитываем числа с более чем одной цифрой
            while (i < expression.length() && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            i--; // сдвигаем указатель обратно, т.к. цикл увеличит его
            stack.push(num);
        }
        // Если символ — оператор
        else if (isOperator(ch)) {
            if (stack.size() < 2) {
                throw std::runtime_error("Недостаточно операндов для операции");
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            int result = applyOperator(ch, a, b);
            stack.push(result);
        }
        else {
            throw std::runtime_error("Некорректный символ в выражении");
        }
    }

    // В конце в стеке должен остаться только один элемент — результат
    if (stack.size() != 1) {
        throw std::runtime_error("Некорректное выражение");
    }

    return stack.top();
}

int main() {
    std::string expression;

    std::cout << "Введите арифметическое выражение в постфиксной записи: ";
    std::getline(std::cin, expression); // Получаем строку с выражением от пользователя

    try {
        int result = evaluatePostfix(expression);
        std::cout << "Результат: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}