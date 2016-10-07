#pragma once
#include<string> // For use of string class
#include"Movie.h" // For the Movie class
using namespace std;

class Theater
{
private:
	// where the movie sits in the storage array
	int movieNumber;
	string theaterName;
	string phoneNumber;
	// storage array for showtimes at theater. can hold 11 movies
	int movieTimes[11];
	// stoarage array for movie titles at theater. can hold 11 movies
	string movieList[11];
	// storage array for genres at theater. can hold 11 movies
	string movieGenres[11];
	
public:

	Theater(string, string);	//The name for this theater
	void AddMovie(Movie&);		//Add a movie at a specific time
	string GetMovieForHour(int);	//Return the movie shown at or after the given hour 
										//   Return "" if none are upcoming

	int GetShowTimeForGenre(string);//When will the movie of the given genre be shown?
										//   Return -1 if none exist
	int GetPopcornPrice();				//Make up a cost in dollars for popcorn
	int GetCokePrice();					//Make up a cost on Coke
};
