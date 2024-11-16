#pragma once
#include <string>
class Page
{
public:
	void init();
	// getters
	std::string getPosts() const; // function to get posts
	std::string getStatus() const; // function to get status

	void clearPage(); // function to clear page
	// setters
	void setStatus(std::string status); // function to set status
	void addLineToPosts(std::string new_line); // function to add a new post
private:
	std::string _posts;
	std::string _status;
};