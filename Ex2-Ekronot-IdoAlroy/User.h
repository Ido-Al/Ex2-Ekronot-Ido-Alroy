#pragma once
#include <string>
#include "DeviceList.h"
#include "Device.h"
class User
{
public:
	// constractor and clear
	void init(unsigned int id, std::string username, unsigned int age); // function to initate a user
	void clear(); // function to clear the devices of a user
	// getters
	unsigned int getID() const; // function to  get the id of the user
	std::string getUserName() const; // function to get the username
	unsigned int getAge() const; // function to get the age
	DevicesList& getDevices(); // function to get the devices 
	// device actions
	void addDevice(Device newDevice); // function to add a device
	bool checkIfDevicesAreOn() const; // function to check if all the devices of the user are activated
private:
	unsigned int _id;
	std::string _username;
	unsigned int _age;
	DevicesList _deviceList;
};