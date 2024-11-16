#pragma once
#include <string>
#include "DeviceList.h"
#include "Device.h"
class User
{
public:
	// constractor and clear
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();
	// getters
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	DevicesList& getDevices();
	// device actions
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;
private:
	unsigned int _id;
	std::string _username;
	unsigned int _age;
	DevicesList _deviceList;
};