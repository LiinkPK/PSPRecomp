/* Entry 0x089AC148 | file offset 0x001A9120 | FUN_089ac148 | bytes 160 */

void FUN_089ac148(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x18) + -1;
    *(int *)(iVar4 + 0x18) = iVar1;
    if (iVar1 == 0) {
      if (DAT_09af719c != 0) {
        if (iVar4 == DAT_09af719c) {
          DAT_09af719c = *(undefined4 *)(iVar4 + 0x1c);
          thunk_FUN_089abeac(0);
          *(undefined4 *)(param_1 + 8) = 0;
          return;
        }
        iVar1 = *(int *)(DAT_09af719c + 0x1c);
        iVar3 = DAT_09af719c;
        while( true ) {
          iVar2 = iVar1;
          if (iVar4 == iVar2) {
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
            thunk_FUN_089abeac(0);
            *(undefined4 *)(param_1 + 8) = 0;
            return;
          }
          if (iVar2 == 0) break;
          iVar1 = *(int *)(iVar2 + 0x1c);
          iVar3 = iVar2;
        }
      }
      thunk_FUN_089abeac(0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

