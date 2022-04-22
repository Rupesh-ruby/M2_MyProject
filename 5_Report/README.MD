
#  Flashing Of led's and Turing on and off of Burzzer

The blinking LED circuit is like the electronics version of the “sound"program. It’s a simple electronic circuit that gives you a visual cue if it works.
It was the first circuit I ever built, and it felt GREAT

## Folder Structure

|Folder|Description|
|------|-----------|
|1_Requirements|Documents Detailing requirements and research|
|2_Design|Documents Specifying design details|
|3_Implementation|All Code and Documentation|
|4_Testplan and output|Output|

## Functions

|Feature Id|Feature|
|----------|-------|
|F_01|Random the Led Blink|
|F_02|Buzzer apper in 1 sec|

## Challenges Faced and How Was It Overcome

|No.|Challenge|Solution|
|---|---------|--------|
|1.|On the simulide latest version some sources are not available|By the help of connect class solved|
|2.|issues in implementation|fixed them by making template in order|
|3.|Issues in workflows|fixed them by updating the path to all files correctly|


## HIGH LEVEL REQUIREMENTS


**Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |5 VOLMETER             |  Valid I/P  |Valid O/P|Valid O/P|Scenario based |
|  H_02       |RELAY COMPONENTS                               |  Invalid I/P|Program termination|Program termination | based    |
|  H_03       |CON.LED BLINK                                     |  Invalid choice I/P|Wrong choice.Please choose again|Wrong choice.Please choose again|Scenario based    |
|  H_04       |BUZZER ALERT                                      |  Valid I/P|Valid O/P|Valid O/P|Scenario based |



## Low level Requriments

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |   ATMEGA 328                                                   |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing |
|  L_02     |                  AVR GCC compiler                                |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing   |
|  L_03       |          Simulide                              |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing    |


