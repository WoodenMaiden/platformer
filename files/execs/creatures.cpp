#include "../headers/creatures.h"

namespace game
{
    Creature::Creature(unsigned HP /*= 600*/, unsigned BaseATQ /*= 200*/, int X /*= 0*/, int Y /*= 0*/)
        : myHP(HP), myBaseATQ(BaseATQ), myX(X), myY(Y){};


    //accessors
        unsigned Creature::getHP(void) const
        {
            return myHP;
        };

        unsigned Creature::getBaseATQ(void) const
        {
            return myBaseATQ;
        };

        int Creature::getX(void) 
        {
            return myX;
        };

        int Creature::getY(void) 
        {
            return myY;
        };

    //sets

        void Creature::setX(int AmmountX)
        {
            myX = AmmountX;
        };

        void Creature::setY(int AmmountY)
        {
            myY = AmmountY;
        };


    //operators 

        void Creature::jump()
        {
            setY(getY()+5);
        };

        void Creature::move(char direction)
        {
            switch (direction)
            {
                case 'd': 
                    setX(getX()+5);
                    break;

                case 'q': 
                    setX(getX()-5);
                    break;

                case ' ': 
                    jump();

                default:
                    break;
            }
        };

        void Creature::display() const
        {
            std::cout << " x : " << myX << std::endl
                      << " y : " << myY << std::endl
                      << " HP : " << myHP << std::endl
                      << " Base ATQ : " << myBaseATQ << std::endl;

        };


} // namespace 