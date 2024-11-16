#pragma once
#include <string>
class Page
{
public:
	void init();
	// getters
	std::string getPosts() const;
	std::string getStatus() const;

	void clearPage();
	// setters
	void setStatus(std::string status);
	void addLineToPosts(std::string new_line);
private:
	std::string _posts;
	std::string _status;
};