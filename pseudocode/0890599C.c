/* Entry 0x0890599C | file offset 0x00102974 | FUN_0890599c | bytes 452 */

void FUN_0890599c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      local_10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
      iVar1 = sceNetAdhocPtpSend(*(undefined4 *)(param_1 + 8),
                                 *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14),&local_10,0,1);
      if ((((iVar1 == 0) || (iVar1 == -0x7fbef8f7)) || (iVar1 == -0x7fbeffff)) ||
         (((iVar1 == -0x7fbef8eb || (iVar1 == -0x7fbef8f8)) ||
          ((iVar1 == -0x7fbef8f4 || (iVar1 == -0x7fbef8e7)))))) {
        if ((0 < local_10) &&
           (iVar2 = *(int *)(param_1 + 0x14) + local_10, *(int *)(param_1 + 0x14) = iVar2,
           *(int *)(param_1 + 0x10) <= iVar2)) {
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        if (((iVar1 != 0) && (iVar1 != -0x7fbef8f7)) && (param_2 != (int *)0x0)) {
          (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18),iVar1);
        }
      }
    }
    else {
      iVar1 = sceNetAdhocPtpFlush(*(undefined4 *)(param_1 + 8),0,1);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14)) {
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 0xc))((int)param_2 + (int)*(short *)(*param_2 + 8),param_1);
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
      else if ((iVar1 != -0x7fbef8f7) && (param_2 != (int *)0x0)) {
        (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18));
      }
    }
  }
  return;
}

