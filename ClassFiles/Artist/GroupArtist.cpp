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
            cout << "Member of " << GetBandName() << endl;
            cout << "Total followers: " << GetFollowers() << endl;
            cout << "Rating: " << GetRating() << " out of 5" << endl;
        }

        GroupArtist::GroupArtist()
        {
            SetArtistName("None");
            SetFollowers(0);
            SetRating(0);
        }

        GroupArtist::GroupArtist(string name, string bandName, int followers, double rating)
        {
            SetArtistName(name);
            SetFollowers(followers);
            SetRating(rating);        
            SetBandName(bandName);
        }

        GroupArtist::GroupArtist(const GroupArtist& copy)
        {
            SetArtistName(copy.GetArtistName());
            SetFollowers(copy.GetFollowers());
            SetRating(copy.GetRating());
            SetBandName(copy.GetBandName());
        }


        void GroupArtist::SetBandName(string name)
            { bandName = name; }
        string GroupArtist::GetBandName() const
            { return bandName; }
             