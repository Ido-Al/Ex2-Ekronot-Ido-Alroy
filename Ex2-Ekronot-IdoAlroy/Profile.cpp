#include "Profile.h"
void Profile::init(User owner)
{
	_owner = owner;
	_page.init();
	_friendList.init();
}
void Profile::clear()
{
	_friendList.clear();
}
User Profile::getOwner() const
{
	return _owner;
}
void Profile::setStatus(std::string new_status)
{
	_page.setStatus(new_status);
}
void Profile::addPostToProfilePage(std::string post)
{
	_page.addLineToPosts(post);
}
void Profile::addFriend(User friend_to_add)
{
	_friendList.add(friend_to_add);
}
std::string Profile::getPage() const
{
	return "Status: " + _page.getStatus() + "\n*******************\n*******************" + _page.getPosts() + "\n";
}
std::string Profile::getFriends() const
{
	UserNode* first = _friendList.get_first();
	std::string flist = "";
	while (first != nullptr)
	{
		if (flist.size() > 1)
		{
			flist += ",";
		}
		flist += first->get_data().getUserName();
		first = first->get_next();
	}
	return flist;
}

std::string Profile::getFriendsWithSameNameLength() const
{
	UserNode* first = _friendList.get_first();
	std::string flist = "";
	while (first != nullptr)
	{

		if (_owner.getUserName().size() == first->get_data().getUserName().size())
		{
			if (flist.size() > 1)
			{
				flist += ",";
			}
			flist += first->get_data().getUserName();
		}
		first = first->get_next();
	}
	return flist;
}

void Profile::changeAllWordsInStatus(std::string word) 
{
	std::string status = _page.getStatus();
	std::string output = ""; 
	std::string currentWord = ""; 
	for (int i = 0; i < status.size(); i++) 
	{
		char c = status[i];
		if (c == ' ' || c == '\t' || c == '\n') 
		{
			if (!currentWord.empty()) 
			{
				output += word;
				currentWord = "";
			}
			// add space, tab or \n
			output += c;
		}
		else 
		{
			currentWord += c;
		}
	}

	// last word
	if (!currentWord.empty()) {
		output += word;
	}
	_page.setStatus(output);
}
void Profile::changeWordInStatus(std::string word_to_replace, std::string new_word)
{
	std::string status = _page.getStatus();
	std::string output = "";
	std::string currentWord = "";

	for (int i = 0; i < status.size(); i++)
	{
		char c = status[i];

		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (currentWord.find(word_to_replace) != std::string::npos)
			{
				output += new_word;
			}
			else
			{
				output += currentWord;
			}
			output += c;
			currentWord = "";
		}
		else
		{
			currentWord += c;
		}
	}

	if (currentWord.find(word_to_replace) != std::string::npos)
	{
		output += new_word;
	}
	else
	{
		output += currentWord;
	}

	_page.setStatus(output);
}