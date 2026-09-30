#include <iostream>
#include "Artist.h"

using namespace std;

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
