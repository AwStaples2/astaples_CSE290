

class Square {

    public: // specify the interface, things that operate on your attributes
        double calcArea();

        void setLength(double /*(name or parameter not required)*/);

        void setWidth(double); // setter fxns - they change the values of attributes
    

    private:
        double length_; // attributes - the underscore is convention to show that it is private
        double width_;



};