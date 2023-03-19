//
// Created by Lukas on 01/08/2022.
//

#ifndef USERLIB_MAIN_H
#define USERLIB_MAIN_H

typedef void (*func)();
void Menu();
void Init();

#ifdef __cplusplus
extern "C" {
#endif

func Start(){
    Init();
    return &Menu;
}

#ifdef __cplusplus
}
#endif

#endif //USERLIB_MAIN_H
