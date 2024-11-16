#pragma once
#include "User.h"
#include "Page.h"
#include "UserList.h"
#include <string>

class Profile
{
public:
	void init(User owner); // function to initate Profile
	void clear(); // function to clear Profile
	User getOwner() const; // function to get owner info
	void setStatus(std::string new_status); // function to set status
	void addPostToProfilePage(std::string post); // function to add a post
	void addFriend(User friend_to_add); // function to add a friend
	std::string getPage() const; // function to get the user page
	std::string getFriends() const; // function to get the users friend list
	std::string getFriendsWithSameNameLength() const; // function to get friend list with only names of same length
	void changeAllWordsInStatus(std::string word); // function to change all the words in the status to a diffrent word
	void changeWordInStatus(std::string word_to_replace, std::string new_word); // fuction to change all the instances of a specifed word in the status to a diffrent specifed word

private:
	User _owner;
	Page _page;
	UserList _friendList;

};