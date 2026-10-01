#include <iostream>
#include "Artist.h"

using namespace std;

void Artist::SetArtistName(string name)
    { artistName = name; }


void Artist::SetFollowers(int followers)
    { artistFollowers = followers; }

void Artist::SetRating(double rating)
    { artistRating = rating; }

string Artist::GetArtistName() const
    { return artistName; }
    


int Artist::GetFollowers() const
    { return artistFollowers; }

double Artist::GetRating() const
    { return artistRating; } 
