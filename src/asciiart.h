//This file contains the ASCII art used in the GOAT-shell


//
// Created by johannes on 25/09/2021.
//

#ifndef MYSHELL_W_PIPE_ASCIIART_H
#define MYSHELL_W_PIPE_ASCIIART_H

#endif //MYSHELL_W_PIPE_ASCIIART_H
//#include "commands.h"

void clearScreen2();
void greatesOfAllTimes(int microsSecondsPrFrame);
void goatGif(int rounds, int microSecondsPrFrame);


void printStartScreen(){

//    printf("\n\n\n\n                                     ,d     \n"
//           "                                     88     \n"
//           " ,adPPYb,d8  ,adPPYba,  ,adPPYYba, MM88MMM  \n"
//           "a8\"    `Y88 a8\"     \"8a \"\"     `Y8   88     \n"
//           "8b       88 8b       d8 ,adPPPPP88   88     \n"
//           "\"8a,   ,d88 \"8a,   ,a8\" 88,    ,88   88,    \n"
//           " `\"YbbdP\"Y8  `\"YbbdP\"'  `\"8bbdP\"Y8   \"Y888  \n"
//           " aa,    ,88                                 \n"
//           "  \"Y8bbdP\" \n");

    printf("\n\n                                                                                                                                                   \n"
           "                                                                                                                                                   \n"
           "                      |||||||         GGGGGGGGGGGGG     OOOOOOOOO                 AAA         TTTTTTTTTTTTTTTTTTTTTTT |||||||                      \n"
           "                      |:::::|      GGG::::::::::::G   OO:::::::::OO              A:::A        T:::::::::::::::::::::T |:::::|                      \n"
           "                      |:::::|    GG:::::::::::::::G OO:::::::::::::OO           A:::::A       T:::::::::::::::::::::T |:::::|                      \n"
           "******         ****** |:::::|   G:::::GGGGGGGG::::GO:::::::OOO:::::::O         A:::::::A      T:::::TT:::::::TT:::::T |:::::| ******         ******\n"
           "*:::::*       *:::::* |:::::|  G:::::G       GGGGGGO::::::O   O::::::O        A:::::::::A     TTTTTT  T:::::T  TTTTTT |:::::| *:::::*       *:::::*\n"
           "***::::*******::::*** |:::::| G:::::G              O:::::O     O:::::O       A:::::A:::::A            T:::::T         |:::::| ***::::*******::::***\n"
           "   **:::::::::::**    ||||||| G:::::G              O:::::O     O:::::O      A:::::A A:::::A           T:::::T         |||||||    **:::::::::::**   \n"
           "******:::::::::******         G:::::G    GGGGGGGGGGO:::::O     O:::::O     A:::::A   A:::::A          T:::::T                 ******:::::::::******\n"
           "*:::::::::::::::::::*         G:::::G    G::::::::GO:::::O     O:::::O    A:::::A     A:::::A         T:::::T                 *:::::::::::::::::::*\n"
           "******:::::::::****** ||||||| G:::::G    GGGGG::::GO:::::O     O:::::O   A:::::AAAAAAAAA:::::A        T:::::T         ||||||| ******:::::::::******\n"
           "   **:::::::::::**    |:::::| G:::::G        G::::GO:::::O     O:::::O  A:::::::::::::::::::::A       T:::::T         |:::::|    **:::::::::::**   \n"
           "***::::*******::::*** |:::::|  G:::::G       G::::GO::::::O   O::::::O A:::::AAAAAAAAAAAAA:::::A      T:::::T         |:::::| ***::::*******::::***\n"
           "*:::::*       *:::::* |:::::|   G:::::GGGGGGGG::::GO:::::::OOO:::::::OA:::::A             A:::::A   TT:::::::TT       |:::::| *:::::*       *:::::*\n"
           "******         ****** |:::::|    GG:::::::::::::::G OO:::::::::::::OOA:::::A               A:::::A  T:::::::::T       |:::::| ******         ******\n"
           "                      |:::::|      GGG::::::GGG:::G   OO:::::::::OO A:::::A                 A:::::A T:::::::::T       |:::::|                      \n"
           "                      |||||||         GGGGGG   GGGG     OOOOOOOOO  AAAAAAA                   AAAAAAATTTTTTTTTTT       |||||||                      \n"
           "                                                                                                                                                   \n"
           "                                                                                                                                                   \n"
           "                                                                                                                                                   \n"
           "                                                                                                                                                   \n"
           "                                                                                                                                                   \n"
           "                                                                                                                                                   \n"
           "                                                                                                                                                   \n\n");

    printf("\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<**>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n"
           "<<<<<<<<<<<<<<<<<<<< WELCOME TO THE GOAT TERMINAL >>>>>>>>>>>>>>>>>>>>\n"
           "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<**>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");

}

