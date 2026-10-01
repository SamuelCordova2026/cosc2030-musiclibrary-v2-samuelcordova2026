#ifndef BAND_H
#define BAND_H

#include <string>
#include <vector>

#include "../Artist/GroupArtist.h"

using namespace std;


class Band
{
    private:
        string bandName;
        vector<GroupArtist> bandMembers;
    public:
        Band();
        Band(string name);

        Band(const Band& copy);

        void DisplayMembers();

        void SetName(string name);
        void SetMembers(vector<GroupArtist> members);
        string GetName() const;
        vector<GroupArtist> GetMembers();

        void AddMember(GroupArtist);
};

#endif