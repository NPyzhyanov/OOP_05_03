#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
    Figure();
    
    virtual void print_info();
    
protected:
    int sides_amount;
    std::string figure_name;
    Side* p_sides;
    Angle* p_angles;
    
    Side* create_sides(int sides_amount_, char* sides_names);
    Angle* create_angles(int sides_amount_, char* angles_names);
    void update_figure_name(std::string new_name) {figure_name = new_name;}
    
    virtual bool is_correct() {return true;}
    
    void print_basic_info();
    
};

#endif // FIGURE_H
