#include <iostream>
#include <memory>

class Project
{
    std::string m_Name;

public:
    void SetName(const std::string &name)
    {
        m_Name = name;
    }
    void ShowProjectDetails() const
    {
        std::cout << "[Project Name] " << m_Name << std::endl;
    }
};

class Employee
{
    std::shared_ptr<Project> m_project{};
    std::string m_name{};

public:
    Employee(std::string name) : m_name{name} {};
    std::string &getName()
    {
        return m_name;
    }
    void SetProject(std::shared_ptr<Project> &prj)
    {
        m_project = prj;
    }
    const std::shared_ptr<Project> &GetProject() const
    {
        return m_project;
    }
};

void ShowInfo(const std::shared_ptr<Employee> &emp)
{
    std::cout << "Employee Project details " << emp->getName() << std::endl;
    emp->GetProject()->ShowProjectDetails();
}

void testProject()
{
    std::shared_ptr<Project> prj{new Project{}};
    prj->SetName("Video Decoder");
    auto e1 = std::make_shared<Employee>("e1");

    e1->SetProject(prj);
    auto e2 = std::make_shared<Employee>("e2");

    e2->SetProject(prj);
    auto e3 = std::make_shared<Employee>("e3");

    e3->SetProject(prj);

    ShowInfo(e1);
    ShowInfo(e2);
    ShowInfo(e3);

    prj->ShowProjectDetails();
}
