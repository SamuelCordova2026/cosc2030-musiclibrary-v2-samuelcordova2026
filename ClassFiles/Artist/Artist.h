#ifndef ARTIST_H
#define ARTIST_H

#include <string>

using namespace std;


//DEFAULT CLASS ALL ARTISTS WILL INHERIT FROM
class Artist
{
    private:
        string artistName;
        string artistGenre;
        int artistFollowers;
        double artistRating;
    public:
        virtual void Display() = 0; //Pure virtual function
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