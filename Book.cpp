#include"Book.h"

class Book_id{
public:
	unsigned long int id = 0;
	unsigned int number = 0;
}

class Book{
	/**
     * Value of the {@link #state} field indicating
     * available.
     */
	static const int STATE_AVAILABLE = 1;
	/**
     * Value of the {@link #state} field indicating
     * issued.
     * If the book is claimed while it is issued,
     * the state remains issued until it is returned.
     */
	static const int STATE_ISSUED = 2;
	/**
     * Value of the {@link #state} field indicating
     * claimed.
     * If the book is claimed while it is issued,
     * the state remains issued until it is returned.
     */
	static const int STATE_CLAIMED = 3;
	long unsigned int book_id;
	string title;
	string author;
	string publisher;
	/**
     * Field indicating the present state of the book.
     * 
     * @see #STATE_AVAILABLE
     * @see #STATE_ISSUED
     * @see #STATE_CLAIMED
     */
	int state = 1;

public:
	/**
	 * Default constructor
	 */
	Book() {
		this->book_id = 0;
		this->title = "";
		this->author = "";
		this->publisher = "";
	}

	/**
	 * Parameterized constructor
	 * @param title The title of the book
	 * @param author The name of the author of the book
	 * @param publisher The name of the publisher of the book
	 * @param book_id The unique ID given to each book in the library
	 */
	Book(int book_id, string title, string author, string publisher) {
		this->book_id = book_id;
		this->title = title;
		this->author = author;
		this->publisher = publisher;
	}

	/**
	 * Copy constructor
	 * @param original The book object to make a copy of
	 */
	Book(const Book &original) {
		this->book_id = original.book_id;
		this->title = original.title;
		this->author = original.author;
		this->publisher = original.publisher;
	}

	/**
	 * Returns the ID of the book
	 * @return book ID
	 */
	long unsigned int getBookID() {
		return book_id;
	}

	/**
	 * Changes the ID of the book
	 * @param book_id The new ID that is to be set
	 */
	void setBookID(long unsigned int book_id) {
		this->book_id = book_id;
	}

	/**
	 * Returns the title of the book
	 * @return book title
	 */
	string getTitle() {
		return title;
	}

	/**
	 * Changes the title of the book
	 * @param title The new title that is to be set
	 */
	void setTitle(string title) {
		this->title = title;
	}

	/**
	 * Returns the name of the author of the book
	 * @return book author name
	 */
	string getAuthor() {
		return author;
	}

	/**
	 * Changes the name of the author of the book
	 * @param author The new author name that is to be set
	 */
	void setAuthor(string author) {
		this->author = author;
	}

	/**
	 * Returns the name of the publisher of the book
	 * @return book publisher
	 */
	string getPublisher() {
		return publisher;
	}

	/**
	 * Changes the name of the publisher of the book
	 * @param publisher The new publisher name that is to be set
	 */
	void setPublisher(string publisher) {
		this->publisher = publisher;
	}

	/**
	 * Returns the current state of the book
	 * @return state
	 */

	int getState() {
		return state;
	}

	/**
	 * Changes the state of the book
	 * @param publisher The new state that is to be set
	 */
	void setState(int state) {
		this->state = state;
	}

	void update_book_num(int i=1){ // i=1 when a book is added while i=-1 when the book is to be deleted
		this->book_id.number+=i;
		this->state=1;
	}

	void update_new_book_id(long unsigned int id){ // Only for newly initialised books
		this->book_id.id=id;
		this->book_id.number++;
		this->state=1 ; //Now available
	}

};
