##  HIGH LEVEL TEST PLAN:

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Pass or Fail**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01       | Entering into the system while choosing correct choice.                         | 1 |Add Cosmetics | Adds Cosmetics | Pass |
|  T_02      |Asking for correct choice while wrong choice is entered | 8|Invalid Choice, System Exit |Invalid Choice, System exit | Pass
|  T_03   |To add cosmetics accordingly |Choice 1, Entering all the cosmetic details| Cosmetic added successfully |Cosmetic added successfully |Pass |
| T_04 | To check all the cosmetic products | Choice 3|Display of all the cosmetics details | Display of all the cosmetics details| Pass |
| T_05 |To edit cosmetics accordingly | Choice 4: Cosmetic Name as input| Edited successfully| Edited successfully | Pass |
| T_06 | To delete cosmetics accordingly |Choice 2: Product name as input | Delete success| Delete success | Pass |
| T_07 | To delete cosmetics| Entering cosmetic name from list | Wrong cosmetic name | Record not found | Fail |
| T_08 | To edit cosmetics| Entering cosmetic name from list | Wrong cosmetic name | Record not found | Fail |

##  LOW LEVEL TEST PLAN

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Pass or Fail**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Enter cosmetic product name in Add                       |Eg.Lipstick | Move to next cosmetic company | Move | Pass |
|  L_02      |Enter cosmetic product name in Add| Eg.1234|Move |Name contains invalid characters. Please 'Enter' the Cosmetic Name again| Fail
|  L_03   |Enter cosmetic product company in Add |Eg.Nyka| Move to next |Move to next |Pass |
| L_04 |Enter cosmetic product company in Add |Eg.8989|  Move to next |Name contains invalid character. Please 'Enter' the Cosmetic Company again|Fail|
| L_05 | Enter product code | Eg.12 | Move to next | Move | Pass
| L_06 | Enter product code |Eg.ad1235 | Move to next| Invalid product code | Fail |


