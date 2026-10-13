/* Entry 0x0894555C | file offset 0x00142534 | FUN_0894555c | bytes 208 */

void FUN_0894555c(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar1) != 0) {
          FUN_0894555c(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar1),param_3);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else if (*(int *)(param_2 + 0x188) != param_3) {
    *(int *)(param_2 + 0x188) = param_3;
    FUN_089469d8(param_1,param_2,2);
  }
  return;
}

