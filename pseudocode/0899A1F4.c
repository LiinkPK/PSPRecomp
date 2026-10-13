/* Entry 0x0899A1F4 | file offset 0x001971CC | FUN_0899a1f4 | bytes 888 */

/* WARNING: Removing unreachable block (ram,0x0899a544) */

void FUN_0899a1f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_90;
  uint local_8c;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  uint local_6c;
  uint local_60;
  uint local_5c;
  int local_58;
  ulonglong local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = param_1;
  local_3c = param_2;
  local_30 = param_3;
  local_2c = param_4;
  FUN_0899afc0(&local_40,&local_a0);
  FUN_0899afc0(&local_30,&local_80);
  puVar6 = &local_60;
  if (local_a0 < 2) {
LAB_0899a288:
    local_9c = (uint)(local_9c != local_7c);
    puVar6 = &local_a0;
  }
  else {
    if (1 < local_80) {
      if (local_a0 == 4) {
        puVar6 = (uint *)&DAT_089d11e0;
        if (local_80 == 2) goto LAB_0899a29c;
        goto LAB_0899a288;
      }
      if (local_80 == 4) {
        puVar6 = (uint *)&DAT_089d11e0;
        if (local_a0 == 2) goto LAB_0899a29c;
      }
      else {
        if (local_a0 == 2) goto LAB_0899a288;
        if (local_80 != 2) {
          uVar11 = 0;
          lVar2 = (ulonglong)local_6c * (ulonglong)local_90;
          uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
          lVar3 = (ulonglong)local_70 * (ulonglong)local_8c + lVar2;
          uVar9 = (uint)lVar3;
          uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar7 = (uint)((ulonglong)local_70 * (ulonglong)local_90);
          uVar1 = (uint)((ulonglong)local_70 * (ulonglong)local_90 >> 0x20);
          if ((uVar10 < uVar8) || ((uVar8 == uVar10 && (uVar9 < (uint)lVar2)))) {
            uVar11 = 1;
          }
          uVar9 = uVar1 + uVar9;
          local_50 = (ulonglong)local_6c * (ulonglong)local_8c + CONCAT44(uVar11,uVar10) +
                     (ulonglong)(uVar9 < uVar1);
          local_58 = local_98 + local_78 + 4;
          local_5c = (uint)(local_9c != local_7c);
          uVar4 = local_50;
          if (0x1fffffffffffffff < local_50) {
            do {
              uVar4 = local_50 & 1;
              uVar5 = local_50 >> 0x21;
              local_58 = local_58 + 1;
              local_50 = local_50 >> 1;
              if (uVar4 != 0) {
                uVar7 = uVar7 >> 1 | uVar9 << 0x1f;
                uVar9 = uVar9 >> 1 | 0x80000000;
              }
              uVar4 = local_50;
            } while (0x1fffffff < (uint)uVar5);
          }
          while (uVar4 < 0x1000000000000000) {
            local_58 = local_58 + -1;
            uVar4 = local_50 << 1;
            uVar8 = (uint)uVar4;
            if ((int)uVar9 < 0) {
              uVar8 = uVar8 | 1;
            }
            local_50 = CONCAT44((int)(uVar4 >> 0x20),uVar8);
            uVar9 = uVar9 << 1 | uVar7 >> 0x1f;
            uVar7 = uVar7 << 1;
          }
          if ((((uint)local_50 & 0xff) == 0x80) &&
             (((local_50 & 0x100) != 0 || (uVar7 != 0 || uVar9 != 0)))) {
            local_50 = local_50 + 0x80;
          }
          local_60 = 3;
          goto LAB_0899a29c;
        }
      }
    }
    local_7c = (uint)(local_9c != local_7c);
    puVar6 = &local_80;
  }
LAB_0899a29c:
  FUN_0899ad20(puVar6);
  return;
}

