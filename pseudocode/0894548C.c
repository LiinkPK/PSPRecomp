/* Entry 0x0894548C | file offset 0x00142464 | FUN_0894548c | bytes 208 */

void FUN_0894548c(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar1) != 0) {
          FUN_0894548c(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar1),param_3);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else if (*(short *)(param_2 + 0x184) != param_3) {
    *(short *)(param_2 + 0x184) = (short)param_3;
    FUN_089469d8(param_1,param_2,2);
  }
  return;
}

