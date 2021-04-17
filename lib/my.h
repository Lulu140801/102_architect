/*
** EPITECH PROJECT, 2020
** My.h
** File description:
** Header on my lib
*/

#ifndef MY_H
#define MY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putstr(char const *str);
float my_getnbr(char const *str);
void translation(char **av);
void scaling(char **av);
void rotation(char **av);
void reflection(char **av);
int compare(char **av);

#endif
