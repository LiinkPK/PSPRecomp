/* Entry 0x0887487C | file offset 0x00071854 | FUN_0887487c | bytes 88 */

void FUN_0887487c(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  bVar2 = false;
  if (((undefined4 *)0x9b4835f < param_1) && (bVar2 = false, param_1 < &DAT_09b487e0)) {
    bVar2 = true;
  }
  if (bVar2) {
    puVar1 = &DAT_09b487e0 + DAT_09b48860;
    DAT_09b48860 = DAT_09b48860 + 1;
    *puVar1 = param_1;
  }
  return;
}

