/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details:
 *
 * Copyright (C) 2017 Google, Inc.
 */

#ifndef _MODEMMANAGER_COMPAT_H_
#define _MODEMMANAGER_COMPAT_H_

#if !defined (__MODEM_MANAGER_H_INSIDE__)
#error "Only <ModemManager.h> can be included directly."
#endif

#include <glib.h>

#include <ModemManager-enums.h>

/**
 * SECTION:mm-compat
 * @title: API break replacements
 *
 * These compatibility types and methods are flagged as deprecated and
 * therefore shouldn't be used in newly written code. They are provided to
 * avoid unnecessary API/ABI breaks.
 */

/**
 * MM_MODEM_BAND_EUTRAN_I:
 *
 * E-UTRAN band 1.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_1 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_1)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_I = MM_MODEM_BAND_EUTRAN_1;
#define MM_MODEM_BAND_EUTRAN_I MM_DEPRECATED_MODEM_BAND_EUTRAN_I

/**
 * MM_MODEM_BAND_EUTRAN_II:
 *
 * E-UTRAN band 2.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_2 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_2)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_II = MM_MODEM_BAND_EUTRAN_2;
#define MM_MODEM_BAND_EUTRAN_II MM_DEPRECATED_MODEM_BAND_EUTRAN_II

/**
 * MM_MODEM_BAND_EUTRAN_III:
 *
 * E-UTRAN band 3.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_3 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_3)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_III = MM_MODEM_BAND_EUTRAN_3;
#define MM_MODEM_BAND_EUTRAN_III MM_DEPRECATED_MODEM_BAND_EUTRAN_III

/**
 * MM_MODEM_BAND_EUTRAN_IV:
 *
 * E-UTRAN band 4.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_4 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_4)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_IV = MM_MODEM_BAND_EUTRAN_4;
#define MM_MODEM_BAND_EUTRAN_IV MM_DEPRECATED_MODEM_BAND_EUTRAN_IV

/**
 * MM_MODEM_BAND_EUTRAN_V:
 *
 * E-UTRAN band 5.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_5 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_5)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_V = MM_MODEM_BAND_EUTRAN_5;
#define MM_MODEM_BAND_EUTRAN_V MM_DEPRECATED_MODEM_BAND_EUTRAN_V

/**
 * MM_MODEM_BAND_EUTRAN_VI:
 *
 * E-UTRAN band 6.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_6 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_6)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_VI = MM_MODEM_BAND_EUTRAN_6;
#define MM_MODEM_BAND_EUTRAN_VI MM_DEPRECATED_MODEM_BAND_EUTRAN_VI

/**
 * MM_MODEM_BAND_EUTRAN_VII:
 *
 * E-UTRAN band 7.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_7 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_7)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_VII = MM_MODEM_BAND_EUTRAN_7;
#define MM_MODEM_BAND_EUTRAN_VII MM_DEPRECATED_MODEM_BAND_EUTRAN_VII

/**
 * MM_MODEM_BAND_EUTRAN_VIII:
 *
 * E-UTRAN band 8.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_8 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_8)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_VIII = MM_MODEM_BAND_EUTRAN_8;
#define MM_MODEM_BAND_EUTRAN_VIII MM_DEPRECATED_MODEM_BAND_EUTRAN_VIII

/**
 * MM_MODEM_BAND_EUTRAN_IX:
 *
 * E-UTRAN band 9.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_9 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_9)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_IX = MM_MODEM_BAND_EUTRAN_9;
#define MM_MODEM_BAND_EUTRAN_IX MM_DEPRECATED_MODEM_BAND_EUTRAN_IX

/**
 * MM_MODEM_BAND_EUTRAN_X:
 *
 * E-UTRAN band 10.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_10 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_10)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_X = MM_MODEM_BAND_EUTRAN_10;
#define MM_MODEM_BAND_EUTRAN_X MM_DEPRECATED_MODEM_BAND_EUTRAN_X

/**
 * MM_MODEM_BAND_EUTRAN_XI:
 *
 * E-UTRAN band 11.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_11 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_11)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XI = MM_MODEM_BAND_EUTRAN_11;
#define MM_MODEM_BAND_EUTRAN_XI MM_DEPRECATED_MODEM_BAND_EUTRAN_XI

/**
 * MM_MODEM_BAND_EUTRAN_XII:
 *
 * E-UTRAN band 12.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_12 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_12)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XII = MM_MODEM_BAND_EUTRAN_12;
#define MM_MODEM_BAND_EUTRAN_XII MM_DEPRECATED_MODEM_BAND_EUTRAN_XII

/**
 * MM_MODEM_BAND_EUTRAN_XIII:
 *
 * E-UTRAN band 13.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_13 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_13)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XIII = MM_MODEM_BAND_EUTRAN_13;
#define MM_MODEM_BAND_EUTRAN_XIII MM_DEPRECATED_MODEM_BAND_EUTRAN_XIII

/**
 * MM_MODEM_BAND_EUTRAN_XIV:
 *
 * E-UTRAN band 14.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_14 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_14)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XIV = MM_MODEM_BAND_EUTRAN_14;
#define MM_MODEM_BAND_EUTRAN_XIV MM_DEPRECATED_MODEM_BAND_EUTRAN_XIV

/**
 * MM_MODEM_BAND_EUTRAN_XVII:
 *
 * E-UTRAN band 17.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_17 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_17)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XVII = MM_MODEM_BAND_EUTRAN_17;
#define MM_MODEM_BAND_EUTRAN_XVII MM_DEPRECATED_MODEM_BAND_EUTRAN_XVII

/**
 * MM_MODEM_BAND_EUTRAN_XVIII:
 *
 * E-UTRAN band 18.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_18 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_18)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XVIII = MM_MODEM_BAND_EUTRAN_18;
#define MM_MODEM_BAND_EUTRAN_XVIII MM_DEPRECATED_MODEM_BAND_EUTRAN_XVIII

/**
 * MM_MODEM_BAND_EUTRAN_XIX:
 *
 * E-UTRAN band 19.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_19 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_19)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XIX = MM_MODEM_BAND_EUTRAN_19;
#define MM_MODEM_BAND_EUTRAN_XIX MM_DEPRECATED_MODEM_BAND_EUTRAN_XIX

/**
 * MM_MODEM_BAND_EUTRAN_XX:
 *
 * E-UTRAN band 20.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_20 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_20)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XX = MM_MODEM_BAND_EUTRAN_20;
#define MM_MODEM_BAND_EUTRAN_XX MM_DEPRECATED_MODEM_BAND_EUTRAN_XX

/**
 * MM_MODEM_BAND_EUTRAN_XXI:
 *
 * E-UTRAN band 21.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_21 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_21)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXI = MM_MODEM_BAND_EUTRAN_21;
#define MM_MODEM_BAND_EUTRAN_XXI MM_DEPRECATED_MODEM_BAND_EUTRAN_XXI

/**
 * MM_MODEM_BAND_EUTRAN_XXII:
 *
 * E-UTRAN band 22.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_22 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_22)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXII = MM_MODEM_BAND_EUTRAN_22;
#define MM_MODEM_BAND_EUTRAN_XXII MM_DEPRECATED_MODEM_BAND_EUTRAN_XXII

/**
 * MM_MODEM_BAND_EUTRAN_XXIII:
 *
 * E-UTRAN band 23.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_23 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_23)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXIII = MM_MODEM_BAND_EUTRAN_23;
#define MM_MODEM_BAND_EUTRAN_XXIII MM_DEPRECATED_MODEM_BAND_EUTRAN_XXIII

/**
 * MM_MODEM_BAND_EUTRAN_XXIV:
 *
 * E-UTRAN band 24.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_24 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_24)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXIV = MM_MODEM_BAND_EUTRAN_24;
#define MM_MODEM_BAND_EUTRAN_XXIV MM_DEPRECATED_MODEM_BAND_EUTRAN_XXIV

/**
 * MM_MODEM_BAND_EUTRAN_XXV:
 *
 * E-UTRAN band 25.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_25 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_25)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXV = MM_MODEM_BAND_EUTRAN_25;
#define MM_MODEM_BAND_EUTRAN_XXV MM_DEPRECATED_MODEM_BAND_EUTRAN_XXV

/**
 * MM_MODEM_BAND_EUTRAN_XXVI:
 *
 * E-UTRAN band 26.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_26 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_26)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXVI = MM_MODEM_BAND_EUTRAN_26;
#define MM_MODEM_BAND_EUTRAN_XXVI MM_DEPRECATED_MODEM_BAND_EUTRAN_XXVI

/**
 * MM_MODEM_BAND_EUTRAN_XXXIII:
 *
 * E-UTRAN band 33.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_33 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_33)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXIII = MM_MODEM_BAND_EUTRAN_33;
#define MM_MODEM_BAND_EUTRAN_XXXIII MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXIII

/**
 * MM_MODEM_BAND_EUTRAN_XXXIV:
 *
 * E-UTRAN band 34.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_34 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_34)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXIV = MM_MODEM_BAND_EUTRAN_34;
#define MM_MODEM_BAND_EUTRAN_XXXIV MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXIV

/**
 * MM_MODEM_BAND_EUTRAN_XXXV:
 *
 * E-UTRAN band 35.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_35 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_35)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXV = MM_MODEM_BAND_EUTRAN_35;
#define MM_MODEM_BAND_EUTRAN_XXXV MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXV

/**
 * MM_MODEM_BAND_EUTRAN_XXXVI:
 *
 * E-UTRAN band 36.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_36 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_36)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXVI = MM_MODEM_BAND_EUTRAN_36;
#define MM_MODEM_BAND_EUTRAN_XXXVI MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXVI

/**
 * MM_MODEM_BAND_EUTRAN_XXXVII:
 *
 * E-UTRAN band 37.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_37 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_37)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXVII = MM_MODEM_BAND_EUTRAN_37;
#define MM_MODEM_BAND_EUTRAN_XXXVII MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXVII

/**
 * MM_MODEM_BAND_EUTRAN_XXXVIII:
 *
 * E-UTRAN band 38.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_38 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_38)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXVIII = MM_MODEM_BAND_EUTRAN_38;
#define MM_MODEM_BAND_EUTRAN_XXXVIII MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXVIII

/**
 * MM_MODEM_BAND_EUTRAN_XXXIX:
 *
 * E-UTRAN band 39.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_39 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_39)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXIX = MM_MODEM_BAND_EUTRAN_39;
#define MM_MODEM_BAND_EUTRAN_XXXIX MM_DEPRECATED_MODEM_BAND_EUTRAN_XXXIX

/**
 * MM_MODEM_BAND_EUTRAN_XL:
 *
 * E-UTRAN band 40.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_40 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_40)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XL = MM_MODEM_BAND_EUTRAN_40;
#define MM_MODEM_BAND_EUTRAN_XL MM_DEPRECATED_MODEM_BAND_EUTRAN_XL

/**
 * MM_MODEM_BAND_EUTRAN_XLI:
 *
 * E-UTRAN band 41.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_41 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_41)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XLI = MM_MODEM_BAND_EUTRAN_41;
#define MM_MODEM_BAND_EUTRAN_XLI MM_DEPRECATED_MODEM_BAND_EUTRAN_XLI

/**
 * MM_MODEM_BAND_EUTRAN_XLII:
 *
 * E-UTRAN band 42.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_42 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_42)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XLII = MM_MODEM_BAND_EUTRAN_42;
#define MM_MODEM_BAND_EUTRAN_XLII MM_DEPRECATED_MODEM_BAND_EUTRAN_XLII

/**
 * MM_MODEM_BAND_EUTRAN_XLIII:
 *
 * E-UTRAN band 43.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_43 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_43)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XLIII = MM_MODEM_BAND_EUTRAN_43;
#define MM_MODEM_BAND_EUTRAN_XLIII MM_DEPRECATED_MODEM_BAND_EUTRAN_XLIII

/**
 * MM_MODEM_BAND_EUTRAN_XLIV:
 *
 * E-UTRAN band 44.
 *
 * Since: 1.0
 * Deprecated: 1.8.0: Use #MM_MODEM_BAND_EUTRAN_44 instead.
 */
G_DEPRECATED_FOR (MM_MODEM_BAND_EUTRAN_44)
static const int MM_DEPRECATED_MODEM_BAND_EUTRAN_XLIV = MM_MODEM_BAND_EUTRAN_44;
#define MM_MODEM_BAND_EUTRAN_XLIV MM_DEPRECATED_MODEM_BAND_EUTRAN_XLIV

#endif /* _MODEMMANAGER_COMPAT_H_ */
