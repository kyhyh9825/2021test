#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

void CursorView(bool show);

int main(void)
{
    CursorView(false);
    time_t rawTime;
    struct tm *pTimeInfo;

    while (1)
    {
        rawTime = time(NULL);
        pTimeInfo = localtime(&rawTime);

        int year = pTimeInfo->tm_year + 1900;
        int month = pTimeInfo->tm_mon + 1;
        int day = pTimeInfo->tm_mday;
        int hour = pTimeInfo->tm_hour;
        int min = pTimeInfo->tm_min;
        int sec = pTimeInfo->tm_sec;
        printf("현재 시각 : %d년 %d월 %d일 %d시 %d분 %d초    \r", year, month, day, hour, min, sec);
        if (year == 2021)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("It's the new year!\a\n");
                Sleep(200);
            }
            break;
        }
    }

    char **line = (char **)malloc(45 * sizeof(char *));
    if (line == NULL)
    {
        puts("OUT OF MEMORY");
        puts("2021 is fucked up");
        exit(1);
    }

    line[0]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[1]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[2]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[3]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[4]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[5]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[6]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[7]  = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[8]  = "█████████████████▒░              ░▓█████████████████▓░             ░▓████████████████▓▒              ░▓███████████████████████▒       ▒███████████████";
    line[9]  = "██████████████▒                      ▓███████████▓                     ▓██████████▒                      ▒███████████████████▓        ▒███████████████";
    line[10] = "████████████▓                          █████████                        ░███████▓                          ▓███████████████▓░         ▓███████████████";
    line[11] = "███████████▒          ▒█████▓░          ███████          ▓█████▒          █████▓          ▒██████░          ██████▓▓▓▓▓▓▒             ▒███████████████";
    line[12] = "███████████          █████████░         ░█████          ████████▓         ▒████          ▓████████▒          █████                    ▓███████████████";
    line[13] = "██████████▒         ▒██████████          ████▒         ▓█████████          ███▓         ░██████████          █████                    ▒███████████████";
    line[14] = "██████████          ▓██████████          ████          ██████████▒         ▓██▒         ▒██████████          █████                    ▓███████████████";
    line[15] = "██████████▒ ░░░░░░░ ██████████▓          ████          ██████████▓         ░██▓ ░░░░░░░ ▓██████████          ███████████████          ▓███████████████";
    line[16] = "██████████████████████████████          ░███▓          ██████████▓          ██████████████████████░          ███████████████          ▓███████████████";
    line[17] = "█████████████████████████████░          ████▒         ░███████████          █████████████████████░          ████████████████          ▒███████████████";
    line[18] = "███████████████████████████▒           █████▒         ░██████████▓          ███████████████████▓           ▓████████████████          ▓███████████████";
    line[19] = "█████████████████████████▒            ██████░         ░██████████▓          █████████████████▒            ██████████████████          ▒███████████████";
    line[20] = "███████████████████████░            ▓███████▒         ░██████████▓          ███████████████░            ▓███████████████████          ▓███████████████";
    line[21] = "████████████████████▓             ▓█████████░         ░██████████▓          ████████████▓░            ▒█████████████████████          ▒███████████████";
    line[22] = "██████████████████▓            ░▓███████████▒         ░██████████▓          ██████████▓             ▓███████████████████████          ▓███████████████";
    line[23] = "████████████████▓            ▒██████████████▓          ██████████▓          █████████            ░██████████████████████████          ▒███████████████";
    line[24] = "███████████████░           ▒█████████████████          ██████████▒         ░███████░           ▒████████████████████████████          ▓███████████████";
    line[25] = "█████████████▓           ▓███████████████████          ██████████░         ▓██████           ▒██████████████████████████████          ▓███████████████";
    line[26] = "████████████▓          ▒█████████████████████░         ██████████          ██████          ░████████████████████████████████          ▓███████████████";
    line[27] = "████████████          ░███████████████████████          ████████▒         ▓█████           █████████████████████████████████          ▓███████████████";
    line[28] = "███████████                              ▓████▓         ░██████▒         ▒█████                              ▒██████████████          ▓███████████████";
    line[29] = "██████████▓                              ▓█████▓                        ▓██████                              ▓██████████████          ▒███████████████";
    line[30] = "██████████░                              ▓███████▒                    ▒███████▒                              ▒██████████████          ▒███████████████";
    line[31] = "██████████▒ ░░░░░░░░░░░░░░░░░░░░░░░░░░░░ ▓█████████▓▒░            ░▓██████████▓  ░░░░░░░░░░░░░░░░░░░░░░░░░░░ ▓██████████████░ ░░░░░░  ▓███████████████";
    line[32] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[33] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[34] = "██████████████████████████▓▓███▓████▓▓█████▓▓▓▓███▓▓▓▓▓██▓▓███▓▓█████▓▓███▓▓██▓▓▓▓▓█▓▓███▓███▓▓███▓▓████▓██▓▓▓▓▒▓███▓▓████▓▓▓▓▓███████████████████████";
    line[35] = "█████████████████████████▓  ██░ ░██▒   ███   ▒  ▒█  ▒▒  ▓▒  █▓  █████   ██  █▒  ▒▒░█  ██   █▓  ███▓  ██  █▓  ▒▒░▓██▒   ███  ░▒   █████████████████████";
    line[36] = "█████████████████████████▓  ▓▓  ▒██ ░█ ░██  ▓█▓  █  ██  ▒█▒ ░  ██████   ░█  █▓ ░█▓▓█▓ ▓█   █▒ ▓█████    ██▓  ██▓███ ▒█ ▒██  ▓█▓ ░█████████████████████";
    line[37] = "█████████████████████████▓  ▒▒  ▒█▒ ▒█  ██   ░ ▒██  ░  ▒███░  ███████  █ ▒  █▓  ▒▒░██  ▓ █ ▓  ██████▓  ▓██▓  ▒▒░██░ ▓█  ██  ░▒  ▓█████████████████████";
    line[38] = "█████████████████████████▓  ██░ ▓█  ░░   █  ▓█████  ███████▓  ███████  ██   █▒ ░█████░  ░█   ▒███████  ███▓  ████▓  ░░  ░█  ██▓  █████████████████████";
    line[39] = "█████████████████████████▓ ░██▒ ▓▒ ▓███  █▒ ▓█████  ███████▓ ░███████  ██▒  █▓     ▒██  ▓█▓  ████████  ███▓     ▒▒ ▓███  █░ ███  █████████████████████";
    line[40] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[41] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[42] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[43] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";
    line[44] = "██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████";

    for (int i = 0; i < 45; i++)
    {
        puts(line[i]);
        Sleep(100);
    }

    free(line);
    system("pause");
    return 0;
}

void CursorView(bool show)
{
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}