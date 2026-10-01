#ifndef GROUPARTIST_H
#define GROUPARTIST_H

#include "Artist.h"
//#include "../Band/Band.h"

using namespace std;

//FOR ARTISTS IN A GROUP (EX: A BAND MEMBER)
class GroupArtist : public Artist //Inheritance
{
    private:
        string bandName;
    public:
        void Display() override; //Polymorphism
        GroupArtist();
        GroupArtist(string name, string bandName, int followers, double rating);

        GroupArtist(const GroupArtist& copy);

        void SetBandName(string name);
        string GetBandName() const;
};

#endif