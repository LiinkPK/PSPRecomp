/* Entry 0x0897DC04 | file offset 0x0017ABDC | FUN_0897dc04 | bytes 556 */

undefined4 FUN_0897dc04(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  
  piVar2 = (int *)FUN_0898d440(0x18);
  local_18 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    FUN_08984db8(piVar2,*(undefined2 *)(param_3 + 0x3c),*(undefined1 *)(param_3 + 0x42));
    local_18 = piVar2;
  }
  *param_4 = local_18;
  if (local_18 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_1c = (uint)*(ushort *)(param_3 + 0x3c);
    local_20 = (uint)*(byte *)(param_3 + 0x42);
    if ((*local_18 == 0) || (local_24 = (int *)local_18[1], local_24 == (int *)0x0)) {
      bVar1 = false;
    }
    else {
      local_28 = local_20 * local_1c;
      if ((local_1c == 0) || (local_28 == 0)) {
        bVar1 = false;
      }
      else {
        local_2c = DAT_09b6f478;
        iVar3 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_1c * 0x50,&local_30,1);
        if (iVar3 != 0) {
          local_2c = local_2c +
                     (uint)*(ushort *)(*(int *)(*(int *)(local_2c + 0x88) + 0x1c8) + 0x18) * 4;
          *(int *)(local_2c + 0xb4) = *(int *)(local_2c + 0xb4) + local_30;
        }
        *local_24 = iVar3;
        if (iVar3 == 0) {
          bVar1 = false;
        }
        else {
          local_24[1] = local_1c;
          uVar6 = 0;
          iVar3 = *local_24;
          if (local_1c != 0) {
            do {
              *(undefined1 *)(iVar3 + 0x38) = 0;
              uVar6 = uVar6 + 1;
              iVar3 = iVar3 + 0x50;
            } while (uVar6 < (uint)local_24[1]);
          }
          bVar1 = true;
        }
      }
      if (bVar1) {
        iVar8 = *local_18;
        uVar6 = ((int *)local_18[1])[1];
        uVar7 = 0;
        iVar5 = *(int *)local_18[1];
        iVar3 = iVar8;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(iVar5 + 0x38) = 0;
            *(int *)(iVar5 + 0x40) = iVar8;
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + local_20 * 0x20;
            iVar5 = iVar5 + 0x50;
          } while (uVar7 < uVar6);
          iVar3 = *local_18;
        }
        if ((int)((iVar8 - iVar3) + ((uint)(iVar8 - iVar3 >> 5) >> 0x1b)) >> 5 == local_28) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    if (bVar1) {
      if (*(short *)(param_3 + 0x3e) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