void printGoat(){
    clearScreen2();
    printf("\n"
           "\n"
           "\n"
           "             / /\n"
           "          (\\/_//`)\n"
           "           /   '/\n"
           "          0  0   \\\n"
           "         /        \\\n"
           "        /    __/   \\\n"
           "       /,  _/ \\     \\_\n"
           "       `-./ )  |     ~^~^~^~^~^~^~^~\\~.\n"
           "           (   /                     \\_}\n"
           "              |               /      |\n"
           "              ;     |         \\      /\n"
           "               \\/ ,/           \\    |\n"
           "               / /~~|~|~~~~~~|~|\\   |\n"
           "              / /   | |      | | `\\ \\\n"
           "             / /    | |      | |   \\ \\\n"
           "            / (     | |      | |    \\ \\\n"
           "           /,_)    /__)     /__)   /,_/\n"
           "     '''''\"\"\"\"\"'''\"\"\"\"\"\"'''\"\"\"\"\"\"''\"\"\"\"\"'''''\n\n");
}

void goatGif(int rounds, int microSecondsPrFrame) {
    int microSeconds = microSecondsPrFrame;
    for (int i = 0; i < rounds; ++i) {
        clearScreen2();
        printf("\n  /$$$$$$         /$$$$$$         /$$$$$$        /$$$$$$$$      \n"
               " /$$__  $$       /$$__  $$       /$$__  $$      |__  $$__/      \n"
               "| $$  \\__/      | $$  \\ $$      | $$  \\ $$         | $$         \n"
               "| $$ /$$$$      | $$  | $$      | $$$$$$$$         | $$         \n"
               "| $$|_  $$      | $$  | $$      | $$__  $$         | $$         \n"
               "| $$  \\ $$      | $$  | $$      | $$  | $$         | $$         \n"
               "|  $$$$$$/      |  $$$$$$/      | $$  | $$         | $$         \n"
               " \\______/        \\______/       |__/  |__/         |__/         \n"
               "                                                             ");
        usleep(microSecondsPrFrame);
        clearScreen2();
        printf("\n   ______          ______          ______         ________       \n"
               " /      \\        /      \\        /      \\       /        |      \n"
               "/$$$$$$  |      /$$$$$$  |      /$$$$$$  |      $$$$$$$$/       \n"
               "$$ | _$$/       $$ |  $$ |      $$ |__$$ |         $$ |         \n"
               "$$ |/    |      $$ |  $$ |      $$    $$ |         $$ |         \n"
               "$$ |$$$$ |      $$ |  $$ |      $$$$$$$$ |         $$ |         \n"
               "$$ \\__$$ |      $$ \\__$$ |      $$ |  $$ |         $$ |         \n"
               "$$    $$/       $$    $$/       $$ |  $$ |         $$ |         \n"
               " $$$$$$/         $$$$$$/        $$/   $$/          $$/          \n"
               "                                                                \n"
               "                                                                \n"
               "                                                               ");
        usleep(microSecondsPrFrame);
        clearScreen2();
        printf("\n  ______          ______          ______         ________       \n"
               " /      \\        /      \\        /      \\       |        \\      \n"
               "|  $$$$$$\\      |  $$$$$$\\      |  $$$$$$\\       \\$$$$$$$$      \n"
               "| $$ __\\$$      | $$  | $$      | $$__| $$         | $$         \n"
               "| $$|    \\      | $$  | $$      | $$    $$         | $$         \n"
               "| $$ \\$$$$      | $$  | $$      | $$$$$$$$         | $$         \n"
               "| $$__| $$      | $$__/ $$      | $$  | $$         | $$         \n"
               " \\$$    $$       \\$$    $$      | $$  | $$         | $$         \n"
               "  \\$$$$$$         \\$$$$$$        \\$$   \\$$          \\$$         \n"
               "                                                                \n"
               "                                                                \n"
               "                                                                ");
        usleep(microSecondsPrFrame);
        clearScreen2();
        printf("\n  ______          ______          ______         ________       \n"
               " /      \\        /      \\        /      \\       /        |      \n"
               "/$$$$$$  |      /$$$$$$  |      /$$$$$$  |      $$$$$$$$/       \n"
               "$$ | _$$/       $$ |  $$ |      $$ |__$$ |         $$ |         \n"
               "$$ |/    |      $$ |  $$ |      $$    $$ |         $$ |         \n"
               "$$ |$$$$ |      $$ |  $$ |      $$$$$$$$ |         $$ |         \n"
               "$$ \\__$$ |      $$ \\__$$ |      $$ |  $$ |         $$ |         \n"
               "$$    $$/       $$    $$/       $$ |  $$ |         $$ |         \n"
               " $$$$$$/         $$$$$$/        $$/   $$/          $$/          \n"
               "                                                                \n"
               "                                                                \n"
               "                                                                ");
        usleep(microSecondsPrFrame);
        clearScreen2();
    }
}

