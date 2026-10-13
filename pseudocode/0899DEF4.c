/* Entry 0x0899DEF4 | file offset 0x0019AECC | FUN_0899def4 | bytes 892 */

undefined4 FUN_0899def4(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 uStack_60;
  char local_5f;
  byte local_5e;
  ushort local_5a;
  char local_58;
  ushort local_52;
  ushort local_50;
  byte local_4e;
  byte local_4d;
  int local_40;
  int local_3c;
  uint local_38;
  
  uVar5 = 0;
  if (param_1 != 0) {
    FUN_0899bee0();
    pbVar2 = (byte *)FUN_0899e270(param_2,&uStack_60);
    uVar5 = 0;
    if ((local_5e & 0xfffffff7) - 1 < 2) {
      if (local_5f != '\0') {
        uVar8 = (uint)local_5a;
        FUN_0899ee30(param_1,3,uVar8,1,1,0);
        puVar4 = (uint *)FUN_0899c24c(param_1,0,0);
        if (puVar4 == (uint *)0x0) {
          return 0;
        }
        if (local_58 == '\x18') {
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar4 = (uint)*pbVar2 << 0x10 | (uint)pbVar2[1] << 8 | (uint)pbVar2[2] | 0xff000000;
            pbVar2 = pbVar2 + 3;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar4 = (uint)pbVar2[3] << 0x18 | (uint)*pbVar2 << 0x10 | (uint)pbVar2[1] << 8 |
                      (uint)pbVar2[2];
            pbVar2 = pbVar2 + 4;
            puVar4 = puVar4 + 1;
          }
        }
      }
      local_40 = 1;
      uVar5 = 5;
      local_3c = 1;
      if (8 < local_4e) {
        uVar5 = 1;
        local_40 = 2;
        local_3c = 2;
        if (0x10 < local_4e) {
          uVar5 = 3;
          local_40 = 3;
          local_3c = 4;
          if (0x18 < local_4e) {
            local_40 = 4;
          }
        }
      }
      local_38 = (uint)local_50;
      uVar8 = (uint)local_52;
      FUN_0899eaec(param_1,uVar5,uVar8,local_38,1,1,0);
      iVar3 = FUN_0899c1d4(param_1,0,0);
      uVar5 = 0;
      if (iVar3 != 0) {
        iVar10 = uVar8 * local_40;
        uVar11 = uVar8 * local_3c + 0xf & 0xfffffff0;
        if ((local_4d & 0x20) == 0) {
          iVar12 = uVar11 * (local_38 - 1);
          uVar11 = -uVar11;
          iVar3 = iVar3 + iVar12;
        }
        uVar1 = local_38;
        if ((local_5e & 8) == 0) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            FUN_0899e364(iVar3,pbVar2,uVar8,local_40,0);
            pbVar2 = pbVar2 + iVar10;
            iVar3 = iVar3 + uVar11;
          }
        }
        else {
          iVar10 = 0;
          iVar12 = 0;
          if (local_38 != 0) {
            do {
              iVar9 = -((int)(char)*pbVar2 >> 0x1f);
              iVar7 = ((int)(char)*pbVar2 & 0x7fU) + 1;
              pbVar2 = pbVar2 + 1;
              if (iVar7 != 0) {
                do {
                  iVar6 = iVar7;
                  if ((int)(uVar8 - iVar10) < iVar7) {
                    iVar6 = uVar8 - iVar10;
                  }
                  FUN_0899e364(iVar3,pbVar2,iVar6,local_40,iVar9);
                  iVar10 = iVar10 + iVar6;
                  if (iVar9 == 0) {
                    pbVar2 = pbVar2 + iVar6 * local_40;
                  }
                  iVar3 = iVar3 + iVar6 * local_3c;
                  iVar7 = iVar7 - iVar6;
                  if ((int)uVar8 <= iVar10) {
                    iVar12 = iVar12 + 1;
                    iVar6 = iVar10 * local_3c;
                    iVar10 = 0;
                    iVar3 = (iVar3 - iVar6) + uVar11;
                  }
                } while (0 < iVar7);
              }
              if (iVar9 != 0) {
                pbVar2 = pbVar2 + local_40;
              }
            } while (iVar12 < (int)local_38);
          }
        }
        sceKernelDcacheWritebackAll();
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

