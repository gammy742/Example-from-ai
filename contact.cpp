#include <iostream>
#include<string>
#include<fstream>
#include<vector>

struct Contact{
    std::string name;
    std::string phoneNumber;
    std::string address;
};

int main(){
    //Use Vector+Struct
    std::vector<Contact> contact;
    contact.push_back({"Gammy kwong","087-xxxxxxx","thailand"});

    //Create open files
    std::ofstream MyFile("contact.txt");

    //Check files 
    if(!MyFile.is_open()){
        std::cerr<<"Error Opening files!\n";
        return 1;
    }

    //Write files
    for(auto i:contact){
        MyFile<<i.name<<'\n'<<i.phoneNumber<<'\n'<<i.address<<'\n'<<"================================";
    }

    //Close Files
    MyFile.close();
    

    std::cout<<"Your contact info has benn saved to contact.txt\n";
    return 0;

}

