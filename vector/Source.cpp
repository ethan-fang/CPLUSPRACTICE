#include <iostream>
#include <vector>

enum class Case
{
    SENSITIVE,
    INSENSITIVE
};

std::vector<int> FindAll(
    const std::string &target,           // Target string to be searched
    const std::string &search_string,    // The string to search for
    Case searchCase = Case::INSENSITIVE, // Choose case sensitive/insensitive search
    size_t offset = 0)
{ // Start the search from this offset
  // Implementation
    std::vector<int> indices;

    if (search_string.empty())
    {
        return indices; // Return an empty vector if the search string is empty
    }

    std::string target_substr = target.substr(offset);
    std::string search_substr = search_string;

    if (searchCase == Case::INSENSITIVE)
    {
        // Convert both substrings to lowercase for case-insensitive search
        std::transform(target_substr.begin(), target_substr.end(), target_substr.begin(), ::tolower);
        std::transform(search_substr.begin(), search_substr.end(), search_substr.begin(), ::tolower);
    }

    size_t pos = 0;
    while ((pos = target_substr.find(search_substr, pos)) != std::string::npos)
    {
        indices.push_back(static_cast<int>(pos + offset));
        pos += search_substr.length();
    }

    return indices;
}

int main()
{
    int arr[10];
    int *ptr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        ptr[i] = i * 10;
    }

    std::vector<int> data{1, 2, 3};
    for (int i = 0; i < 5; ++i)
    {
        data.push_back(4);
    }
    // Access
    for (int i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << " ";
    }

    for (auto x : data)
    {
        std::cout << x << " ";
    }

    auto it = data.begin();
    std::cout << *it;
    ++it;
    --it;
    it = it + 5;

    // Delete
    it = data.begin();
    data.erase(it);

    // Insert
    it = data.begin() + 5;
    data.insert(it, 500);

    return 0;
}