void greatesOfAllTimes(int microsSecondsPrFrame){
    int microseconds = microsSecondsPrFrame;
    printf("\n                                                                                                                                                          \n"
           "                                                                                                                                                          \n"
           "        GGGGGGGGGGGGGRRRRRRRRRRRRRRRRR   EEEEEEEEEEEEEEEEEEEEEE               AAA         TTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEE   SSSSSSSSSSSSSSS \n"
           "     GGG::::::::::::GR::::::::::::::::R  E::::::::::::::::::::E              A:::A        T:::::::::::::::::::::TE::::::::::::::::::::E SS:::::::::::::::S\n"
           "   GG:::::::::::::::GR::::::RRRRRR:::::R E::::::::::::::::::::E             A:::::A       T:::::::::::::::::::::TE::::::::::::::::::::ES:::::SSSSSS::::::S\n"
           "  G:::::GGGGGGGG::::GRR:::::R     R:::::REE::::::EEEEEEEEE::::E            A:::::::A      T:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::ES:::::S     SSSSSSS\n"
           " G:::::G       GGGGGG  R::::R     R:::::R  E:::::E       EEEEEE           A:::::::::A     TTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEES:::::S            \n"
           "G:::::G                R::::R     R:::::R  E:::::E                       A:::::A:::::A            T:::::T          E:::::E             S:::::S            \n"
           "G:::::G                R::::RRRRRR:::::R   E::::::EEEEEEEEEE            A:::::A A:::::A           T:::::T          E::::::EEEEEEEEEE    S::::SSSS         \n"
           "G:::::G    GGGGGGGGGG  R:::::::::::::RR    E:::::::::::::::E           A:::::A   A:::::A          T:::::T          E:::::::::::::::E     SS::::::SSSSS    \n"
           "G:::::G    G::::::::G  R::::RRRRRR:::::R   E:::::::::::::::E          A:::::A     A:::::A         T:::::T          E:::::::::::::::E       SSS::::::::SS  \n"
           "G:::::G    GGGGG::::G  R::::R     R:::::R  E::::::EEEEEEEEEE         A:::::AAAAAAAAA:::::A        T:::::T          E::::::EEEEEEEEEE          SSSSSS::::S \n"
           "G:::::G        G::::G  R::::R     R:::::R  E:::::E                  A:::::::::::::::::::::A       T:::::T          E:::::E                         S:::::S\n"
           " G:::::G       G::::G  R::::R     R:::::R  E:::::E       EEEEEE    A:::::AAAAAAAAAAAAA:::::A      T:::::T          E:::::E       EEEEEE            S:::::S\n"
           "  G:::::GGGGGGGG::::GRR:::::R     R:::::REE::::::EEEEEEEE:::::E   A:::::A             A:::::A   TT:::::::TT      EE::::::EEEEEEEE:::::ESSSSSSS     S:::::S\n"
           "   GG:::::::::::::::GR::::::R     R:::::RE::::::::::::::::::::E  A:::::A               A:::::A  T:::::::::T      E::::::::::::::::::::ES::::::SSSSSS:::::S\n"
           "     GGG::::::GGG:::GR::::::R     R:::::RE::::::::::::::::::::E A:::::A                 A:::::A T:::::::::T      E::::::::::::::::::::ES:::::::::::::::SS \n"
           "        GGGGGG   GGGGRRRRRRRR     RRRRRRREEEEEEEEEEEEEEEEEEEEEEAAAAAAA                   AAAAAAATTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEE SSSSSSSSSSSSSSS   \n"
           "                                                                                                                                                          \n"
           "                                                                                                                                                          \n"
           "                                                                                                                                                          \n"
           "                                                                                                                                                          \n"
           "                                                                                                                                                          \n"
           "                                                                                                                                                          \n"
           "                                                                                                                                                          ");
    usleep(microseconds);
    clearScreen2();
    printf("\n                                         \n"
           "                                         \n"
           "     OOOOOOOOO     FFFFFFFFFFFFFFFFFFFFFF\n"
           "   OO:::::::::OO   F::::::::::::::::::::F\n"
           " OO:::::::::::::OO F::::::::::::::::::::F\n"
           "O:::::::OOO:::::::OFF::::::FFFFFFFFF::::F\n"
           "O::::::O   O::::::O  F:::::F       FFFFFF\n"
           "O:::::O     O:::::O  F:::::F             \n"
           "O:::::O     O:::::O  F::::::FFFFFFFFFF   \n"
           "O:::::O     O:::::O  F:::::::::::::::F   \n"
           "O:::::O     O:::::O  F:::::::::::::::F   \n"
           "O:::::O     O:::::O  F::::::FFFFFFFFFF   \n"
           "O:::::O     O:::::O  F:::::F             \n"
           "O::::::O   O::::::O  F:::::F             \n"
           "O:::::::OOO:::::::OFF:::::::FF           \n"
           " OO:::::::::::::OO F::::::::FF           \n"
           "   OO:::::::::OO   F::::::::FF           \n"
           "     OOOOOOOOO     FFFFFFFFFFF           \n"
           "                                         \n"
           "                                         \n"
           "                                         \n"
           "                                         \n"
           "                                         \n"
           "                                         \n"
           "                                         ");
    usleep(microseconds);
    clearScreen2();

    printf("\n                                                                                 \n"
           "                                                                                 \n"
           "               AAA               LLLLLLLLLLL             LLLLLLLLLLL             \n"
           "              A:::A              L:::::::::L             L:::::::::L             \n"
           "             A:::::A             L:::::::::L             L:::::::::L             \n"
           "            A:::::::A            LL:::::::LL             LL:::::::LL             \n"
           "           A:::::::::A             L:::::L                 L:::::L               \n"
           "          A:::::A:::::A            L:::::L                 L:::::L               \n"
           "         A:::::A A:::::A           L:::::L                 L:::::L               \n"
           "        A:::::A   A:::::A          L:::::L                 L:::::L               \n"
           "       A:::::A     A:::::A         L:::::L                 L:::::L               \n"
           "      A:::::AAAAAAAAA:::::A        L:::::L                 L:::::L               \n"
           "     A:::::::::::::::::::::A       L:::::L                 L:::::L               \n"
           "    A:::::AAAAAAAAAAAAA:::::A      L:::::L         LLLLLL  L:::::L         LLLLLL\n"
           "   A:::::A             A:::::A   LL:::::::LLLLLLLLL:::::LLL:::::::LLLLLLLLL:::::L\n"
           "  A:::::A               A:::::A  L::::::::::::::::::::::LL::::::::::::::::::::::L\n"
           " A:::::A                 A:::::A L::::::::::::::::::::::LL::::::::::::::::::::::L\n"
           "AAAAAAA                   AAAAAAALLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL\n"
           "                                                                                 \n"
           "                                                                                 \n"
           "                                                                                 \n"
           "                                                                                 \n"
           "                                                                                 \n"
           "                                                                                 \n"
           "                                                                                 ");
    usleep(microseconds);
    clearScreen2();

    printf("\n                                                                                                         \n"
           "                                                                                                         \n"
           "TTTTTTTTTTTTTTTTTTTTTTTIIIIIIIIIIMMMMMMMM               MMMMMMMMEEEEEEEEEEEEEEEEEEEEEE   SSSSSSSSSSSSSSS \n"
           "T:::::::::::::::::::::TI::::::::IM:::::::M             M:::::::ME::::::::::::::::::::E SS:::::::::::::::S\n"
           "T:::::::::::::::::::::TI::::::::IM::::::::M           M::::::::ME::::::::::::::::::::ES:::::SSSSSS::::::S\n"
           "T:::::TT:::::::TT:::::TII::::::IIM:::::::::M         M:::::::::MEE::::::EEEEEEEEE::::ES:::::S     SSSSSSS\n"
           "TTTTTT  T:::::T  TTTTTT  I::::I  M::::::::::M       M::::::::::M  E:::::E       EEEEEES:::::S            \n"
           "        T:::::T          I::::I  M:::::::::::M     M:::::::::::M  E:::::E             S:::::S            \n"
           "        T:::::T          I::::I  M:::::::M::::M   M::::M:::::::M  E::::::EEEEEEEEEE    S::::SSSS         \n"
           "        T:::::T          I::::I  M::::::M M::::M M::::M M::::::M  E:::::::::::::::E     SS::::::SSSSS    \n"
           "        T:::::T          I::::I  M::::::M  M::::M::::M  M::::::M  E:::::::::::::::E       SSS::::::::SS  \n"
           "        T:::::T          I::::I  M::::::M   M:::::::M   M::::::M  E::::::EEEEEEEEEE          SSSSSS::::S \n"
           "        T:::::T          I::::I  M::::::M    M:::::M    M::::::M  E:::::E                         S:::::S\n"
           "        T:::::T          I::::I  M::::::M     MMMMM     M::::::M  E:::::E       EEEEEE            S:::::S\n"
           "      TT:::::::TT      II::::::IIM::::::M               M::::::MEE::::::EEEEEEEE:::::ESSSSSSS     S:::::S\n"
           "      T:::::::::T      I::::::::IM::::::M               M::::::ME::::::::::::::::::::ES::::::SSSSSS:::::S\n"
           "      T:::::::::T      I::::::::IM::::::M               M::::::ME::::::::::::::::::::ES:::::::::::::::SS \n"
           "      TTTTTTTTTTT      IIIIIIIIIIMMMMMMMM               MMMMMMMMEEEEEEEEEEEEEEEEEEEEEE SSSSSSSSSSSSSSS   \n"
           "                                                                                                         \n"
           "                                                                                                         \n"
           "                                                                                                         \n"
           "                                                                                                         \n"
           "                                                                                                         \n"
           "                                                                                                         \n"
           "                                                                                                         ");
    usleep(microseconds);
    clearScreen2();

}



void clearScreen2() {

    int pid = fork();

    if (pid == 0) {
        printf("\n");
        execl("/usr/bin/clear", "/usr/bin/clear", NULL);
        fprintf(stderr, "Could not execute execvp()");
        printf("\n");
    } else {
        wait(NULL);
    }
}