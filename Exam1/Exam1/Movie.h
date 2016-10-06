#pragma once
#include<string> // For use of string class
using namespace std;


class Movie
{
private:
	string movieTitle;
	string movieGenre;
	int movieTime;

public:
	//Come up with a default movie for your theater
	Movie();
	// for Genre, only Action, Comedy, Horror, and Documentary. If none of those, 
	// default to Comedy
	Movie(string, string, int);
	
	string GetTitle(); // Returns the movie title
	string GetGenre(); // Returns the movie genre
	int GetShowtime(); // When is this movie shown?
};