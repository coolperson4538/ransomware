#pragma once
#include <windows.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <rendering_api.h>

void lol()
{

        int x;
        int y;
        int duration = 3600;
        char message[] = "you've been hacked by qv4t7 clan, to get ur files back u must play a game (we are also spreading our virus to other users in the network) inorder to play the game, you must press D and you have 1 hour to finish the game or else we'll nuke your servers and brick your system";
        ShellExecute(NULL, NULL, L"echo %c > README.txt", NULL, NULL, SW_HIDE, message);
        if(GetAsyncKeyState(VK_D) & 0x8000)
        {
                game_init();
        }
        Sleep(duration);
        ShellExecute()
}

void infect()
{
        
}

void disable_cmdpromt()
{
        // Work in progress
}

void disable_taskmgr()
{
        // Work in progress
}

void game_init()
{

}
