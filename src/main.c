/**
 * @file main.c
 * @brief Aplicativo Galeria para Tab5 OS (delega a interface à Host View nativa).
 */

#include "tab5_sdk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void app_init(void)
{
    tab5_system_log(2, "tab5_gallery", "Aplicativo Galeria iniciado");
}

static void app_open_file(const char *path)
{
    if (path != NULL && path[0] != '\0') {
        char msg[160];
        snprintf(msg, sizeof(msg), "Abrindo imagem: %s", path);
        tab5_system_log(2, "tab5_gallery", msg);
    }
}

static void app_resume(void)
{
    tab5_system_log(2, "tab5_gallery", "Galeria retomada");
}

static void app_pause(void)
{
    tab5_system_log(2, "tab5_gallery", "Galeria pausada");
}

static void app_destroy(void)
{
    tab5_system_log(2, "tab5_gallery", "Galeria finalizada");
}

TAB5_APP_EXPORT int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    tab5_lifecycle_callbacks_t cbs = {
        .on_init = app_init,
        .on_resume = app_resume,
        .on_pause = app_pause,
        .on_destroy = app_destroy,
        .on_open_file = app_open_file,
    };

    tab5_lifecycle_register(&cbs);
    app_init();
    return 0;
}