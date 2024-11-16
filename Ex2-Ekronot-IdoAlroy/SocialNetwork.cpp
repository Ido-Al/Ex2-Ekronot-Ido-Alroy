#include "SocialNetwork.h";
void SocialNetwork::init(std::string networkName, int minAge)
{
	_networkName = networkName;
	_minAge = minAge;
	_profileList.init();
}
void SocialNetwork::clear()
{
	_profileList.clear();
}
std::string SocialNetwork::getNetworkName() const
{
	return _networkName;
}
int SocialNetwork::getMinAge() const
{
	return _minAge;
}
bool SocialNetwork::addProfile(Profile profile_to_add)
{
	return _profileList.add(profile_to_add);
}
std::string SocialNetwork::getWindowsDevices()
{
	ProfileNode* first = _profileList.get_first();
	std::string wlist = "";
	while (first != nullptr)
	{
		DeviceNode* firstDevice = first->get_data().getOwner().getDevices().get_first();
		while (firstDevice != nullptr)
		{
			if (firstDevice->get_data().getOS() == WINDOWS7
				|| firstDevice->get_data().getOS() == WINDOWS10
				|| firstDevice->get_data().getOS() == WINDOWS11)
			{
				std::string id = std::to_string(firstDevice->get_data().getID());
				std::string os = firstDevice->get_data().getOS();
				if (wlist.size() > 1)
				{
					wlist += ", ";
				}
				wlist += "[" + id + ", " + os + "]";
			}
			firstDevice = firstDevice->get_next();
		}
		first = first->get_next();
	}
	return wlist;
}