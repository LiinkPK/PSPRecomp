/* Entry 0x089B4868 | file offset 0x001B1840 | FUN_089b4868 | bytes 160 */

void FUN_089b4868(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x310) + -1;
    *(int *)(iVar4 + 0x310) = iVar1;
    if (iVar1 == 0) {
      if (DAT_09af71f0 != 0) {
        if (iVar4 == DAT_09af71f0) {
          DAT_09af71f0 = *(undefined4 *)(iVar4 + 0x314);
          thunk_FUN_089abeac(0);
          *(undefined4 *)(param_1 + 4) = 0;
          return;
        }
        iVar1 = *(int *)(DAT_09af71f0 + 0x314);
        iVar3 = DAT_09af71f0;
        while( true ) {
          iVar2 = iVar1;
          if (iVar4 == iVar2) {
            *(undefined4 *)(iVar3 + 0x314) = *(undefined4 *)(iVar4 + 0x314);
            thunk_FUN_089abeac(0);
            *(undefined4 *)(param_1 + 4) = 0;
            return;
          }
          if (iVar2 == 0) break;
          iVar1 = *(int *)(iVar2 + 0x314);
          iVar3 = iVar2;
        }
      }
      thunk_FUN_089abeac(0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

