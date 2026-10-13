/* Entry 0x088D5AC8 | file offset 0x000D2AA0 | FUN_088d5ac8 | bytes 544 */

int FUN_088d5ac8(int *param_1,int param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_c0 [35];
  uint local_34;
  int *local_30;
  uint local_2c;
  
  piVar5 = local_c0;
  local_34 = param_3 & 0xff;
  local_2c = param_4 & 0xff;
  iVar7 = 0;
  local_30 = param_1;
  if ((*(uint *)(DAT_089d8140 + 0x1c) & 1) == 0) {
    iVar6 = 0;
    if (0 < param_2) {
      piVar5 = &DAT_089d7be0;
      do {
        iVar2 = *piVar5;
        if (iVar2 == -1) break;
        if ((iVar2 != 0x17) || (local_34 != 0)) {
          uVar4 = piVar5[1];
          bVar3 = true;
          if ((-1 < (int)uVar4) &&
             ((*(uint *)(DAT_089d726c + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) == 0)) {
            bVar3 = false;
          }
          if (bVar3) {
            *param_1 = iVar2;
            uVar1 = FUN_088d60e4(*param_1);
            *(undefined2 *)(param_1 + 1) = uVar1;
            uVar1 = FUN_088d5e0c(*param_1);
            *(undefined2 *)((int)param_1 + 6) = uVar1;
            iVar7 = iVar7 + 1;
            param_1 = param_1 + 2;
          }
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 5;
      } while (iVar6 < param_2);
    }
    if ((local_2c != 0) && (iVar6 = FUN_0885c304(DAT_089d4e14), iVar6 != 0)) {
      local_30 = local_30 + iVar7 * 2;
      *(undefined2 *)((int)local_30 + 6) = 0;
      *(ushort *)((int)local_30 + 6) = *(ushort *)((int)local_30 + 6) | 2;
      *local_30 = 0x21;
      *(undefined2 *)(local_30 + 1) = 0;
      *(ushort *)((int)local_30 + 6) = *(ushort *)((int)local_30 + 6) | 4;
      iVar7 = iVar7 + 1;
      *(ushort *)((int)local_30 + 6) = *(ushort *)((int)local_30 + 6) | 8;
    }
  }
  else {
    iVar7 = FUN_08900c90(DAT_089d8140,local_c0,0x23);
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        *param_1 = *piVar5;
        uVar1 = FUN_088d60e4();
        *(undefined2 *)(param_1 + 1) = uVar1;
        uVar1 = FUN_088d5e0c(*param_1);
        *(undefined2 *)((int)param_1 + 6) = uVar1;
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
        param_1 = param_1 + 2;
      } while (iVar6 < iVar7);
    }
  }
  return iVar7;
}

