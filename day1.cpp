#include <iostream>
#include <bits/stdc++.h>
// instead of using math.h or string.h. #include<bits/stdc++.h> There are alot of libraries inside c++, like math.h
// string.h etc, having to include all of them one by one can be time consuming,
// Hence in Competitive Programming the first rule is to write #include<bits/stdc++.h>
// But never use it in Interview becos when you include alot of header files it takes alot of time to import so many files,
// hence in interview just include those header files that are required.
using namespace std;
//
namespace shambhavi
{
    int val = 9;
};
// to create a datatype where we can store a string, and int a double a char using struct

struct Rectangle
{
    int width;  // member variable
    int height; // member variable

    // C++ constructors
    Rectangle()
    {
        width = 1;
        height = 1;
    }

    Rectangle(int width_)
    {
        width = width_;
        height = width_;
    }

    Rectangle(int width_, int height_)
    {
        width = width_;
        height = height_;
    }
    // ...
};

// struct node
// {
//     string str;
//     int num;
//     double dub;
//     char c;

//     // constructor
//     node(str_, num_, dub_, c_)
//     {
//         str = str_;
//         num = num_;
//         dub = dub_;
//         c = c_;
//     }
// };

int main()
{
    int val = 10;

    cout << shambhavi::val << endl; // prints 9
    // if we dont write using namespace std we will have to write cout as
    std::cout << val << endl;

    // wrong way of defining
    // node shambhavi;
    // shambhavi.str = "sham";
    // shambhavi.num = 9;
    // shambhavi.dub = 9.83;

    // node shambhavi = new node("shambhavii", 79, 91.0, "");
}
