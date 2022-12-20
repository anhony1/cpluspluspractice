//
//  Book.hpp
//  testingcppproject
//
//  Created by Anthony Reyes on 12/19/22.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Book{
    
    
    // classes have declared variables to be assumed private
    // The underscore in characters is simply a convention used in C++. This usually means that the variable is a private variable.
    
    
    string _title = "";
    string _author = "";
    string _genre = "";
    int _reads = 0;
    
public:
    
    string getTitle();
    void setTitle(string input);
    
    string getAuthor() const;
    void setAuthor(string input);
    
    string getGenre();
    void setGenre(const string input);
    
    int getTotalReads();
    void addTotalReads();
    
    int getAddressByThis();
    
};

#endif /* Book_hpp */
