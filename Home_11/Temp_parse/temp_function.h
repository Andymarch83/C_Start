#pragma once

#include "temp_struct.h"

/// <summary>
/// Читает CSV файл с данными об измерениях
/// </summary>
/// <param name="filename">Путь к файлу</param>
/// <returns>Указатель на первое измерение. NULL, если файл содержит ошибки, или же получилось доступ к файлу не удалось</returns>
extern PMeasurement load_measurements(char* filename);

/// <summary>
/// Очищает память использованую под данные об измерениях
/// </summary>
/// <param name="measurement">Первое измерение</param>
extern void free_measurements(PMeasurement first);

/// <summary>
/// Выводит статистику по переданным измерениям
/// </summary>
/// <param name="measurement">Первое измерение</param>
/// <param name="month">Месяц, за который выводить статистику. Если передан 0, выводит статистику за все месяцы</param>
extern void print_statistics(PMeasurement first, unsigned int month);