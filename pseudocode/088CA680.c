/* Entry 0x088CA680 | file offset 0x000C7658 | FUN_088ca680 | bytes 808 */

void FUN_088ca680(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 uStack_60;
  undefined1 auStack_5f [11];
  undefined1 auStack_54 [12];
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined1 local_40;
  undefined1 local_3f [3];
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  puVar3 = &uStack_60;
  local_2c = param_4 & 0xff;
  iVar4 = *(int *)(param_1 + 0xbdb8);
  if ((iVar4 < 2) && (-1 < iVar4)) {
    local_30 = param_1 + 0x10000;
    if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0xbdb8) = 1;
      *(undefined4 *)(param_1 + 0xbdac) = 0;
    }
    iVar4 = 0;
    iVar5 = param_1 + 0x10000;
    do {
      if (0x1517 < *(int *)(iVar5 + -0x5e88)) {
        *(uint *)(param_1 + 0xbde8) = *(uint *)(param_1 + 0xbde8) | 1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < 2);
    iVar5 = 0;
    local_3c = &DAT_089d7758;
    iVar10 = param_1 + 0x10000;
    iVar4 = param_1 + 0x10000;
    local_38 = param_1;
    local_34 = param_3;
    do {
      iVar8 = *param_2;
      if (iVar8 != 0) {
        uVar9 = 0;
        iVar1 = (**(code **)(*(int *)(iVar8 + 0x34) + 0x34))
                          (iVar8 + *(short *)(*(int *)(iVar8 + 0x34) + 0x30));
        if (iVar1 == 1) {
          iVar8 = *(int *)(iVar8 + 0x40);
          uVar6 = 0;
          puVar7 = local_3c;
          do {
            iVar1 = *(int *)(iVar8 + 0x34);
            iVar2 = (int)*(short *)(iVar1 + 8);
            iVar1 = (**(code **)(iVar1 + 0xc))(iVar8 + iVar2,iVar2,*puVar7,puVar7[1]);
            if (iVar1 != 0) {
              uVar9 = uVar9 | 1 << (uVar6 & 0x1f);
            }
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 2;
          } while ((int)uVar6 < 0xf);
        }
        if (*(char *)(iVar5 + local_34) == '\x01') {
          uVar9 = uVar9 | 0x8000;
        }
        if ((uVar9 == *(uint *)(iVar10 + -0x4244)) && (*(int *)(iVar4 + -0x423c) < 0xff)) {
          *(int *)(iVar4 + -0x423c) = *(int *)(iVar4 + -0x423c) + 1;
        }
        else {
          FUN_088ca564(local_38,iVar5);
          *(uint *)(iVar10 + -0x4244) = uVar9;
          *(undefined4 *)(iVar4 + -0x423c) = 1;
        }
      }
      iVar8 = local_38;
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 1;
      iVar10 = iVar10 + 4;
      iVar4 = iVar4 + 4;
    } while (iVar5 < 2);
    if (local_2c == 1) {
      uVar9 = FUN_088c8434(local_38);
      if (uVar9 < 200) {
        FUN_089a34e0(&uStack_60);
        FUN_089a34e0(auStack_54);
        local_3f[2] = 0;
        local_3f[1] = 0;
        local_3f[0] = 0;
        local_40 = 0;
        local_42 = 0;
        local_48 = *(undefined4 *)(local_30 + -0x4254);
        local_44 = 0;
        iVar5 = iVar8 + uVar9 * 0x24;
        FUN_089a34c0(iVar5 + 0xa180,&uStack_60);
        FUN_089a34c0(iVar5 + 0xa18c,auStack_54);
        *(undefined4 *)(iVar5 + 0xa198) = local_48;
        *(undefined2 *)(iVar5 + 0xa19c) = local_44;
        *(undefined2 *)(iVar5 + 0xa19e) = local_42;
        *(undefined1 *)(iVar5 + 0xa1a0) = local_40;
        iVar4 = 0;
        do {
          iVar10 = iVar4 + 1;
          *(undefined1 *)(iVar4 + iVar5 + 0xa180 + 0x21) = puVar3[0x21];
          puVar3 = auStack_5f + iVar4;
          iVar4 = iVar10;
        } while (iVar10 < 3);
        *(int *)(iVar8 + 0xbda4) = *(int *)(iVar8 + 0xbda4) + 1;
      }
      else {
        *(uint *)(iVar8 + 0xbde8) = *(uint *)(iVar8 + 0xbde8) | 1;
      }
    }
    *(int *)(local_30 + -0x4254) = *(int *)(local_30 + -0x4254) + 1;
  }
  return;
}

