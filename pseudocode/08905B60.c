/* Entry 0x08905B60 | file offset 0x00102B38 | FUN_08905b60 | bytes 248 */

void FUN_08905b60(int param_1,int *param_2)

{
  int iVar1;
  int local_10;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_10 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24);
    iVar1 = sceNetAdhocPtpRecv(*(undefined4 *)(param_1 + 8),
                               *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24),&local_10,0,1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x24) + local_10;
      *(int *)(param_1 + 0x24) = iVar1;
      if (*(int *)(param_1 + 0x20) <= iVar1) {
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 0x14))
                    ((int)param_2 + (int)*(short *)(*param_2 + 0x10),param_1,
                     *(undefined4 *)(param_1 + 0x1c),iVar1);
        }
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    else if ((iVar1 != -0x7fbef8f7) && (param_2 != (int *)0x0)) {
      (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18),iVar1);
    }
  }
  return;
}

