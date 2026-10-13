/* Entry 0x088D0684 | file offset 0x000CD65C | FUN_088d0684 | bytes 124 */

int FUN_088d0684(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xebc8);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_088de1e8(iVar2,param_2,param_3);
    if (iVar1 != 0) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  FUN_088de198(iVar2);
  return iVar2;
}

