#include "SoloArtist.h"

#include <iostream>

void SoloArtist::Display()
{
            cout << endl;
            cout << "Artist Details" << endl;
            cout << "-----------------------------" << endl;
            cout << "Name: " << GetArtistName() << endl;
            cout << "Usual genre: " << GetArtistGenre() << endl;
            cout << "Total followers: " << GetFollowers() << endl;
            cout << "Rating: " << GetRating() << " out of 5" << endl;
}

SoloArtist::SoloArtist()
{
    SetArtistName("None");
    SetArtistGenre("None");
    SetFollowers(0);
    SetRating(0);

}
SoloArtist::SoloArtist(string name, string genre, int followers, double rating)
{
    SetArtistName(name);
    SetArtistGenre(genre);
    SetFollowers(followers);
    SetRating(rating);
}
