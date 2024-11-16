#include "User.h"
#include <iostream>

void User::init(unsigned int id, std::string username, unsigned int age)
{
	_id = id;
	_username = username;
	_age = age;
	_deviceList.init();
}
void User::clear()
{
	_deviceList.clear();
}
unsigned int User::getID() const
{
	return _id;
}
std::string User::getUserName() const
{
	return _username;
}
unsigned int User::getAge() const
{
	return _age;
}
DevicesList& User::getDevices()
{
	return _deviceList;
}

void User::addDevice(Device newDevice)
{
	_deviceList.add(newDevice);
}
bool User::checkIfDevicesAreOn() const
{
	DeviceNode* first = _deviceList.get_first();
	bool active = true;
	while (first != nullptr)
	{
		active = first->get_data().isActive();
		if (!active)
		{
			return false;
		}
		first = first->get_next();
	}
	return active;
}