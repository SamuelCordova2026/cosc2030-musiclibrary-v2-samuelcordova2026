#ifndef GROUPARTIST_H
#define GROUPARTIST_H

#include "Artist.h"
//#include "../Band/Band.h"

using namespace std;

//FOR ARTISTS IN A GROUP (EX: A BAND MEMBER)
class GroupArtist : public Artist //Inheritance
{
    private:
        //Band bandVar;
    public:
        void Display() override; //Polymorphism
        GroupArtist();
        GroupArtist(string name, int followers, double rating);

        //void SetBand(Band band);
        //Band GetBand();
};

#endif