#ifndef GROUPARTIST_H
#define GROUPARTIST_H

#include "Artist.h"
//#include "../Band/Band.h"

using namespace std;

class GroupArtist : public Artist
{
    private:
        //Band bandVar;
    public:
        virtual void Display() override;
        GroupArtist();
        GroupArtist(string name, string genre, int followers, double rating);

        //void SetBand(Band band);
        //Band GetBand();
};

#endif