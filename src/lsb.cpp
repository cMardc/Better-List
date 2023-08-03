#include <iostream>
#include <filesystem>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <algorithm>
#include "ansii.h"

namespace fs = std::filesystem;

using std::cout, std::exception, std::cerr, std::string, std::count;


//List of extensions
string audio[] = {".alf", ".cda", ".mid", ".midi", ".mp3", ".mpa", ".ogg", ".wav", ".wma", ".wpl"};
string compressed[] = {".7z", ".arj", ".deb", ".pkg", ".rar", ".rpm", ".tar.gz", ".z", ".zip"};
string disc[] = {".bin", ".dmg", ".iso", ".toast", ".vcd"};
string data[] = {".csv", ".dat", ".db", ".dbf", ".log", ".mdb", ".sav", ".sql", ".tar", ".xml"};
string email[] = {".email", ".eml", ".emlx", ".msg", ".oft", ".ost", ".pst", ".vcf"};
string executable[] = {".apk", ".bat", ".bin", ".cgi", ".pl", ".gadget", ".jar", ".msi", ".wsf"};
string font[] = {".fnt", ".fon", ".otf", ".ttf"};
string image[] = {".ai", ".bmp", ".gif", ".ico", ".jpeg", ".jpg", ".png", ".ps", ".psd", ".svg", ".tif", ".tiff", ".webp"};
string web[] = {".asp", ".cer", ".cfm", ".cgi", ".css", ".html", ".htm", ".js", ".jsp", ".part", ".php", ".rss", ".xtml", ".md"};
string presentation[] = {".key", ".odp", ".pps", ".ppt", ".pptx"};
string programming[] = {".c", ".cgi", ".pl", ".class", ".cpp", ".cs", ".h", ".java", ".php", ".py", ".sh", ".swift", ".vb", ".asm"};
string systemExt[] = {".bak", ".cab", ".cfg", ".cpl", ".cur", ".dll", ".dmp", ".drv", ".icns", ".ico", ".ini", ".lnk", ".msi", ".sys", ".tmp"};
string video[] = {".3g2", ".3gp", ".avi", ".flv", ".h264", ".m4v", ".mkv", ".mov", ".mp4", ".mpg", ".mpeg", ".rm", ".swf", ".vob", ".webm", ".wmv"};
string text[] = {".doc", ".docx", ".pdf", ".rtf", ".tex", ".txt", ".wpd"};


string noEscapeChar(string input) {
    string output = "";
    if(input.empty()) {
        return ""; 
    }
    if(input[0] == '.') {
        return "";
    }
    for(size_t i = 0; i < input.size(); i++) {
        if(input[i] != '\"' || input[i] != '\'') {
            output += input[i];
        }
    }
    return output;
}

//Main function to run on start
int main() {

    //Get current path
    char cwd[PATH_MAX];
    getcwd(cwd, sizeof(cwd));

    //Iterate trough all files in current directory
    try {
        for (const auto & entry : fs::directory_iterator(cwd)) {
            if(!fs::is_directory(entry.path())) {
                bool found = false;
                string s = "";
                for(size_t i = 0; i < 10; i++) {
                    if(entry.path().extension() == audio[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") {
                            cout << RED << noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 9; i++) {
                    if(entry.path().extension() == compressed[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") {
                            cout << BACKGROUND_YELLOW <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 5; i++) {
                    if(entry.path().extension() == disc[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << BACKGROUND_MAGENTA <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 10; i++) {
                    if(entry.path().extension() == data[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << BACKGROUND_CYAN <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 8; i++) {
                    if(entry.path().extension() == email[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << BACKGROUND_RED <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 9; i++) {
                    if(entry.path().extension() == executable[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << BACKGROUND_BLUE <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 4; i++) {
                    if(entry.path().extension() == font[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << BLACK <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 13; i++) {
                    if(entry.path().extension() == image[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << GREEN <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                         
                    }
                }
                for(size_t i = 0; i < 14; i++) {
                    if(entry.path().extension() == web[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << YELLOW <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 5; i++) {
                    if(entry.path().extension() == presentation[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << CYAN <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 14; i++) {
                    if(entry.path().extension() == programming[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << YELLOW <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 15; i++) {
                    if(entry.path().extension() == systemExt[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << RED <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 16; i++) {
                    if(entry.path().extension() == video[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << BLUE <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                for(size_t i = 0; i < 7; i++) {
                    if(entry.path().extension() == text[i]) {
                        s = noEscapeChar(entry.path().filename());
                        if(s != "") { 
                            cout << MAGENTA <<  noEscapeChar(entry.path().filename());
                        }
                        found = true;
                    }
                }
                
                if(!found) {
                    s = noEscapeChar(entry.path().filename());
                    if(s != "") { 
                        cout << WHITE <<  noEscapeChar(entry.path().filename());
                    }
                }
                
                if(s != "") {
                    cout << '\n';
                }

            }
            else {
                cout << WHITE << ITALIC << BOLD <<  noEscapeChar(entry.path().filename());
                string s = noEscapeChar(entry.path().filename());
                if(s != "") {
                    cout << '\n';
                }
            }
        }
    }
    catch (exception e) {
        cerr << e.what() << '\n';
    }
    cout << '\n';
    //Exit
    return 0;
}