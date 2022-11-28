#include <iostream>
#include <CLI/CLI.hpp>
 
int main ( int argc, char  ** argv) 
{ 
    CLI::App app{"Dies ist ein Programm was uns den Umgang mit Lagerhaltungsprogrammen zeigen soll";"Lagerhaltungsprogramm"}
    
    try{
        app.parse(argc, argv);
    } catch(const CLI::ParseError& e){
        return app.exit(e);
    }
}