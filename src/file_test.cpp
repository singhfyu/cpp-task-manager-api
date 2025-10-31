#include <fstream>
#include <iostream>
#include <string>
int main(){
    std::ofstream fout("datas.txt");
    if(!fout.is_open()){
        std::cout<< "Failed to open file for writing! \n";
        return 0;
    }

    fout<<"Line 1: Hello file " << std::endl;
    fout<<"Line 2: Writing from c++" << std::endl;
    fout<<"Line 3: End of file." << std:: endl;

    fout.close();

    std::cout<< "Now Reading from the file.."<< std::endl;

    std::ifstream fin("datas.txt");
    if(fin.fail()){
        std::cout<<"File not found! \n";
        return 0;
    }
    std::string line;
    while(std::getline(fin, line)){
        std::cout<< line << std::endl;
    }
    fin.close();
/*
    std::ofstream fout("datas.txt", std::ios::app);
    fout<<"New line appended \n";
    fout.close();
*/
    return 0;
}