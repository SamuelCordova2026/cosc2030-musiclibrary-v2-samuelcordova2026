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
void Band::DisplayMembers()
{
    cout << endl;
    cout << "Band members: ";
    for (int i = 0; i < bandMembers.size(); i++)
    {
        cout << bandMembers.at(i).GetArtistName() << endl;
    }
}

void Band::SetName(string name)
    { bandName = name; }
void Band::SetMembers(vector<GroupArtist> members)
    { bandMembers = members; }

string Band::GetName()
    { return bandName; }
vector<GroupArtist> Band::GetMembers()
    { return bandMembers; }
void Band::AddMember(GroupArtist member)
    { bandMembers.push_back(member); }