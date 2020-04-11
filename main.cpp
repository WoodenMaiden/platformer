#include <termios.h> // for set_input_mode()
#include <unistd.h> //read()
#include <stdio.h> //STDIN_FILENO
#include "files/headers/creatures.h"


/* function taken from 
http://www.gnu.org/software/libc/manual/html_node/Noncanon-Example.html
(We don't use the following code for financial purposes)
*/
/*
void set_input_mode (void)
    {
      struct termios tattr;


      if (!isatty (STDIN_FILENO))
        {
          fprintf (stderr, "Not a terminal.\n");
          exit (EXIT_FAILURE);
        }

/
      tcgetattr (STDIN_FILENO, &tattr);
      tattr.c_lflag &= ~(ICANON|ECHO); /
      tattr.c_cc[VMIN] = 0;
      tattr.c_cc[VTIME] = 3;
      tcsetattr (STDIN_FILENO, TCSAFLUSH, &tattr);
    }
*/

int main() 
{
    char direction;
    game::Creature Mobtest(600, 200, 0, 0);
    for (;;)
    {
        std::cout << "\033[H\033[2J";
        Mobtest.display();
        read (STDIN_FILENO, &direction, 1);
        Mobtest.move(direction);
    }
}
