#include <iostream>
#include <stdio.h>
#include<Windows.h>
using namespace std;

int main()
{   

    char heart = 3;
    for (int l = 0; l < 100000; l++) {
        int num = rand() % 20;
        for (int j = 0; j < num; j++)
            printf(heart);
        cout << char(003);
        Sleep(1);
    }
}