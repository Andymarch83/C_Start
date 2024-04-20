#pragma once

/// <summary>
/// Структура для хранения информации об измерениии температуры
/// </summary>
typedef struct Measurement {
    /// <summary>
    /// Год измерения
    /// </summary>
    unsigned int year;

    /// <summary>
    /// Месяц измерения
    /// </summary>
    unsigned int month;

    /// <summary>
    /// День измерения
    /// </summary>
    unsigned int day;

    /// <summary>
    /// Час измерения
    /// </summary>
    unsigned int hour;

    /// <summary>
    /// Минута измерения
    /// </summary>
    unsigned int minute;

    /// <summary>
    /// Температура во время измерения
    /// </summary>
    int temperature;

    /// <summary>
    /// Указатель на следующее измерение
    /// </summary>
    struct Measurement* next;
} Measurement, *PMeasurement;