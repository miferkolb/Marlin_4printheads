/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ENRIQUE
 * 
 */

/**
 * RUMBA pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#if E_STEPPERS > 3 || HOTENDS > 3
//  #error "RUMBA supports up to 3 hotends / E-steppers. Comment this line to keep going."
#endif

#define DEFAULT_MACHINE_NAME "Rumba"
#define BOARD_NAME           "Rumba"

#define X_STEP_PIN         17  //X STEPPER
#define X_DIR_PIN          16  //X STEPPER
#define X_ENABLE_PIN       48  //X STEPPER
#define X_MIN_PIN          37  //X ENDSTOP
#define X_MAX_PIN          36  //X ENDSTOP

#define Y_STEP_PIN         54  //Y STEPPER
#define Y_DIR_PIN          47  //Y STEPPER
#define Y_ENABLE_PIN       55  //Y STEPPER
#define Y_MIN_PIN          35  //Y ENDSTOP
#define Y_MAX_PIN          34  //Y ENDSTOP

#define Z_STEP_PIN         57  //Z STEPPER
#define Z_DIR_PIN          56  //Z STEPPER
#define Z_ENABLE_PIN       62  //Z STEPPER
#define Z_MIN_PIN          33  //Z ENDSTOP
#define Z_MAX_PIN          32  //Z ENDSTOP
  
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  33   //Z PROBE OR ENDSTOP
#endif

#define E0_STEP_PIN        23  // NOT USED (NO EXTRUDER)
#define E0_DIR_PIN         22  // NOT USED (NO EXTRUDER)
#define E0_ENABLE_PIN      24  // NOT USED (NO EXTRUDER)

#define E1_STEP_PIN        26  // NOT USED (NO EXTRUDER)
#define E1_DIR_PIN         25  // NOT USED (NO EXTRUDER)
#define E1_ENABLE_PIN      27  // NOT USED (NO EXTRUDER)

#define E2_STEP_PIN        40 //sigma: 29-->40 // NOT USED (NO EXTRUDER)
#define E2_DIR_PIN         40 //sigma: 28-->40 // NOT USED (NO EXTRUDER)
#define E2_ENABLE_PIN      40 //sigma: 39-->40 // NOT USED (NO EXTRUDER)

#define E3_STEP_PIN        40 //sigma NO SIGMA
#define E3_DIR_PIN         40 //sigma NO SIGMA
#define E3_ENABLE_PIN      40 //sigma NO SIGMA

#define E4_STEP_PIN        29 //sigma: connected to E02 stepper pins NO SIGMA
#define E4_DIR_PIN         28 //sigma: connected to E02 stepper pins NO SIGMA
#define E4_ENABLE_PIN      39 //sigma: connected to E02 stepper pins NO SIGMA

#define LED_PIN            13

#define FAN_PIN             7 // --> SOLENOID 1
#define FAN1_PIN            8 // --> SOLENOID 2
#define FAN2_PIN            5//sigma NO SIGMA
#define FAN3_PIN            4//sigma: added fan 3 NO SIGMA

#define PS_ON_PIN          45
#define KILL_PIN           46

#define HEATER_0_PIN        2   // EXTRUDER 1 --> PELTIER 1
#define HEATER_1_PIN        3   // EXTRUDER 2 --> PELTIER 2
#define HEATER_2_PIN        6   // EXTRUDER 3 --> PELTIER 3
#define HEATER_3_PIN        9   //sigma: EXTRUDER 4  

#if TEMP_SENSOR_0 == -1
  #define TEMP_0_PIN        6   // ANALOG NUMBERING - connector *K1* on RUMBA thermocouple ADD ON is used
#else
  #define TEMP_0_PIN       15   // ANALOG NUMBERING - default connector for thermistor *T0* on rumba board is used
#endif

#if TEMP_SENSOR_1 == -1
  #define TEMP_1_PIN        5   // ANALOG NUMBERING - connector *K2* on RUMBA thermocouple ADD ON is used
#else
  #define TEMP_1_PIN       14   // ANALOG NUMBERING - default connector for thermistor *T1* on rumba board is used
#endif

#if TEMP_SENSOR_2 == -1
  #define TEMP_2_PIN        7   // ANALOG NUMBERING - connector *K3* on RUMBA thermocouple ADD ON is used <-- this can not be used when TEMP_SENSOR_BED is defined as thermocouple
#else
  #define TEMP_2_PIN       13   // ANALOG NUMBERING - default connector for thermistor *T2* on rumba board is used
#endif

 #if TEMP_SENSOR_3 == -1
  #define TEMP_3_PIN        7   //sigma: added thermistor 3 
#else
  #define TEMP_3_PIN       11   //sigma: added thermistor 3 in the bed thermistor
#endif

//optional for extruder 4 or chamber: #define TEMP_X_PIN         12   // ANALOG NUMBERING - default connector for thermistor *T3* on rumba board is used
//optional FAN1 can be used as 4th heater output: #define HEATER_3_PIN       8    // EXTRUDER 4

#define HEATER_BED_PIN      -1    // BED sigma: disabled --> PELTIER 4
#if TEMP_SENSOR_BED == -1
  #define TEMP_BED_PIN      7    // ANALOG NUMBERING - connector *K3* on RUMBA thermocouple ADD ON is used <-- this can not be used when TEMP_SENSOR_2 is defined as thermocouple
#else
  #define TEMP_BED_PIN     11    // ANALOG NUMBERING - default connector for thermistor *THB* on rumba board is used
#endif

#define SDSS               53  // LCD
#define SD_DETECT_PIN      49  // LCD 
#define BEEPER_PIN         44  // LCD
#define LCD_PINS_RS        19  // LCD
#define LCD_PINS_ENABLE    42  // LCD
#define LCD_PINS_D4        18  // LCD
#define LCD_PINS_D5        38  // LCD
#define LCD_PINS_D6        41  // LCD
#define LCD_PINS_D7        40  // LCD
#define BTN_EN1            11  // LCD
#define BTN_EN2            12  // LCD
#define BTN_ENC            43  // LCD

#define SERVO0_PIN         5

