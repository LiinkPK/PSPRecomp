/* Entry 0x088FB5D0 | file offset 0x000F85A8 | FUN_088fb5d0 | bytes 868 */

void FUN_088fb5d0(uint param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5
                 )

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  short *psVar10;
  int iVar11;
  char local_70 [4];
  undefined1 local_6c;
  undefined1 local_6b;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  char *local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  
  local_34 = param_1 & 0xff;
  local_70[0] = param_2;
  local_70[1] = param_3;
  local_6c = param_4;
  local_6b = param_5;
  local_44 = 0;
  local_38 = &DAT_09afe05c;
  local_50 = &DAT_09b69b10;
  local_3c = &DAT_09afb8a0;
  local_40 = 0;
  do {
    puVar3 = local_3c;
    puVar9 = local_50;
    local_4c = local_70 + local_44;
    if (local_70[local_44] == '\x01') {
      cVar1 = *(char *)((int)local_3c + 0x773);
      local_48 = local_3c;
      iVar11 = (int)local_3c + cVar1 * 0xc6 + 0x10;
      iVar6 = 0;
      puVar7 = local_50;
      do {
        *puVar7 = 0xffff;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 < 4);
      iVar6 = 0;
      puVar7 = local_50;
      do {
        puVar7[4] = 0xffff;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 < 10);
      local_50[0xe] = 0xffff;
      local_50[0xf] = 0;
      if (local_34 == 1) {
        if ((*(ushort *)((int)local_38 + local_40 + 0xe) & 1) != 0) {
          iVar6 = 0;
          do {
            uVar4 = FUN_088b7b18(iVar11,iVar6);
            *puVar9 = uVar4;
            FUN_088b765c(iVar11,iVar6,0xffffffff);
            iVar6 = iVar6 + 1;
            puVar9 = puVar9 + 1;
          } while (iVar6 < 4);
        }
        cVar1 = local_4c[4];
      }
      else {
        iVar6 = 0;
        puVar7 = local_50;
        do {
          uVar5 = FUN_088b7b18(iVar11,iVar6);
          iVar8 = FUN_088c53fc(&DAT_09afde98,uVar5);
          if (iVar8 == 0) {
            *puVar7 = (short)uVar5;
            FUN_088b765c(iVar11,iVar6,0xffffffff);
          }
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar6 < 4);
        iVar6 = 0;
        psVar10 = (short *)((int)puVar3 + cVar1 * 0xc6 + 0xb2);
        puVar7 = local_50;
        do {
          sVar2 = *psVar10;
          iVar8 = FUN_088c54bc(&DAT_09afde98,(int)sVar2);
          if (iVar8 == 0) {
            puVar7[4] = sVar2;
            FUN_088b766c(iVar11,iVar6,0xffffffff);
          }
          iVar6 = iVar6 + 1;
          psVar10 = psVar10 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar6 < 10);
        cVar1 = *(char *)((int)puVar3 + cVar1 * 0xc6 + 0xca);
        iVar6 = FUN_088c5534(&DAT_09afde98,(int)cVar1);
        if (iVar6 == 0) {
          puVar9[0xe] = (short)cVar1;
          FUN_088b767c(iVar11,0xffffffff);
        }
        cVar1 = local_4c[4];
      }
      if (cVar1 == '\x01') {
        iVar6 = FUN_088cbad0(local_48);
        iVar8 = 0;
        puVar9 = local_50;
        do {
          uVar5 = FUN_088b7b18(iVar11,iVar8);
          FUN_088b97e8(&local_58,uVar5);
          local_68 = local_58;
          local_64 = local_54;
          local_60 = local_58;
          local_5c = local_54;
          if ((local_58 != 0) && (iVar6 < *(char *)(local_58 + 0xe))) {
            *puVar9 = (short)uVar5;
            FUN_088b765c(iVar11,iVar8,0xffffffff);
          }
          iVar8 = iVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar8 < 4);
      }
    }
    local_44 = local_44 + 1;
    local_3c = local_3c + 0x418;
    local_50 = local_50 + 0x10;
    local_40 = local_40 + 0x10;
  } while (local_44 < 2);
  return;
}

