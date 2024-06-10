#pragma once
#include "ExamTask.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void print(string msg, bool result) {
	cout << msg << (result ? RIGHT : WRONG) << endl;
}

// NegativeCaseWithOneDay
bool test01() {
	const int size = 1;
	int marks[] = { 5 };
	int expected = -1;
	return expected == findBestMarkNumber(marks, size);
}

// NegativeCaseWithSixDays
bool test02() {
	const int size = 6;
	int marks[] = { 5, 5, 5, 5, 5, 5 };
	int expected = -1;
	return expected == findBestMarkNumber(marks, size);
}

// NegativeCaseWithWrongMarksWhichAreLessThanMinMark
bool test03() {
	const int size = 7;
	int wrongMark = 1;
	int marks[] = { 5, 5, 5, wrongMark, 5, 5, 5 };
	int expected = -1;
	return expected == findBestMarkNumber(marks, size);
}

// NegativeCaseWithWrongMarksWhichAreMoreThanMaxMark
bool test04() {
	const int size = 7;
	int wrongMark = 6;
	int marks[] = { 5, 5, 5, wrongMark, 5, 5, 5 };
	int expected = -1;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllBestMarks
bool test05() {
	const int size = 7;
	int bestMark = 5;
	int marks[] = { bestMark, bestMark, bestMark, bestMark, bestMark, bestMark, bestMark };
	int expected = 7;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllNegativeMarks
bool test06() {
	const int size = 7;
	int marks[] = { 2, 3, 2, 3, 2, 3, 2 };
	int expected = -1;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksButNotBestMarks
bool test07() {
	const int size = 9;
	int marks[] = { 4, 4, 4, 4, 4, 4, 4, 4, 4 };
	int expected = 0;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksAndOneBestMarks
bool test08() {
	const int size = 7;
	int marks[] = { 5, 4, 4, 4, 4, 4, 4 };
	int expected = 1;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksAndTwoBestMarks
bool test09() {
	const int size = 7;
	int marks[] = { 5, 5, 4, 4, 4, 4, 4 };
	int expected = 2;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksAndThreeBestMarks
bool test10() {
	const int size = 7;
	int marks[] = { 5, 5, 5, 4, 4, 4, 4 };
	int expected = 3;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksAndFourBestMarks
bool test11() {
	const int size = 7;
	int marks[] = { 5, 5, 5, 5, 4, 4, 4 };
	int expected = 4;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksAndFiveBestMarks
bool test12() {
	const int size = 7;
	int marks[] = { 5, 5, 5, 5, 5, 4, 4 };
	int expected = 5;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithAllGoodMarksAndSixBestMarks
bool test13() {
	const int size = 7;
	int marks[] = { 5, 5, 5, 5, 5, 5, 4 };
	int expected = 6;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithFirstSevenDays
bool test14() {
	const int size = 9;
	int marks[] = { 5, 5, 4, 5, 4, 5, 4, 5, 4 };
	int expected = 4;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithMiddleSevenDays
bool test15() {
	const int size = 11;
	int marks[] = { 3, 4, 4, 4, 4, 5, 4, 5, 4, 3, 2 };
	int expected = 2;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithLastSevenDays
bool test16() {
	const int size = 15;
	int marks[] = { 3, 4, 4, 5, 5, 4, 4, 3, 4, 5, 4, 5, 4, 4, 4 };
	int expected = 2;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithFirstMaxMarkNumber
bool test17() {
	const int size = 19;
	int marks[] = { 5, 3, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 5, 4, 4, 4, 3, 4 };
	int expected = 7;
	return expected == findBestMarkNumber(marks, size);
}

// PositiveCaseWithMiddleMaxMarkNumber
bool test18() {
	const int size = 22;
	int marks[] = { 5, 4, 5, 4, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 5, 5, 5, 5 };
	int expected = 7;
	return expected == findBestMarkNumber(marks, size);
}


// PositiveCaseWithLasMaxMarkNumber
bool test19() {
	const int size = 23;
	int marks[] = { 5, 3, 4, 5, 5, 5, 4, 5, 4, 4, 4, 4, 5, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5 };
	int expected = 7;
	return expected == findBestMarkNumber(marks, size);
}

// positive case with no right period
bool test20() {
	const int size = 13;
	int marks[] = { 5, 5, 5, 5, 5, 5, 3, 4, 5, 5, 5, 5, 5 };
	int expected = -1;
	return expected == findBestMarkNumber(marks, size);
}

void testingExamTask() {
	bool result = test01()
		&& test02()
		&& test03()
		&& test04()
		&& test05()
		&& test06()
		&& test07()
		&& test08()
		&& test09()
		&& test10()
		&& test11()
		&& test12()
		&& test13()
		&& test14()
		&& test15()
		&& test16()
		&& test17()
		&& test18()
		&& test19()
		&& test20();

	print("Exam Task [The Best Result]", result);

}