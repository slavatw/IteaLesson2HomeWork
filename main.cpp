#include <iostream>
#include <cstdlib>

int NumberDrops[100]; //����� � ������� ���������� �������� 100 ��������� ��������� �����
int MassNumbersDrops[5]; //����� � ������� ���������� ����� ��������� ������ ������� ��������� �����
int NumberOne = 0; //����� ��������� 1
int NumberTwo = 0;//����� ��������� 2
int NumberThree = 0;//����� ��������� 3
int NumberFour = 0;//����� ��������� 4
int NumberFive = 0;//����� ��������� 5
int NumberSix = 0;//����� ��������� 6
int MaxNumbersDrops = 0; //���������� � ������� ���������� ������������ ����� ���������
int MinNumbersDrops = 0; // ��������� � ������� ���������� ����������� ����� ���������
int NumberMaxDrops = 0; // ����� ������� ������ ������������ ����������� ���
int NumberMinDrops = 0; // ����� ������� ����� ����������� ���������� ���
int SizeMass = 0;
int Max = 0, Min = 0;


int getNumber(int min, int count)
{
    return min + rand() % count;
}



int main()
{
    srand(time(nullptr));

    for (int i = 0; i < 100; i++)
    {
        NumberDrops[i] = getNumber(1, 6); // ��������� ����� ���������� ������� � ��������� 1-6
    }


    //----------������� ���������� ��������� ����� �� 1-6 ------------------------
    for (int i = 0; i < 100; i++)
    {

        switch (NumberDrops[i])
        {
        case 1:
            NumberOne++;
            break;
        case 2:
            NumberTwo++;
            break;
        case 3:
            NumberThree++;
            break;
        case 4:
            NumberFour++;
            break;
        case 5:
            NumberFive++;
            break;
        case 6:
            NumberSix++;
            break;


        }

    }
    //-------------------------------------------------------------------------------------------------


    for (int i = 0; i < 100; i++)
    {
        std::cout << NumberDrops[i];

    }
    std::cout << "\r\n";
    std::cout << NumberDrops << "\n\r";
    std::cout << "Numbers of drops 1 - " << NumberOne << "\n\r";
    std::cout << "Numbers of drops 2 - " << NumberTwo << "\n\r";
    std::cout << "Numbers of drops 3 - " << NumberThree << "\n\r";
    std::cout << "Numbers of drops 4 - " << NumberFour << "\n\r";
    std::cout << "Numbers of drops 5 - " << NumberFive << "\n\r";
    std::cout << "Numbers of drops 6 - " << NumberSix << "\n\r";

    MassNumbersDrops[0] = NumberOne;
    MassNumbersDrops[1] = NumberTwo;
    MassNumbersDrops[2] = NumberThree;
    MassNumbersDrops[3] = NumberFour;
    MassNumbersDrops[4] = NumberFive;
    MassNumbersDrops[5] = NumberSix;


    Max = MassNumbersDrops[0];
    Min = MassNumbersDrops[0];

    SizeMass = sizeof(MassNumbersDrops) / sizeof(int);

    for (int i = 0; i <= SizeMass; i++)
    {
        if (MassNumbersDrops[i] > Max)
        {
            Max = MassNumbersDrops[i];
            NumberMaxDrops = i;


        }
    }

    for (int i = 0; i <= SizeMass; i++)
    {
        if (MassNumbersDrops[i] < Min)
        {
            Min = MassNumbersDrops[i];
            NumberMinDrops = i;
        }
    }
    NumberMaxDrops = NumberMaxDrops + 1;
    NumberMinDrops = NumberMinDrops + 1;
    std::cout << "\r\n";
    std::cout << "The number what droped max times - " << NumberMaxDrops << " - Numbers times - " << Max << "\r\n";
    std::cout << "The number what droped min times - " << NumberMinDrops << "- Numbers times - " << Min;


    // For get rand value, use getNumber
    // example ( min = 100, count = 150 ) - int randValue{ getNumber( 100, 150 ) };

    // Add your code here
    return 0;
}



