#ifndef ARTIST_H
#define ARTIST_H

#include <string>

using namespace std;

class Artist
{
    private:
        string artistName;
        string artistGenre;
        int artistFollowers;
        double artistRating;
    public:
        Artist();
        Artist(string name, string genre, int followers, double rating);
        virtual void Display();
        void SetArtistName(string name);
        void SetArtistGenre(string genre);
        void SetFollowers(int followers);
        void SetRating(double rating);        
        string GetArtistName();            
        string GetArtistGenre();
        int GetFollowers();
        double GetRating();
}; 
#endif