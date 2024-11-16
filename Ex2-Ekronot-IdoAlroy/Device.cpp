#include <iostream>
#include "Device.h"

unsigned int Device::getID() const
{
	return _id;
}
DeviceType Device::getType() const
{
	return _type;
}
Device& Device::init(unsigned int id, DeviceType type, std::string os)
{
	_id = id;
	_type = type;
	_os = os;
	_active = true;
	return *this; // becuse of the hidden &Device I use * to derfrence
}
std::string Device::getOS() const
{
	return _os;
}
bool Device::isActive() const
{
	return _active;
}
void Device::activate()
{
	_active = true;
}
void Device::deactivate()
{
	_active = false;
}