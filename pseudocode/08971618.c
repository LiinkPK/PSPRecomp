/* Entry 0x08971618 | file offset 0x0016E5F0 | FUN_08971618 | bytes 188 */

void FUN_08971618(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar1 + *(int *)(iVar1 + 0x10) + iVar2 + 4) != -1) {
        (**(code **)(*(int *)(param_2 + 0x24) + 0x4c))
                  (param_2 + *(short *)(*(int *)(param_2 + 0x24) + 0x48));
        *(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x10) + iVar2 + 4) = 0xffffffff;
        iVar1 = *param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 < *(int *)(iVar1 + 0xc));
  }
  return;
}

