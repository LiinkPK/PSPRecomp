/* Entry 0x089BB18C | file offset 0x001B8164 | FUN_089bb18c | bytes 160 */

int FUN_089bb18c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    FUN_089bb22c(*(undefined4 *)(param_1 + 4),1);
    iVar1 = (uint)*(ushort *)(param_1 + 0x24) * (uint)*(ushort *)(param_1 + 0x26);
    iVar5 = 0;
    if (iVar1 < 1) {
      uVar4 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x20);
      while( true ) {
        iVar2 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        thunk_FUN_089bb004(1,*(undefined4 *)(iVar2 + iVar3));
        if (iVar1 == iVar5) break;
        iVar3 = *(int *)(param_1 + 0x20);
      }
      uVar4 = *(undefined4 *)(param_1 + 0x20);
    }
    thunk_FUN_089bb004(0,uVar4);
    thunk_FUN_089bb004(0,*(undefined4 *)(param_1 + 0x2c));
  }
  return param_1;
}

