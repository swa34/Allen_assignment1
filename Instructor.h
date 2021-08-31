#include <string>
#include "Student.h"

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

class Instructor {
 public:
  Instructor();
  Instructor(std::string username, std::string password, std::string fullName);


  static bool login(const std::string& username, const std::string& password, char **argv);
  string getInstructorName();
  string getUsername();
  string getPassword();

  static bool getStudent(const std::string& username, Student students[], int numStudents);
  static string getMinStudent(int gradeType, Student students[], int numStudents);
  static string getMaxStudent(int gradeType, Student students[], int numStudents);
  static string getAvg(int gradeType, Student students[], int numStudents);

  void operator=(Instructor i);

private:
  std::string fullName;
  std::string username;
  std::string password;
}; //Instructor

#endif