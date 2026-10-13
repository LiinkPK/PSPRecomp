/* Entry 0x088D0608 | file offset 0x000CD5E0 | FUN_088d0608 | bytes 124 */

int FUN_088d0608(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc4f4);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_088dcdf8(iVar2,param_2,param_3);
    if (iVar1 != 0) break;
    iVar2 = *(int *)(iVar2 + 0x6c);
  }
  FUN_088dcd50(iVar2);
  return iVar2;
}

