#include <iostream>

int main()
{
    char name;
    std::string nation = "list";                  // 문자열을 입력으로 받을 때는 그 입력으로 받을 변수를 string으로 선언해두고

    std::string city[] = { "Korea", "USA", "Japan", "China", "India" };
    std::cin >> nation;                           // 여기서 입력받는 변수명을 위에서 선언한 string 변수명으로 한다.

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
                std::cout << j << "," << city[j] << std::endl;      // 인덱스, 나라명
            }
            else 
            {
                std::cout << "error" << std::endl;
            }
        }
    }

}

