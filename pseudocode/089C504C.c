/* Entry 0x089C504C | file offset 0x001C2024 | FUN_089c504c | bytes 72 */

void FUN_089c504c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089c56e0;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_089c56c0;
    }
    if ((param_2 & 1) != 0) {
      FUN_0898d4ac(param_1,4);
    }
  }
  return;
}

