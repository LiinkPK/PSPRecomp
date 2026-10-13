/* Entry 0x0894BA60 | file offset 0x00148A38 | FUN_0894ba60 | bytes 1024 */

void FUN_0894ba60(float param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  
  if ((*(ushort *)(param_3 + 2) & 8) == 0) {
    iVar7 = *(int *)(param_3 + 0x40);
    switch(param_4) {
    case 2:
      local_48 = *(int *)(iVar7 + 0x28);
      uVar11 = (uint)*(byte *)(iVar7 + 0x14);
      break;
    case 3:
      local_48 = *(int *)(iVar7 + 0x2c);
      uVar11 = (uint)*(byte *)(iVar7 + 0x15);
      break;
    default:
      uVar11 = 0;
      local_48 = 0;
      break;
    case 5:
      local_48 = *(int *)(iVar7 + 0x34);
      uVar11 = (uint)*(byte *)(iVar7 + 0x17);
      *(undefined2 *)(param_3 + 0x36) = 0;
      break;
    case 7:
      if ((*(ushort *)(param_3 + 2) & 4) != 0) {
        return;
      }
      *(ushort *)(param_3 + 2) = *(ushort *)(param_3 + 2) | 4;
      local_48 = *(int *)(iVar7 + 0x3c);
      uVar11 = (uint)*(byte *)(iVar7 + 0x19);
      break;
    case 8:
      local_48 = *(int *)(iVar7 + 0x40);
      uVar11 = (uint)*(byte *)(iVar7 + 0x1a);
    }
    iVar12 = 0;
    *(int *)(param_2 + 0x8c) = param_3;
    local_40 = param_4;
    if (uVar11 != 0) {
      do {
        uVar10 = (uint)*(ushort *)(local_48 + iVar12 * 2);
        iVar3 = uVar10 * 4;
        puVar2 = *(ushort **)(*(int *)(iVar7 + 0x1c) + iVar3);
        *(ushort **)(param_2 + 0x90) = puVar2;
        uVar9 = *(undefined4 *)(*(int *)(param_3 + 0x48) + iVar3);
        iVar3 = *(int *)(*(int *)(param_3 + 0x4c) + iVar3);
        iVar8 = *(int *)(param_3 + 0x44) + (uint)puVar2[1];
        fVar13 = param_1;
        if (iVar3 != 0) {
          fVar13 = param_1 - (float)(int)*(short *)(iVar3 + 4);
        }
        uVar6 = (uint)*puVar2;
        local_44 = param_2;
        switch(local_40) {
        case 2:
          iVar3 = **(int **)(&DAT_089d95d0 + uVar6 * 4);
          (**(code **)(iVar3 + 0x1c))
                    (fVar13,(int)*(int **)(&DAT_089d95d0 + uVar6 * 4) +
                            (int)*(short *)(iVar3 + 0x18),param_2,uVar9,iVar8);
          break;
        case 3:
          iVar3 = **(int **)(&DAT_089d95d0 + uVar6 * 4);
          (**(code **)(iVar3 + 0x24))
                    (fVar13,(int)*(int **)(&DAT_089d95d0 + uVar6 * 4) +
                            (int)*(short *)(iVar3 + 0x20),param_2,uVar9,iVar8);
          break;
        case 5:
          uVar1 = *(ushort *)(iVar7 + 0xc);
          iVar3 = FUN_0894c0dc((float)uVar1,param_2,iVar7,*puVar2,&local_4c,&local_50);
          param_2 = local_44;
          if (iVar3 == 0) {
LAB_0894bd60:
            local_4c = -1;
          }
          else {
            iVar4 = 0;
            if (local_50 != 0) {
              iVar4 = (uint)uVar1 - (int)*(short *)(local_50 + 4);
            }
            iVar5 = uVar10 * 4;
            *(int *)(*(int *)(param_3 + 0x48) + iVar5) = iVar3;
            *(int *)(*(int *)(param_3 + 0x4c) + iVar5) = local_50;
            iVar5 = **(int **)(&DAT_089d95d0 + uVar6 * 4);
            (**(code **)(iVar5 + 0x34))
                      ((float)iVar4,fVar13,
                       (int)*(int **)(&DAT_089d95d0 + uVar6 * 4) + (int)*(short *)(iVar5 + 0x30),
                       local_44,iVar3,iVar8,uVar9);
            local_4c = local_4c + 1;
            if ((int)(uint)*(byte *)(iVar7 + 0x13) <= local_4c) goto LAB_0894bd60;
            if (local_4c < *(short *)(param_3 + 0x36)) {
              local_4c = (int)*(short *)(param_3 + 0x36);
            }
          }
          *(short *)(param_3 + 0x36) = (short)local_4c;
          break;
        case 7:
          iVar3 = **(int **)(&DAT_089d95d0 + uVar6 * 4);
          (**(code **)(iVar3 + 0x3c))
                    ((int)*(int **)(&DAT_089d95d0 + uVar6 * 4) + (int)*(short *)(iVar3 + 0x38),
                     param_2,uVar9,iVar8);
          break;
        case 8:
          iVar3 = **(int **)(&DAT_089d95d0 + uVar6 * 4);
          (**(code **)(iVar3 + 0x44))
                    (fVar13,(int)*(int **)(&DAT_089d95d0 + uVar6 * 4) +
                            (int)*(short *)(iVar3 + 0x40),param_2,uVar9,iVar8);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar11);
    }
  }
  return;
}

