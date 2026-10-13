/* Entry 0x088CBBB4 | file offset 0x000C8B8C | FUN_088cbbb4 | bytes 256 */

void FUN_088cbbb4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_088cba10(param_1);
  FUN_088cba54(param_1,param_2);
  FUN_088cbd24(param_1,0,1);
  iVar1 = FUN_088b97d0(param_2);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = FUN_088bca2c();
  }
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *(char *)(param_1 + 0x773) = (char)iVar1;
      FUN_088bbe5c(iVar2,param_1 + 0x10);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    *(undefined1 *)(param_1 + 0x773) = 0;
  }
  iVar1 = 0;
  iVar2 = param_1 + 0x3ee;
  do {
    if (*(short *)(param_1 + 0x3ee) == -1) {
      return;
    }
    iVar1 = iVar1 + 1;
    *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & 0xfffe;
    param_1 = param_1 + 6;
    iVar2 = iVar2 + 6;
  } while (iVar1 < 0x96);
  return;
}

