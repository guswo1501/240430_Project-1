#include <iostream>

int main()
{
    char name;
    std::string nation = "list";                  // ���ڿ��� �Է����� ���� ���� �� �Է����� ���� ������ string���� �����صΰ�

    std::string city[] = { "Korea", "USA", "Japan", "China", "India" };
    std::cin >> nation;                           // ���⼭ �Է¹޴� �������� ������ ������ string ���������� �Ѵ�.

    if (nation == "list")
    {
        for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++)
        {
            std::cout << city[i] << std::endl;
        }
    }

    else
    {
        for (int j = 0; j < sizeof(city) / sizeof(city[0]); j++)
        {
            if (nation == city[j])
            {
                std::cout << j << "," << city[j] << std::endl;      // �ε���, �����
            }
            else 
            {
                std::cout << "error" << std::endl;
            }
        }
    }

}

