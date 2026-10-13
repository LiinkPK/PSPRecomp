/* Entry 0x088ECE54 | file offset 0x000E9E2C | FUN_088ece54 | bytes 92 */

void FUN_088ece54(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089ccb48;
    FUN_088ec234(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

