/* Entry 0x0897A470 | file offset 0x00177448 | FUN_0897a470 | bytes 440 */

undefined4 FUN_0897a470(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  int local_10;
  
  local_18 = (int *)0x0;
  local_1c = DAT_09b6f478;
  local_14 = param_4;
  local_10 = param_3;
  piVar2 = (int *)FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),0xc,&local_30,1);
  local_20 = local_18;
  if (piVar2 != (int *)0x0) {
    iVar5 = local_1c + (uint)*(ushort *)(*(int *)(*(int *)(local_1c + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_30;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    local_20 = piVar2;
  }
  *local_14 = local_20;
  if (local_20 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_24 = (uint)*(ushort *)(local_10 + 0x24);
    if ((local_24 == 0) || (local_24 == 0)) {
      bVar1 = false;
    }
    else {
      local_28 = DAT_09b6f478;
      iVar5 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_24 << 6,&local_2c,1);
      if (iVar5 != 0) {
        local_28 = local_28 +
                   (uint)*(ushort *)(*(int *)(*(int *)(local_28 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(local_28 + 0xb4) = *(int *)(local_28 + 0xb4) + local_2c;
      }
      *local_20 = iVar5;
      if (iVar5 == 0) {
        bVar1 = false;
      }
      else {
        local_20[1] = local_24;
        uVar4 = 0;
        iVar5 = *local_20;
        if (local_24 != 0) {
          do {
            *(undefined1 *)(iVar5 + 0x34) = 0;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x40;
          } while (uVar4 < (uint)local_20[1]);
        }
        bVar1 = true;
      }
    }
    uVar3 = 1;
    if (bVar1) {
      local_14[1] = 0;
      if (*(short *)(local_10 + 0x26) == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

