/* Entry 0x08819294 | file offset 0x0001626C | FUN_08819294 | bytes 52 */

undefined4 FUN_08819294(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_089d5eac;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_08838300();
  }
  return uVar1;
}

