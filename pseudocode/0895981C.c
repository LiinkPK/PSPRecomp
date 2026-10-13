/* Entry 0x0895981C | file offset 0x001567F4 | FUN_0895981c | bytes 500 */

bool FUN_0895981c(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  
  *param_4 = 0;
  if (*(char *)(param_3 + 0x36) == '\0') {
    local_1c = param_3;
    if (*(char *)(param_3 + 0x35) == '\0') {
      if (*(char *)(param_3 + 0x34) != '\0') {
        local_30 = 0;
        local_34 = DAT_09b6f478;
        iVar2 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),0x24,&local_38,1);
        if (iVar2 == 0) {
          *param_4 = local_30;
        }
        else {
          iVar3 = local_34 +
                  (uint)*(ushort *)(*(int *)(*(int *)(local_34 + 0x88) + 0x1c8) + 0x18) * 4;
          *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_38;
          FUN_0895ed40(iVar2,local_1c);
          *param_4 = iVar2;
        }
      }
    }
    else {
      local_28 = 0;
      local_2c = DAT_09b6f478;
      iVar2 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),0x14,&local_3c,1);
      if (iVar2 != 0) {
        iVar3 = local_2c + (uint)*(ushort *)(*(int *)(*(int *)(local_2c + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_3c;
        FUN_0895f578(iVar2,local_1c);
        local_28 = iVar2;
      }
      *param_4 = local_28;
    }
  }
  else {
    local_20 = (undefined4 *)0x0;
    local_24 = DAT_09b6f478;
    puVar1 = (undefined4 *)FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),4,&local_40,1);
    if (puVar1 != (undefined4 *)0x0) {
      local_24 = local_24 +
                 (uint)*(ushort *)(*(int *)(*(int *)(local_24 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(local_24 + 0xb4) = *(int *)(local_24 + 0xb4) + local_40;
      *puVar1 = &DAT_089dbf90;
      local_20 = puVar1;
    }
    *param_4 = (int)local_20;
  }
  return *param_4 != 0;
}

