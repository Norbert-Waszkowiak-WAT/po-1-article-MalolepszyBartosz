#ifndef ARTICLE 
#define ARTICLE
#include <iostream>
#include <string>
#include "author.cpp"
using namespace std;

class Article
{
    private:
    string title;
    Author author;
    int publicationYear;
    string journal;
    public:
    Article():title(""),author(Author()),publicationYear(0),journal(""){};
    Article (string articleTitle, Author &articleAuthor, int year, string journalName)
        :title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName){};
    Article(Article &other):title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){};
    
    void displayInformation(){
        cout << title << endl << author.toString() << endl << publicationYear << endl << journal << endl;
    };
    string getTitle(){
        return title;
    };
    Author getAuthor(){
        return author;
    };
    int getPublicationYear(){
        return publicationYear;
    };
    string getJournal(){
        return journal;
    };
};
#endif