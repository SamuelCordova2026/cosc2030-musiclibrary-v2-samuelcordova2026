#include <iostream>
#include "Artist.h"

using namespace std;

Artist::Artist()
{
    SetArtistName("None");
    SetArtistGenre("None");
    SetFollowers(0);
    SetRating(0);
}

Artist::Artist(string name, string genre, int followers, double rating)
{
    SetArtistName(name);
    SetArtistGenre(genre);
    SetFollowers(followers);
    SetRating(rating);
}

void Artist::Display()
{
    cout << endl;
    cout << "Artist Details" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: " << GetArtistName() << endl;
    cout << "Usual genre: " << GetArtistGenre() << endl;
    cout << "Total followers: " << GetFollowers() << endl;
    cout << "Rating: " << GetRating() << " out of 5" << endl;
}

void Artist::SetArtistName(string name)
    { artistName = name; }

void Artist::SetArtistGenre(string genre)
    { artistGenre = genre; }

void Artist::SetFollowers(int followers)
    { artistFollowers = followers; }

void Artist::SetRating(double rating)
    { artistRating = rating; }

string Artist::GetArtistName()
    { return artistName; }
    
string Artist::GetArtistGenre()
    { return artistGenre; }

int Artist::GetFollowers()
    { return artistFollowers; }

double Artist::GetRating()
    { return artistRating; } 
