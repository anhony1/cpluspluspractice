//
//  Book.cpp
//  testingcppproject
//
//  Created by Anthony Reyes on 12/19/22.
//

#include <iostream>
#include <string>
#include "Book.hpp"

using namespace std;

const string unk = "Unknown";
const string clone_prefix = "Clone-";

string Book::getTitle(){
    return _title;
}

void Book::setTitle(string value) {
    _title = value;
}

string Book::getAuthor() const {
    return _author;
}

void Book::setAuthor(string value){
    _author = value;
}

string Book::getGenre(){
    return _genre;
}

void Book::setGenre(const string value){
    cout << "value: "<< value << endl;
    _genre = value;
}

int Book::getTotalReads(){
    return _reads;
}

void Book::addTotalReads(){
    _reads++;
}

int Book::getAddressByThis(){
    printf("getValue: This is %p \n", this);
    return 0;
}


