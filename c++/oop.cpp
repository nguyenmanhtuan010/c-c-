#include <iostream>
#include <vector>
using namespace std;

class Movie {
	private:
	    string name;
	    string rating;
	    int watched;
	    vector<Movie> movies;
	public:
	    Movie();
	    Movie(string name, string rating, int watched);
	    string getName();
	    string getRating();
	    int getWatched();
	    void count();
	    bool add_movie(string name, string rating, int watched);
        void increment_watched(string name);
        void display();
};

Movie::Movie(){
}

Movie::Movie(string name, string rating, int watched){
	this -> name = name;
	this -> rating = rating;
	this -> watched = watched;
}
string Movie::getName(){
    return this ->name;
}

string Movie::getRating(){
    return this ->rating;
}

int Movie::getWatched(){
    return this ->watched;
}

void Movie:: count() {
    ++watched;
}
bool Movie::add_movie(string name, string rating, int watched) {
    for (Movie movie : movies) {
        if (movie.getName() == name) {
            cout << name << " already exists" << endl;
            return false;
        }
    }
    movies.push_back(Movie(name,rating,watched));
    cout << name << " added" << endl;
    return true;
}


void Movie::increment_watched(string name) {
    for (Movie& movie : movies) {
        if (movie.getName() == name) {
           	movie.count();
           	cout << name << " watch incremented" << endl;
        }
    }
}

void Movie::display(){
    if (movies.empty()) {
        cout << "Sorry, no movies to display" << endl;
    } 
	else {
        for ( Movie movie : movies) {
            cout << movie.getName() << ", " << movie.getRating() << ", " << movie.getWatched() << endl;
        }
    }
}

int main() {
	
    Movie my_movies;
    my_movies.display();
    cout <<"=================================================="<< endl;
    my_movies.add_movie("Big", "PG-13", 2);
    my_movies.add_movie("Star Wars", "PG", 5);
    my_movies.add_movie("Cinderella", "PG", 7);
    my_movies.display();
    cout <<"=================================================="<< endl;
    my_movies.add_movie("Cinderella", "PG",7);           
    my_movies.add_movie("Ice Age", "PG",12);              
    my_movies.display();    
    cout <<"=================================================="<< endl;
    my_movies.increment_watched("Big");                    
    my_movies.increment_watched("Ice Age");              
    my_movies.display(); 
    return 0;
}
