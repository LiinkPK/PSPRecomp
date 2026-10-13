/* Entry 0x08891D84 | file offset 0x0008ED5C | FUN_08891d84 | bytes 1044 */

undefined4
FUN_08891d84(char *param_1,undefined1 *param_2,undefined4 *param_3,undefined1 *param_4,
            undefined4 *param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 auStack_130 [12];
  ushort local_124;
  ushort local_122;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [44];
  short local_74;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  undefined2 local_68;
  short local_66;
  char local_64;
  char local_63;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48;
  char local_47;
  char local_46;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    local_4c = *(int *)(DAT_089d69f8 + *(int *)(param_1 + 4) * 4 + 0x18);
    uVar5 = *(int *)(param_1 + 4) + 1;
    uVar4 = uVar5 & 1;
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    local_50 = *(int *)(DAT_089d69f8 + uVar4 * 4 + 0x18);
    if ((local_4c == 0) || (local_50 == 0)) {
      uVar2 = 0xfffffffe;
    }
    else {
      local_44 = param_2;
      local_40 = param_4;
      local_3c = param_3;
      local_38 = param_5;
      iVar1 = FUN_088916a4(param_1,auStack_130);
      if (iVar1 == 0) {
        local_46 = FUN_08891b8c(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18)
                               );
        iVar8 = 0;
        local_47 = FUN_088912d0(param_1);
        local_c0 = 0;
        local_48 = 0;
        local_a4 = 0;
        iVar6 = 0;
        iVar1 = -1;
        uVar7 = 0;
        if (local_122 != 0) {
          uVar7 = 0;
          do {
            iVar3 = FUN_08891894(param_1,auStack_a0,(uint)local_124 + iVar6);
            if (iVar3 == 0) {
              if (local_46 == '\x01') {
                if ((local_74 == 6) && (iVar6 != 0)) {
                  iVar8 = iVar8 + 1;
                }
                if (iVar8 != *(int *)(param_1 + 0x1c)) {
                  uVar4 = (uint)local_122;
                  goto LAB_088920a8;
                }
              }
              if (local_47 == '\x01') {
                if (-1 < local_63) {
                  iVar1 = (int)local_63;
                }
                iVar3 = FUN_08891900(param_1);
                if (iVar1 != iVar3) {
                  uVar4 = (uint)local_122;
                  goto LAB_088920a8;
                }
              }
              local_60 = (int)local_70;
              local_5c = (int)local_6e;
              local_58 = (int)local_6c;
              local_54 = (int)local_6a;
              if (local_64 < '\x01') {
                if ((-1 < local_64) &&
                   (iVar3 = func_0x08ae3e34((float)(int)local_66,local_4c,&local_d8,
                                            *(undefined4 *)(param_1 + 4),local_68,&local_60),
                   iVar3 == 0)) {
                  if (param_6 == '\0') {
                    FUN_08890fc4(param_1,local_68);
                  }
                  uVar7 = 1;
                }
              }
              else if (local_64 < '\x02') {
                iVar3 = func_0x08ae3e34((float)(int)local_66,local_50,&local_d8,
                                        *(undefined4 *)(param_1 + 4),local_68,&local_60);
                if (iVar3 == 0) {
                  if (param_6 == '\0') {
                    FUN_08890fc4(param_1,local_68);
                  }
                  uVar7 = 1;
                }
              }
              else if (local_64 < '\x03') {
                iVar3 = func_0x08ae3e34((float)(int)local_66,local_4c,&local_d8,
                                        *(undefined4 *)(param_1 + 4),local_68,&local_60);
                if (iVar3 == 0) {
                  if (param_6 == '\0') {
                    FUN_08890fc4(param_1,local_68);
                  }
                  uVar7 = 1;
                }
                iVar3 = func_0x08ae3e34((float)(int)local_66,local_50,&local_bc,
                                        *(undefined4 *)(param_1 + 4),local_68,&local_60);
                if (iVar3 == 0) {
                  if (param_6 == '\0') {
                    FUN_08890fc4(param_1,local_68);
                  }
                  local_48 = 1;
                }
              }
              uVar4 = (uint)local_122;
            }
            else {
              uVar4 = (uint)local_122;
            }
LAB_088920a8:
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar4);
        }
        if (local_44 != (undefined1 *)0x0) {
          *local_44 = uVar7;
        }
        if (local_40 != (undefined1 *)0x0) {
          *local_40 = local_48;
        }
        if (local_3c != (undefined4 *)0x0) {
          *local_3c = local_d8;
          local_3c[1] = local_d4;
          local_3c[2] = local_d0;
          local_3c[3] = local_cc;
          local_3c[4] = local_c8;
          local_3c[5] = local_c4;
          local_3c[6] = local_c0;
        }
        if (local_38 != (undefined4 *)0x0) {
          *local_38 = local_bc;
          local_38[1] = local_b8;
          local_38[2] = local_b4;
          local_38[3] = local_b0;
          local_38[4] = local_ac;
          local_38[5] = local_a8;
          local_38[6] = local_a4;
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
  }
  return uVar2;
}

