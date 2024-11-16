#pragma once
#include "ProfileList.h"
#include <string>

class SocialNetwork
{
public:
	void init(std::string networkName, int minAge); // function to initate a social network
	void clear(); //  function to clear all of the profiles off of the soical network
	std::string getNetworkName() const; // function to get the networks name
	int getMinAge() const; // function to get the minimum age requaried to enter the soical network
	bool addProfile(Profile profile_to_add); // function to add a profile to the social network
	std::string getWindowsDevices(); // function to get all of the windows devices using the network
private:
	std::string _networkName;
	int _minAge;
	ProfileList _profileList;
};