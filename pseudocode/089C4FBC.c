/* Entry 0x089C4FBC | file offset 0x001C1F94 | FUN_089c4fbc | bytes 72 */

void FUN_089c4fbc(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c5688;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c5650;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,4);
    }
  }
  return;
}

