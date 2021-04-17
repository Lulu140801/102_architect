/*
** EPITECH PROJECT, 2020
** 102_architect
** File description:
** project_math
*/

#include "../lib/my.h"

int compare(char **av)
{
    char operator[4] = "tzrs";
    void (*send[4])() = {translation, scaling, rotation, reflection};

    for (int nb = 0; operator != '\0'; nb++) {
        if (operator[nb] == av[3][1]) {
            send[nb](av);
            return (0);
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    else if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Usage\n    ./102architect x y transfo1 arg11 [arg12] [transf");
        my_putstr("o2 arg12 [arg22]] ...\n\n");
        my_putstr("DESCRIPTION\n    x abscissa of the original point\n    y ord");
        my_putstr("inate of the original point\n\n");
        my_putstr("    transfo arg1 [arg2]\n    -t i j translation along vector");
        my_putstr(" (i, j)\n    -z m n scaling by factors m (x-axis) and n (y-a");
        my_putstr("xis)\n    -r d rotation centered in O by a d degree angle\n ");
        my_putstr("   -s d reflection over the axis passing through O with an i");
        my_putstr("nclination\n            angle of d degrees");
    } else
        compare(av);
    return (0);

}
