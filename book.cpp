#ifndef BOOK
#define BOOK 
#include <iostream>
#include <string>
#include "chapter.cpp"
#include "author.cpp"
#include "article.cpp"
#include <vector>

using namespace std;

class Book{
private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;

public:
    Book(){};
    Book(string title, Author author, int publicationYear, vector<Chapter> chapters): title(title), author(author), publicationYear(publicationYear),chapters(chapters){};

    void addChapter(const Chapter &chapter){
        chapters.push_back(chapter);
    }
    void displayInfo(){
        cout << title << " ";
        cout << author.getName() << " ";
        cout << author.getSurname() << " ";
        cout << publicationYear << " ";
        cout << chapters.size() << endl;
    }
    string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getPublicationYear(){
        return publicationYear;
    }
    vector<Chapter> getChapters(){
        return chapters;
    }


};

#endif