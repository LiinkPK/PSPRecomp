/* Entry 0x088B7820 | file offset 0x000B47F8 | FUN_088b7820 | bytes 156 */

undefined4 FUN_088b7820(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_088b1d9c(param_2);
  if (((iVar1 != 0) && ('\x01' < *(char *)(iVar1 + 0x16))) && (*(char *)(iVar1 + 0x16) < '\x05')) {
    iVar1 = 0;
    do {
      if (*(char *)(param_1 + iVar1 + 0x5a) == -1) {
        *(char *)(param_1 + iVar1 + 0x5a) = (char)param_2;
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40);
  }
  return 0;
}

