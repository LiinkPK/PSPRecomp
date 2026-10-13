/* Entry 0x0894D964 | file offset 0x0014A93C | FUN_0894d964 | bytes 236 */

void FUN_0894d964(undefined4 param_1,char *param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == 'l') {
    iVar3 = 0;
    iVar2 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar2) != 0) {
          FUN_0894d964(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar2),param_3,param_4);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else {
    uVar1 = (ushort)(1 << (param_4 & 0x1f));
    if (param_3 == 0) {
      uVar1 = *(ushort *)(param_2 + 10) | uVar1;
    }
    else {
      uVar1 = *(ushort *)(param_2 + 10) & ~uVar1;
    }
    *(ushort *)(param_2 + 10) = uVar1;
  }
  return;
}

