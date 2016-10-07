///////////////////////////////////////////////
// I affirm that all code given below was written solely by me, Ian Fish, and that any help I received
// adhered to the rules stated for this exam.
/////////////////////////////////////////////////////////

#include "Theater.h"

Theater::Theater(string Name, string Phone)
{
	movieNumber = 0;
	theaterName = Name;
	phoneNumber = Phone;
}

void Theater::AddMovie(Movie& Movie)
{
	movieTimes[movieNumber] = Movie.GetShowtime();
	movieList[movieNumber] = Movie.GetTitle();
	movieGenres[movieNumber] = Movie.GetGenre();
	movieNumber++;
}

string Theater::GetMovieForHour(int Hour)
{
	for (int i = 0; i < 11; i++)
	{
		if (movieTimes[i] == Hour)
			return movieList[i];
	}
	return "";
}

int Theater::GetShowTimeForGenre(string Genre)
{
	for (int i = 0; i < 11; i++)
	{
		if (movieGenres[i] == Genre)
			return movieTimes[i];
	}
	return -1;
}

int Theater::GetPopcornPrice()
{
	// Popcorn is $5.00
	return 5; 
}

int Theater::GetCokePrice()
{
	// Coke is $2.00
	return 2;
}