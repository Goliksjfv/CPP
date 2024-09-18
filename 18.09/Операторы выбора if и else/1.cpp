#include <iostream>
#include <string>

using namespace std;

string numberToWords(int n)
{
    string units[] = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    string teens[] = {"десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
    string tens[] = {"", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};
    string hundreds[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};
    string thousands[] = {"", "одна тысяча", "две тысячи", "три тысячи", "четыре тысячи", "пять тысяч", "шесть тысяч", "семь тысяч", "восемь тысяч", "девять тысяч"};

    string result = "";

    if (n == 0)
        return "ноль долларов";

    if (n / 1000 > 0)
    {
        result += thousands[n / 1000] + " ";
        n %= 1000;
    }

    if (n / 100 > 0)
    {
        result += hundreds[n / 100] + " ";
        n %= 100;
    }

    if (n >= 10 && n <= 19)
    {
        result += teens[n - 10] + " ";
    }
    else
    {
        if (n / 10 > 0)
        {
            result += tens[n / 10] + " ";
        }
        if (n % 10 > 0)
        {
            result += units[n % 10] + " ";
        }
    }

    if (!result.empty() && result[result.size() - 1] == ' ')
    {
        result.erase(result.size() - 1);
    }

    int lastDigit = n % 10;
    int lastTwoDigits = n % 100;

    if (lastTwoDigits >= 11 && lastTwoDigits <= 19)
    {
        result += " долларов";
    }
    else if (lastDigit == 1)
    {
        result += " доллар";
    }
    else if (lastDigit >= 2 && lastDigit <= 4)
    {
        result += " доллара";
    }
    else
    {
        result += " долларов";
    }

    return result;
}

int main()
{
    int number;
    cout << "Введите число от 1 до 9999: ";
    cin >> number;

    if (number < 1 || number > 10000)
    {
        cout << "Число вне диапазона!" << endl;
    }
    else
    {
        cout << number << " – " << numberToWords(number) << endl;
    }

    return 0;
}