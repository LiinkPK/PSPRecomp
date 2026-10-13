/* Entry 0x089C03BC | file offset 0x001BD394 | FUN_089c03bc | bytes 1148 */

undefined4
FUN_089c03bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  undefined1 uStack_60;
  char local_5f;
  byte local_5e;
  ushort local_5a;
  char local_58;
  ushort local_52;
  ushort local_50;
  byte local_4e;
  byte local_4d;
  uint local_40;
  uint local_3c;
  uint local_38;
  
  if (((param_1 == 0) || (param_5 == 0)) || (iVar1 = FUN_089c00d8(param_2,param_3), iVar1 == 0)) {
    return 0;
  }
  FUN_089bb460(param_1);
  pbVar2 = (byte *)FUN_089c030c(param_2,&uStack_60);
  uVar10 = (uint)local_5a;
  if (local_5f != '\0') {
    uVar3 = thunk_FUN_089bb634(1,param_5);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    FUN_089be68c(uVar3,3,0,uVar10,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
    puVar6 = (uint *)FUN_089bd2d0(param_1,0,0);
    if (local_58 == '\x18') {
      uVar7 = 0;
      if (uVar10 != 0) {
        do {
          uVar7 = uVar7 + 1;
          *puVar6 = (uint)*pbVar2 << 0x10 | (uint)pbVar2[1] << 8 | (uint)pbVar2[2] | 0xff000000;
          pbVar2 = pbVar2 + 3;
          puVar6 = puVar6 + 1;
        } while (uVar10 != uVar7);
      }
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        do {
          uVar7 = uVar7 + 1;
          *puVar6 = (uint)pbVar2[3] << 0x18 | (uint)*pbVar2 << 0x10 | (uint)pbVar2[1] << 8 |
                    (uint)pbVar2[2];
          pbVar2 = pbVar2 + 4;
          puVar6 = puVar6 + 1;
        } while (uVar10 != uVar7);
      }
    }
  }
  uVar3 = FUN_089c0104(local_4e);
  local_3c = (uint)local_50;
  local_38 = (uint)local_52;
  uVar4 = FUN_089bb634(1,param_5);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  FUN_089be68c(uVar4,uVar3,0,local_38,local_3c,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
  iVar16 = (int)(local_4e + 7) >> 3;
  iVar1 = FUN_089bd01c(uVar4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  iVar1 = iVar1 >> 3;
  local_40 = local_38 * iVar1 + 0xf;
  iVar5 = FUN_089bd25c(param_1,0,0);
  iVar12 = local_38 * iVar16;
  local_40 = local_40 & 0xfffffff0;
  if ((local_4d & 0x20) == 0) {
    iVar5 = iVar5 + local_40 * (local_3c - 1);
    local_40 = -local_40;
  }
  if ((local_5e & 8) == 0) {
    uVar10 = 0;
    if (0 < (int)local_3c) {
      do {
        FUN_089c0148(iVar5,pbVar2,local_38,iVar16,0);
        iVar5 = iVar5 + local_40;
        if (local_3c == uVar10 + 1) break;
        FUN_089c0148(iVar5,pbVar2 + iVar12,local_38,iVar16,0);
        uVar10 = uVar10 + 2;
        pbVar2 = pbVar2 + iVar12 + iVar12;
        iVar5 = iVar5 + local_40;
      } while (local_3c != uVar10);
    }
  }
  else {
    iVar12 = 0;
    iVar15 = 0;
    if (0 < (int)local_3c) {
      do {
        pbVar14 = pbVar2 + 1;
        iVar11 = ((int)(char)*pbVar2 & 0x7fU) + 1;
        iVar13 = -((int)(char)*pbVar2 >> 0x1f);
        while (iVar9 = iVar11, 0 < iVar11) {
          while( true ) {
            iVar8 = local_38 - iVar12;
            if (iVar9 < iVar8) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar9 - iVar8;
              iVar9 = iVar8;
            }
            FUN_089c0148(iVar5,pbVar14,iVar9,iVar16,iVar13);
            iVar5 = iVar5 + iVar9 * iVar1;
            iVar12 = iVar12 + iVar9;
            if (iVar13 == 0) {
              pbVar14 = pbVar14 + iVar9 * iVar16;
            }
            if (iVar12 < (int)local_38) break;
            iVar9 = iVar1 * iVar12;
            iVar15 = iVar15 + 1;
            iVar12 = 0;
            iVar5 = (iVar5 - iVar9) + local_40;
            iVar9 = iVar11;
            if (iVar11 < 1) goto LAB_089c0664;
          }
        }
LAB_089c0664:
        pbVar2 = pbVar14;
        if (iVar13 != 0) {
          pbVar2 = pbVar14 + iVar16;
        }
        if ((int)local_3c <= iVar15) {
          sceKernelDcacheWritebackAll();
          return 1;
        }
      } while( true );
    }
  }
  sceKernelDcacheWritebackAll();
  return 1;
}

