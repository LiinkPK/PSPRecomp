/* Entry 0x08980648 | file offset 0x0017D620 | FUN_08980648 | bytes 488 */

void FUN_08980648(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *in_a3;
  int iVar6;
  uint uVar7;
  
  iVar4 = DAT_09b6f478;
  iVar6 = *in_a3;
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0x50) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(iVar6 + 0x50));
      iVar2 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if (*(int *)(iVar6 + 0x58) != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(iVar4 + 0x18),*(int *)(iVar6 + 0x58));
      iVar2 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar1;
    }
    if ((*(int *)(iVar6 + 0x54) != 0) && (iVar1 = *(int *)(iVar6 + 0x5c), iVar1 != 0)) {
      uVar7 = 0;
      iVar2 = 0;
      if (*(int *)(iVar6 + 0x54) != 0) {
        do {
          if (*(int *)(iVar1 + iVar2) == 0) {
            uVar5 = *(uint *)(iVar6 + 0x54);
          }
          else {
            iVar1 = FUN_08971010(*(undefined4 *)(iVar4 + 0x18));
            iVar3 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
            *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
            iVar1 = *(int *)(iVar6 + 0x5c);
            uVar5 = *(uint *)(iVar6 + 0x54);
          }
          uVar7 = uVar7 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar7 < uVar5);
      }
      if (iVar1 != 0) {
        iVar1 = FUN_08971010(*(undefined4 *)(iVar4 + 0x18),iVar1);
        iVar4 = iVar4 + (uint)*(ushort *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar4 + 0xb4) = *(int *)(iVar4 + 0xb4) - iVar1;
      }
    }
    if ((iVar6 != -0x48) && (*(undefined **)(iVar6 + 0x48) = &DAT_089dd108, iVar6 != -0x48)) {
      *(undefined **)(iVar6 + 0x48) = &DAT_089c55e0;
    }
    if ((iVar6 != -0x44) && (*(undefined **)(iVar6 + 0x44) = &DAT_089dd0f0, iVar6 != -0x44)) {
      *(undefined **)(iVar6 + 0x44) = &DAT_089c55e0;
    }
    if ((iVar6 != -0x40) && (*(undefined **)(iVar6 + 0x40) = &DAT_089dd0d8, iVar6 != -0x40)) {
      *(undefined **)(iVar6 + 0x40) = &DAT_089c55e0;
    }
    FUN_0898d4ac(iVar6,0x60);
  }
  return;
}

