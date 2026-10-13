/* Entry 0x088D5258 | file offset 0x000D2230 | FUN_088d5258 | bytes 84 */

int FUN_088d5258(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088d51d0(param_1 + 0x20);
  if ((iVar1 < 0x22) && (*(short *)(param_1 + 6) == 0)) {
    if (iVar1 < 0xf) {
      iVar1 = iVar1 + 0xf;
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

