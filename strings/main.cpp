#include <iostream>

const char * Combine(const char *pFirst, const char *pLast) {
  char *fullname = new char[strlen(pFirst) + strlen(pLast)];
  strcpy(fullname, pFirst);
  strcat(fullname, pLast);
  return fullname;
}

int main() {
  char first[10] = "test";
  char last[10] = "word";

  const char *pFullName = Combine(first, last);

  std::cout << pFullName << std::endl;
  delete[] pFullName;

  // Initialize & assign
  std::string s = "Hello";
  s = "Hello";

  // Access
  s[0] = 'W';
  char ch = s[0];

  // Size
  s.length();

  // Insert & concatenate
  std::string s1{"Hello"}, s2{"World"};
  s = s1 + s2;

  s += s1;

  s.insert(6, "World");

  // Comparison
  if (s1 == s2) {

  }

  // Removal
  s.erase();
  s.clear();
  s.erase(0, 5);

  // Search
  auto pos = s.find("World", 0);
  if (pos != std::string::npos) {
    // Found
  }
  return 0;
}