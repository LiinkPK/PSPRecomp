/* Entry 0x0896BE68 | file offset 0x00168E40 | FUN_0896be68 | bytes 760 */

undefined4 FUN_0896be68(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  *param_1 = param_4;
  param_1[5] = param_4;
  cVar1 = *(char *)(param_3 + 0xe);
  param_1[7] = 0;
  *(bool *)(param_1 + 6) = cVar1 != '\0';
  *(bool *)((int)param_1 + 0x4d) = *(char *)(param_3 + 0x1c) != '\0';
  *(undefined1 *)(param_1 + 0x13) = 1;
  local_28 = param_4 << 4;
  local_24 = param_4;
  local_20 = param_2;
  iVar2 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),local_28,&local_40,1);
  if (iVar2 != 0) {
    iVar4 = local_20 + (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_40;
  }
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_08935828(iVar2,0);
    local_2c = local_24 << 2;
    iVar2 = FUN_08971134(*(undefined4 *)(local_20 + 0x18),local_2c,&local_3c,1);
    if (iVar2 != 0) {
      iVar4 = local_20 + (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_3c;
    }
    param_1[2] = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_08935828(iVar2,0,local_2c);
      iVar2 = FUN_08971134(*(undefined4 *)(local_20 + 0x18),local_28,&local_38,1);
      if (iVar2 != 0) {
        iVar4 = local_20 + (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_38;
      }
      param_1[9] = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_08935828(iVar2,0);
        iVar2 = FUN_08971134(*(undefined4 *)(local_20 + 0x18),local_28,&local_34,1);
        if (iVar2 != 0) {
          iVar4 = local_20 +
                  (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4;
          *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_34;
        }
        param_1[3] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          FUN_08935828(iVar2,0);
          iVar2 = FUN_08971134(*(undefined4 *)(local_20 + 0x18),local_28,&local_30,1);
          if (iVar2 != 0) {
            iVar4 = local_20 +
                    (uint)*(ushort *)(*(int *)(*(int *)(local_20 + 0x88) + 0x1c8) + 0x18) * 4;
            *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) + local_30;
          }
          param_1[4] = iVar2;
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            FUN_08935828(iVar2,0,local_28);
            param_1[10] = 0;
            param_1[0xb] = 0;
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            param_1[0x10] = 0;
            param_1[0x11] = 0;
            param_1[0x12] = 1;
            uVar3 = 1;
          }
        }
      }
    }
  }
  return uVar3;
}

