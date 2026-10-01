#ifndef SOLOARTIST_H
#define SOLOARTIST_H

#include "Artist.h"

//FOR ARTISTS WHO MAKE MUSIC ALONE
class SoloArtist : Artist //Inheritance
{
    public:
        void Display() override; //Polymorphism
        SoloArtist();
        SoloArtist(string name, int followers, double rating);
};

#endif