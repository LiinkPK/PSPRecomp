/* Entry 0x08944BA0 | file offset 0x00141B78 | FUN_08944ba0 | bytes 224 */

void FUN_08944ba0(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 'l') {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(param_2 + 4) != 0) {
      do {
        if (*(int *)(*(int *)(param_2 + 0x30) + iVar1) != 0) {
          FUN_08944ba0(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar1),param_3);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 4));
    }
  }
  else if ((*(int *)(param_2 + 0x17c) != param_3) && (*(short *)(param_2 + 0x184) != -1)) {
    *(int *)(param_2 + 0x17c) = param_3;
    FUN_089469d8(param_1,param_2,2);
  }
  return;
}

