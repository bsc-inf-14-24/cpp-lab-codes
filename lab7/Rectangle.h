#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float l, float w);

    // Destructor
    ~Rectangle();

    // Mutators (setters)
    void setLength(float l);
    void setWidth(float w);

    // Accessors (getters)
    float getLength() const;
    float getWidth() const;

    // Function to calculate area
    float getArea() const;
};

#endif