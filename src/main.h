#ifndef MAIN_H
#define MAIN_H
#include <Arduino.h>
#include <params.h>
#include <secret.h>
#include <UrusanWiFi.h>
#endif

// Tulis parameter lokal mu di sini
const uint8_t pinLEDMerah = 2;
const uint8_t pinLEDHijau = 4;

// Tulis instansiasi objek global mu di sini
UrusanWiFi urusanWiFi(wssid);

// Tulis deklarasi fungsi mu di sini:
void cetakIdentitasDeveloper();
