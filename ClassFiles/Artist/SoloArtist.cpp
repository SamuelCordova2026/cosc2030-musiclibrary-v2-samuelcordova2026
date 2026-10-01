#include "SoloArtist.h"

#include <iostream>

void SoloArtist::Display()
{
            cout << endl;
            cout << "Artist Details" << endl;
            cout << "-----------------------------" << endl;
            cout << "Name: " << GetArtistName() << endl;
            cout << "Total followers: " << GetFollowers() << endl;
            cout << "Rating: " << GetRating() << " out of 5" << endl;
}

SoloArtist::SoloArtist()
{
    SetArtistName("None");
    SetFollowers(0);
    SetRating(0);

}
SoloArtist::SoloArtist(string name, int followers, double rating)
{
    SetArtistName(name);
    SetFollowers(followers);
    SetRating(rating);
}

SoloArtist::SoloArtist(const SoloArtist& copy)
{
    SetArtistName(copy.GetArtistName());
    SetFollowers(copy.GetFollowers());
    SetRating(copy.GetRating());
}

