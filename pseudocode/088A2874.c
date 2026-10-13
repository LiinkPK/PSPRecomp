/* Entry 0x088A2874 | file offset 0x0009F84C | FUN_088a2874 | bytes 116 */

void FUN_088a2874(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = DAT_09b4cf98;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x58);
    }
    if (iVar2 == 0) break;
    FUN_088a1f2c(param_1,param_2,iVar2);
    iVar1 = iVar2;
  }
  return;
}

