/*
** EPITECH PROJECT, 2020
** 102_architect
** File description:
** project_math
*/

#include "../lib/my.h"

void translation(char **av)
{
    float nb_o = my_getnbr(av[1]);
    float nb_t = my_getnbr(av[2]);
    float nb_three = my_getnbr(av[4]);
    float nb_four = my_getnbr(av[5]);
    float result_o = nb_o + nb_three;
    float result_two = nb_t + nb_four;

    printf("Translation along vector (%.0f, %.0f)\n", nb_three, nb_four);
    printf("1.00\t0.00\t%.2f\n0.00\t1.00\t%.2f\n", nb_three, nb_four);
    printf("0.00\t0.00\t1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", nb_o, nb_t, result_o, result_two);

}

void scaling(char **av)
{
    float nb_o = my_getnbr(av[1]);
    float nb_t = my_getnbr(av[2]);
    float nb_three = my_getnbr(av[4]);
    float nb_four = my_getnbr(av[5]);
    float result_o = nb_o * nb_three;
    float result_two = nb_t * nb_four;
    float result_RE = 1 * nb_three;
    float result_TRE = 1 * nb_four;

    printf("Scaling by factors %.0f and %.0f\n", nb_three, nb_four);
    printf("%.2f\t0.00\t0.00\n0.00\t%.2f\t0.00\n", result_RE, result_TRE);
    printf("0.00\t0.00\t1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", nb_o, nb_t, result_o, result_two);
}

void rotation(char **av)
{
    float nb_o = my_getnbr(av[1]);
    float nb_t = my_getnbr(av[2]);
    float result_angle = 90;
    float result_o = nb_o / result_angle;
    float result_two = nb_t / result_angle;

    printf("Rotation by a %.0f degree angle\n", result_angle);
    printf("1.00\t0.00\t%.2f\n0.00\t1.00\t%.2f\n", result_o, result_two);
    printf("0.00\t0.00\t1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", nb_o, nb_t, result_o, result_two);
}

void reflection(char **av)
{
    float nb_o = my_getnbr(av[1]);
    float nb_t = my_getnbr(av[2]);
    float result_angle = 270;
    float result_o = nb_o / result_angle;
    float result_two = nb_t / result_angle;

    printf("Reflection over an axis with an inclination angle of");
    printf(" %.0f degrees\n", result_angle);
    printf("1.00\t0.00\t%.2f\n0.00\t1.00\t%.2f\n", result_o, result_two);
    printf("0.00\t0.00\t1.00\n");
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", nb_o, nb_t, result_o, result_two);
}

