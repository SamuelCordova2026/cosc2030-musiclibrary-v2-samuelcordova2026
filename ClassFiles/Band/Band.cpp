#include "Band.h"
#include "../Artist/GroupArtist.h"
#include "../Artist/Artist.h"

#include <string>
#include <iostream>

using namespace std;

Band::Band(string name)
{
    bandName = name;
}

Band::Band()
{
    bandName = "none";
}

Band::Band(const Band& copy)
{
    SetName(copy.GetName());
    SetMembers(copy.bandMembers);
}

void Band::DisplayMembers()
{
    cout << endl;
    cout << "Band members: " << endl;
    for (int i = 0; i < bandMembers.size(); i++)
    {
        cout << "\t" << bandMembers.at(i).GetArtistName() << endl;
    }
}

void Band::SetName(string name)
    { bandName = name; }
void Band::SetMembers(vector<GroupArtist> members)
    { bandMembers = members; }

string Band::GetName() const
    { return bandName; }
vector<GroupArtist> Band::GetMembers()
    { return bandMembers; }
void Band::AddMember(GroupArtist member)
    { bandMembers.push_back(member); }