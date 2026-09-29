#include <iostream>
#include "GroupArtist.h"
#include "../Band/Band.h"
#include <string>

using namespace std;

        void GroupArtist::Display()
        {
            cout << endl;
            cout << "Artist Details" << endl;
            cout << "-----------------------------" << endl;
            cout << "Name: " << GetArtistName() << endl;
            cout << "Usual genre: " << GetArtistGenre() << endl;
            cout << "Total followers: " << GetFollowers() << endl;
            cout << "Rating: " << GetRating() << " out of 5" << endl;
        }

        GroupArtist::GroupArtist()
        {
            SetArtistName("None");
            SetArtistGenre("None");
            SetFollowers(0);
            SetRating(0);
        }

        GroupArtist::GroupArtist(string name, string genre, int followers, double rating)
        {
            SetArtistName(name);
            SetArtistGenre(genre);
            SetFollowers(followers);
            SetRating(rating);        }
            
            /*

        void GroupArtist::SetBand(Band band)
            { bandVar = band; }
        Band GroupArtist::GetBand()
            { return bandVar; }
             */