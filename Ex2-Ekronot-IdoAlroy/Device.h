#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		     //
													     //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
													     //
/// ///////////////////////////////////////////////////////


class Device
{
public:
	// getters
	unsigned int getID() const; // function to get id
	DeviceType getType() const; // finction to get type
	std::string getOS() const; // function to get OS
	Device& init(unsigned int id, DeviceType type, std::string os); // function to initate Device
	bool isActive() const; // function to check if device is active
	void activate(); // function to activate device
	void deactivate(); // function to deactivate device
private:
	std::string _os;
	unsigned int _id;
	DeviceType _type;
	bool _active;

};

