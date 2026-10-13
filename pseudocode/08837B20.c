/* Entry 0x08837B20 | file offset 0x00034AF8 | FUN_08837b20 | bytes 124 */

undefined4 FUN_08837b20(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 400) & 1) == 0) {
    if ((*(byte *)(param_1 + 400) & 4) != 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + 900) & 0x40000) == 0) {
      return 0;
    }
    iVar1 = FUN_088377c0();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

