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
	unsigned int getID() const;
	DeviceType getType() const;
	Device& init(unsigned int id, DeviceType type, std::string os);
	std::string getOS() const;
	bool isActive() const;
	void activate();
	void deactivate();
private:
	std::string _os;
	unsigned int _id;
	DeviceType _type;
	bool _active;

};

