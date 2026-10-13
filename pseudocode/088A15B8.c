/* Entry 0x088A15B8 | file offset 0x0009E590 | FUN_088a15b8 | bytes 128 */

int FUN_088a15b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2 + 0x68) == '\0') {
      *(undefined1 *)(param_1 + iVar2 + 0x68) = 1;
      iVar1 = FUN_0899075c(param_2,param_3,iVar2);
      if (iVar1 == 1) {
        return iVar2;
      }
      return -1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return -1;
}

