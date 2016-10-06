///////////////////////////////////////////////
// I affirm that all code given below was written solely by me, Ian Fish, and that any help I received
// adhered to the rules stated for this exam.
/////////////////////////////////////////////////////////

#include "Movie.h"

Movie::Movie()
{
	// Defult movie is 'Raiders of the Lost Ark'
	movieGenre = "Action";
	movieTitle = "Raiders of the Lost Ark";
	movieTime = 8;
}

Movie::Movie(string Title, string Genre, int ShowTime)
{
	movieTitle = Title;
	// Check if inputed Genre is Action, Comedy, Horror, or Documentary
	if (Genre == "Action" || Genre == "Comedy" || Genre == "Horror" || Genre == "Documentary")
		movieGenre = Genre;
	else
		movieGenre = "Comedy";
	movieTime = ShowTime;
}

string Movie::GetTitle()
{
	return movieTitle;
}

string Movie::GetGenre()
{
	return movieGenre;
}

int Movie::GetShowtime()
{
	return movieTime;
}