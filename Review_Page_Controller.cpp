#include "Review_Page_Controller.h"
#include "Review_Page.h"
#include "Utilities.h"

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void Review_Page_Controller::showReviews()
{
	system("CLS");
	vector<string> reviews = Review_Page_Controller::retrieveFileInfo();
	gotoxy(50, 8);
	cout << "|=====================================================|\n";
	gotoxy(50, 9);
	cout << "|                    Show Reviews                     |\n";
	gotoxy(50, 10);
	cout << "|=====================================================|\n";
	gotoxy(50, 11);
	cout << "|                                                     |\n";

	int i = 12;

	int revNum = 1;
	for (auto itr = reviews.begin(); itr != reviews.end(); ++itr) {
		gotoxy(50, i++);
		cout << "|   Review: " << revNum++;
		gotoxy(104, --i);
		cout << "|";
		gotoxy(50, ++i);
		cout << "|\t " << (*itr);
		gotoxy(104, i++);
		cout << "|";
	}
	gotoxy(50, i++);
	cout << "|-----------------------------------------------------|\n";
	gotoxy(50, ++i);
	cout << "|=====================================================|\n";
	gotoxy(50, --i);
	cout << "|                                                     |\n";
	gotoxy(53, i);
	system("pause");
	Review_Page::showReviewPage();
}

void Review_Page_Controller::addReview()
{
	vector<string> reviews = Review_Page_Controller::retrieveFileInfo();
	system("CLS");
	gotoxy(50, 8);
	cout << "|=====================================================|\n";
	gotoxy(50, 9);
	cout << "|                    Add a Review                     |\n";
	gotoxy(50, 10);
	cout << "|=====================================================|\n";
	gotoxy(50, 11);
	cout << "|                                                     |\n";
	gotoxy(50, 12);
	cout << "|  Enter review (press enter to finish):              |\n";
	gotoxy(50, 13);
	cout << "|                                                     |\n";
	gotoxy(50, 14);
	cout << "|-----------------------------------------------------|\n";
	gotoxy(50, 16);
	cout << "|=====================================================|\n";
	gotoxy(50, 15);
	cout << "|                                                     |\n";	

	string review;
	cin.clear(); 
	cin.ignore();
	gotoxy(55, 13);
	getline(cin, review);
	reviews.push_back(review);
	save(reviews);
	gotoxy(53, 15);
	system("pause");
	Review_Page::showReviewPage();
}

void Review_Page_Controller::clearReviews()
{
	vector<string> reviews = Review_Page_Controller::retrieveFileInfo();
	system("CLS");
	gotoxy(50, 8);
	cout << "|=====================================================|\n";
	gotoxy(50, 9);
	cout << "|                   Delete Reviews                    |\n";
	gotoxy(50, 10);
	cout << "|=====================================================|\n";
	gotoxy(50, 11);
	cout << "|                                                     |\n";
	gotoxy(50, 12);
	cout << "|  Are you Sure you want to delete the reviews?(YN)   |\n";
	gotoxy(50, 13);
	cout << "|                                                     |\n";
	gotoxy(50, 14);
	cout << "|-----------------------------------------------------|\n";
	gotoxy(50, 16);
	cout << "|=====================================================|\n";	
	gotoxy(50, 15);
	cout << "| Enter choice Here:                                  |\n";
	string deleteYN;
	gotoxy(71, 15);
	cin >> deleteYN;
	if (deleteYN.compare("y") == 0 || deleteYN.compare("Y") == 0)
	{
		gotoxy(50, 12);
		cout << "|                   Reviews Deleted!                  |\n";
		gotoxy(50, 15);
		cout << "|                                                     |\n";
		gotoxy(51, 15);
		system("pause");
		reviews.clear();
		save(reviews);
	}
	else
	{
		gotoxy(50, 12);
		cout << "|                Reviews Not Deleted!                 |\n";
		gotoxy(50, 15);
		cout << "|                                                     |\n";
		gotoxy(52, 15);
		system("pause");
	}
	Review_Page::showReviewPage();
}

void Review_Page_Controller::save(vector<string> reviews)
{
	ofstream ofs{ "reviews.txt" };
	for (const auto& str : reviews) {
		ofs << str << '\n';
	}
	if (!ofs) {
		cerr << "Error in saving reviews" << endl;
	}
	ofs.close();
}

vector<string> Review_Page_Controller::retrieveFileInfo()
{
	vector<string> reviews;
	ifstream ifs{ "reviews.txt" };
	string tmp;
	while (getline(ifs, tmp)) {
		reviews.push_back(tmp);
	}
	return reviews;
}