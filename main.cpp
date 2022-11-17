// Libs
#include<Windows.h>
#include<stdlib.h>
#include<iostream>


// Self Destruct Things
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING

// Colors
void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

// Main
int main(){
        // Pre-Autoclick
        // Menu
        system("cls");
        SetConsoleTitle("");
        setcolor(14);
        std::cout<<" /$$$$$$             /$$           /$$       /$$  /$$$$$$  /$$ /$$           /$$                          "<< std::endl;
        std::cout<<" /$$__  $$          | $$          |__/      | $$ /$$__  $$| $$|__/          | $$                          "<< std::endl;
        std::cout<<"| $$  \__/  /$$$$$$ | $$  /$$$$$$  /$$  /$$$$$$$| $$  \__/| $$ /$$  /$$$$$$$| $$   /$$  /$$$$$$   /$$$$$$ "<< std::endl;
        std::cout<<"|  $$$$$$  /$$__  $$| $$ /$$__  $$| $$ /$$__  $$| $$      | $$| $$ /$$_____/| $$  /$$/ /$$__  $$ /$$__  $$"<< std::endl;
        std::cout<<"\____  $$| $$  \ $$| $$| $$  \ $$| $$| $$  | $$| $$      | $$| $$| $$      | $$$$$$/ | $$$$$$$$| $$  \__/"<< std::endl;
        std::cout<<"/$$  \ $$| $$  | $$| $$| $$  | $$| $$| $$  | $$| $$    $$| $$| $$| $$      | $$_  $$ | $$_____/| $$      "<< std::endl;
        std::cout<<"| $$$$$$/| $$$$$$$/| $$|  $$$$$$/| $$|  $$$$$$$|  $$$$$$/| $$| $$|  $$$$$$$| $$ \  $$|  $$$$$$$| $$      "<< std::endl;
        std::cout<<"\______/ | $$____/ |__/ \______/ |__/ \_______/ \______/ |__/|__/ \_______/|__/  \__/ \_______/|__/      "<< std::endl;
        std::cout<<"         | $$                      "<< std::endl;  
        std::cout<<"         |__/                      "<< std::endl;                                              
        setcolor(4);
        std::cout<<"                                                              Cheat made by iSixy#9275                                                                                                                                                                                                                              "<< std::endl;

        // Choose CPS
        int left_cps, right_cps;

        std::cout<<"Cuantos CPS quieres hacer [1-20]"<<std::endl;
        std::cout<<"-> ";
        setcolor(14);
        std::cin>>left_cps;

        system("cls");
        setcolor(14);
        std::cout<<" /$$$$$$             /$$           /$$       /$$  /$$$$$$  /$$ /$$           /$$                          "<< std::endl;
        std::cout<<" /$$__  $$          | $$          |__/      | $$ /$$__  $$| $$|__/          | $$                          "<< std::endl;
        std::cout<<"| $$  \__/  /$$$$$$ | $$  /$$$$$$  /$$  /$$$$$$$| $$  \__/| $$ /$$  /$$$$$$$| $$   /$$  /$$$$$$   /$$$$$$ "<< std::endl;
        std::cout<<"|  $$$$$$  /$$__  $$| $$ /$$__  $$| $$ /$$__  $$| $$      | $$| $$ /$$_____/| $$  /$$/ /$$__  $$ /$$__  $$"<< std::endl;
        std::cout<<"\____  $$| $$  \ $$| $$| $$  \ $$| $$| $$  | $$| $$      | $$| $$| $$      | $$$$$$/ | $$$$$$$$| $$  \__/"<< std::endl;
        std::cout<<"/$$  \ $$| $$  | $$| $$| $$  | $$| $$| $$  | $$| $$    $$| $$| $$| $$      | $$_  $$ | $$_____/| $$      "<< std::endl;
        std::cout<<"| $$$$$$/| $$$$$$$/| $$|  $$$$$$/| $$|  $$$$$$$|  $$$$$$/| $$| $$|  $$$$$$$| $$ \  $$|  $$$$$$$| $$      "<< std::endl;
        std::cout<<"\______/ | $$____/ |__/ \______/ |__/ \_______/ \______/ |__/|__/ \_______/|__/  \__/ \_______/|__/      "<< std::endl;
        std::cout<<"         | $$                      "<< std::endl;  
        std::cout<<"         |__/                      "<< std::endl;                                              
        setcolor(4);
        std::cout<<"                                                              Cheat made by iSixy#9275                                                                                                                                                                                                                              "<< std::endl;

        // Toggle Defs
        bool right_clicker_toggled, left_clicker_toggled;

        // Instructions
        setcolor(4);
        std::cout<<"F9 -> ";
        setcolor(14);
        std::cout<<"Self Destruct"<<std::endl;

        setcolor(4);
        std::cout<<"F5 -> ";
        setcolor(14);
        std::cout<<"Ocultar/Mostrar"<<std::endl;

        setcolor(4);
        std::cout<<"F6 -> ";
        setcolor(14);
        std::cout<<"OFF"<<std::endl;

        setcolor(4);
        std::cout<<"F7 -> ";
        setcolor(14);
        std::cout<<"ON                                                                                                                                                                                                                                     "<<std::endl;


        // On and Off status Display
        setcolor(4);
        std::cout<<"[+] Click izquierdo: ";
        setcolor(14);
        std::cout<<left_cps<<std::endl;
        
        // Some definitions
        bool normal_mode = true;


        // Autoclick
        while (true){
            // Delay Function (Randomizer)
            int left_delay = (2000 / left_cps) / 1;

            // Normal Mode, Left
            if(left_clicker_toggled){
                if(normal_mode == true){
                    if(GetAsyncKeyState(VK_LBUTTON)){
                        HWND Window = GetForegroundWindow(); // Get Window
                        if(FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
                            SendMessageW(GetForegroundWindow(), WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 0));
                            SendMessageW(GetForegroundWindow(), WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(0, 0));
                            Sleep(rand() % left_delay); // Sleep Delay Time
                        }
                    }
                }
            }

                // Alternative Mode, Left
                if(normal_mode == false){
                    if(GetAsyncKeyState(VK_LBUTTON)){
                        HWND Window = GetForegroundWindow();
                        if (FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
                            SendMessageW(GetForegroundWindow(), WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 1));
                            Sleep(rand() % left_delay); // Sleep Delay Time
                        }
                    }
                }

            if(GetAsyncKeyState(VK_F5)){

                Sleep(600);
            }


            // Switch modes
            if(GetAsyncKeyState(VK_F6)){
                if(normal_mode == true){
                    normal_mode = false;
                } 

                Sleep(200);     
            }


            if(GetAsyncKeyState(VK_F7)){
                if(normal_mode == false){
                    normal_mode = true;
                }

                Sleep(200);
            }


            // Self Destruct
            if(GetAsyncKeyState(VK_F9)){
                MessageBox(NULL, "Ahora ya puedes eliminar el exe [Recomendamos usar Shift+Deleted]", "Importante", 0);

                // Delete Prefetch
                std::string command = "del /Q ";
                std::string path = "C:\\Windows\\Prefetch\\APOLLYON.*.pf";
                system(command.append(path).c_str());

                // Clean DNS Cache
                BOOL (WINAPI *DoDnsFlushResolverCache)();
                *(FARPROC *) &DoDnsFlushResolverCache = GetProcAddress(LoadLibrary("dnsapi.dll"), "DnsFlushResolverCache");
                if (!DoDnsFlushResolverCache) return FALSE;
                return DoDnsFlushResolverCache();

                return 0;
            }
        }
}