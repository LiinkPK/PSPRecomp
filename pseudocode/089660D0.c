/* Entry 0x089660D0 | file offset 0x001630A8 | FUN_089660d0 | bytes 700 */

undefined4 FUN_089660d0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
  *param_4 = 0;
  param_4[1] = DAT_089da120;
  local_1c = **(int **)(*(int *)(param_2 + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                               (*(int *)(*(int *)(param_2 + 0x90) + 4) + 2) * 2) + 0x60);
  local_18 = param_4;
  local_14 = param_3;
  local_10 = param_2;
  local_20 = (int *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),0x10,&local_30,1);
  local_24 = local_1c;
  if (local_20 != (int *)0x0) {
    iVar3 = local_10 + (uint)*(ushort *)(*(int *)(*(int *)(local_10 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_30;
  }
  *local_18 = (int)local_20;
  if (local_20 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    FUN_08935828(local_20,0,0x10);
    local_24 = local_24 << 2;
    iVar3 = FUN_08971134(*(undefined4 *)(local_10 + 0x18),local_24,&local_2c,1);
    if (iVar3 != 0) {
      iVar2 = local_10 + (uint)*(ushort *)(*(int *)(*(int *)(local_10 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) + local_2c;
    }
    *local_20 = iVar3;
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = FUN_08971134(*(undefined4 *)(local_10 + 0x18),local_24,&local_28,1);
      uVar1 = 1;
      if (iVar3 != 0) {
        iVar2 = local_10 + (uint)*(ushort *)(*(int *)(*(int *)(local_10 + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) + local_28;
      }
      local_20[1] = iVar3;
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else if (*(char *)(local_14 + 0x44) != '\0') {
        if (*(int *)(local_14 + 0x2c) < 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(local_10 + 0x88) + 0x1c8) + 0x38);
          if (iVar3 == 0) {
            iVar3 = -1;
          }
          else {
            iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(local_14 + 0x2c) * 4) + 0x10);
          }
        }
        if (iVar3 == -1) {
          uVar1 = 0;
        }
        else {
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          local_20[2] = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                             (float)(*(int *)(**(int **)(**(int **)(local_10 + 0x9c) + iVar3 * 4) +
                                             0x1c) + -1));
        }
      }
    }
  }
  return uVar1;
}

