//träningspass.cpp
#include <iostream>
#include <string>
#include <unordered_map>
#include <time.h>
#include <stdio.h>
int main() {
    //Min träningspass databas
    std::unordered_map<std::string, std::string> träningspass; 
    träningspass["Måndag"] = "bröst och axlar";
    träningspass["Tisdag"] = "bicept och tricept";
    träningspass["Onsdag"] = "ben och mage";
    träningspass["Torsdag"] = "rygg och axlar";
    träningspass["Fredag"] = "kadio och kondition";
    träningspass["Lördag"] = "Hydrox";
    träningspass["Söndag"] = "Vila";
    

    time_t rawtime;
    struct tm * timeinfo; 
    time(&rawtime); 
    timeinfo = localtime(&rawtime); 
    std::string veckodag;
    switch (timeinfo->tm_wday) {
        case 0:
            veckodag = "Söndag";
            break;
        case 1:
            veckodag = "Måndag";
            break;
        case 2:
            veckodag = "Tisdag";
            break;
        case 3:
            veckodag = "Onsdag";
            break;
        case 4:
            veckodag = "Torsdag";
            break;
        case 5:
            veckodag = "Fredag";
            break;
        case 6:
            veckodag = "Lördag";
            break;
    }
            if (träningspass.find(veckodag) != träningspass.end()) {
                //printf("Det är %s/n",timeinfo->tm_wday);
                std::cout << "Dagens träningspass är: " << träningspass[veckodag] << std::endl;
            } else {
                std::cout << "Ingen träningspass hittades för idag." << std::endl;
            }
}