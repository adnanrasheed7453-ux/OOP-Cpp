#include <iostream>
using namespace std;

struct Movie
{
    string title;
    string genre;
    float rating;
};

int main()
{
    Movie m1;

    m1.title = "Avengers";
    m1.genre = "Action";
    m1.rating = 8.5;

    cout << "Movie Title: " << m1.title << endl;
    cout << "Genre: " << m1.genre << endl;
    cout << "Rating: " << m1.rating << endl;

    return 0;
}
