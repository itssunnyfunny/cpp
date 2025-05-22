#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>





struct student {
     int id;
     std::string name;
     int rollNo;
     std::string expertIn;

   };



    void displayInfo(const student& std ) {
        std::cout << std.id << std::endl;
        std::cout << std.name << std::endl;
        std::cout << std.rollNo << std::endl;
        std::cout << std.expertIn << std::endl;
    }

main( ){
  std::string check = "i am getting what is the problem with my gihub account and other networks";

    std::vector<std::string> something;

    something.push_back("one");
    something.push_back("two");
    something.push_back("three");
    something.push_back("four22");
    something.push_back("five");

    // for(const string num : something){
    //   cout << num << endl;
    // }
    
    std::vector<student> class1;

    class1.push_back({102,"shanaya", 2, "hindi"});
    class1.push_back({103,"aryan", 3, "english"});
    class1.push_back({101,"shamer", 1, "english"});
    class1.push_back({104,"ramika", 4, "hindi"});
    class1.push_back({105,"goojar", 5, "english"});


    // for_each(class1.begin(), class1.end(), displayInfo);
    
   sort(class1.begin(), class1.end(), [](const student& std1 , const student& std2){
      return std1.id < std2.id ;
    });
    
    // for_each(class1.begin(), class1.end(), displayInfo);

    std::vector<student> copycont;

    copy_if(class1.begin(), class1.end(), back_inserter(copycont), [](const student& std){
         return std.rollNo <4;
    });

    for_each(copycont.begin() , copycont.end(), displayInfo);
    
    
}