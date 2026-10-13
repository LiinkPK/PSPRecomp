/* Entry 0x088ECDB4 | file offset 0x000E9D8C | FUN_088ecdb4 | bytes 92 */

void FUN_088ecdb4(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089ccb08;
    FUN_088ec234(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

