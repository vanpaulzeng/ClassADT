//
//  Courses.h
//  ClassADT
//
//  Created by Admin on 2024-07-05.
//

#ifndef Courses_h
#define Courses_h

class Courses{
    public:
    Courses(std::string Name, std::string Course){
        m_Name = Name;
        m_Course = Course;
    }
    
    void setCourses(std::string Name, std::string Course);
    
    private:
    std::string m_Name, m_Course;
};



#endif /* Courses_h */
