//
//  Students.h
//  ClassADT
//
//  Created by Admin on 2024-07-05.
//

#ifndef Students_h
#define Students_h

class Courses;


class Students{
    public:
        // Constructor, use same class name to initial a class or use init()
        Students(std::string Name, int Age,  std::string School){
            m_Name = Name;
            m_School = School;
            m_Age = Age;
        }
        //Constructor can have multiple to match later instances

        Students(){
            //This one will give random init values
        }
        
    
        int GetAge();
    
        std::string GetSchool();
    Courses* showCourses();
    
    private:
    int m_Age;
    std::string m_Name;
    std::string m_School;
    Courses* p_course;
    
};





#endif /* Students_h */
