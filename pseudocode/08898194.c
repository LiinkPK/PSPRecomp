/* Entry 0x08898194 | file offset 0x0009516C | FUN_08898194 | bytes 32 */

undefined4 FUN_08898194(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 8);
  }
  return uVar1;
}

