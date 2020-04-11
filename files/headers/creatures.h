#ifndef CREATURES_H
#define CREATURES_H

#include <iostream>

namespace game
{

    class Creature
    {
        private:
            unsigned myHP;
            unsigned myBaseATQ;
            int myX;
            int myY;

        public:
            Creature (unsigned HP = 600, unsigned BaseATQ = 200, int X = 0, int Y = 0);
            
            
            //accessors
            int getX(void);
            int getY(void);
            unsigned getBaseATQ(void) const;
            unsigned getHP(void) const;

            //sets
            void setX(int AmmountX);
            void setY(int AmmountY);


            //operators
            void move(char direction);
            void jump();
            void display() const;


    }; //Creature

} //namespace


#endif //CREATURES_H