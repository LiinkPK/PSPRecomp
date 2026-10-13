/* Entry 0x089A1508 | file offset 0x0019E4E0 | FUN_089a1508 | bytes 616 */

void FUN_089a1508(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_2 == 1) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    *puVar2 = 0x3c000000;
    uVar1 = param_3 + 1U & 3;
    uVar3 = -1 << (4 - uVar1) * 8 & 0x3d000000U | *(uint *)((param_3 + 1U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 5U & 3;
    uVar5 = -1 << (4 - uVar1) * 8 & 0x3d000000U | *(uint *)((param_3 + 5U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 9U & 3;
    uVar8 = -1 << (4 - uVar1) * 8 & 0x3d000000U | *(uint *)((param_3 + 9U) - uVar1) >> uVar1 * 8;
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    puVar2[3] = uVar8;
    uVar1 = param_3 + 0x11U & 3;
    uVar3 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x11U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x15U & 3;
    uVar5 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x15U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x19U & 3;
    uVar8 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x19U) - uVar1) >> uVar1 * 8;
    puVar2[4] = uVar3;
    puVar2[5] = uVar5;
    puVar2[6] = uVar8;
    uVar1 = param_3 + 0x21U & 3;
    uVar4 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x21U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x25U & 3;
    uVar6 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x25U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x29U & 3;
    uVar9 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x29U) - uVar1) >> uVar1 * 8;
    puVar2[7] = uVar4;
    puVar2[8] = uVar6;
    puVar2[9] = uVar9;
    uVar1 = param_3 + 0x31U & 3;
    uVar3 = param_3 + 0x35U & 3;
    uVar8 = *(uint *)((param_3 + 0x35U) - uVar3);
    uVar5 = param_3 + 0x39U & 3;
    uVar11 = *(uint *)((param_3 + 0x39U) - uVar5);
    puVar2[10] = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x31U) - uVar1) >> uVar1 * 8;
    puVar2[0xb] = uVar6 & -1 << (4 - uVar3) * 8 | uVar8 >> uVar3 * 8;
    puVar2[0xc] = uVar9 & -1 << (4 - uVar5) * 8 | uVar11 >> uVar5 * 8;
    puVar2 = puVar2 + 0xd;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    *puVar2 = 0x3e000000;
    uVar1 = param_3 + 1U & 3;
    uVar3 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_3 + 1U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 5U & 3;
    uVar5 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_3 + 5U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 9U & 3;
    uVar8 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_3 + 9U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0xdU & 3;
    uVar11 = -1 << (4 - uVar1) * 8 & 0x3f000000U | *(uint *)((param_3 + 0xdU) - uVar1) >> uVar1 * 8;
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    puVar2[3] = uVar8;
    puVar2[4] = uVar11;
    uVar1 = param_3 + 0x11U & 3;
    uVar3 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x11U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x15U & 3;
    uVar5 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x15U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x19U & 3;
    uVar8 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x19U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x1dU & 3;
    uVar11 = uVar11 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x1dU) - uVar1) >> uVar1 * 8;
    puVar2[5] = uVar3;
    puVar2[6] = uVar5;
    puVar2[7] = uVar8;
    puVar2[8] = uVar11;
    uVar1 = param_3 + 0x21U & 3;
    uVar9 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x21U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x25U & 3;
    uVar7 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x25U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x29U & 3;
    uVar10 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x29U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x2dU & 3;
    uVar12 = uVar11 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x2dU) - uVar1) >> uVar1 * 8;
    puVar2[9] = uVar9;
    puVar2[10] = uVar7;
    puVar2[0xb] = uVar10;
    puVar2[0xc] = uVar12;
    uVar1 = param_3 + 0x31U & 3;
    uVar3 = param_3 + 0x35U & 3;
    uVar11 = *(uint *)((param_3 + 0x35U) - uVar3);
    uVar5 = param_3 + 0x39U & 3;
    uVar4 = *(uint *)((param_3 + 0x39U) - uVar5);
    uVar8 = param_3 + 0x3dU & 3;
    uVar6 = *(uint *)((param_3 + 0x3dU) - uVar8);
    puVar2[0xd] = uVar9 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x31U) - uVar1) >> uVar1 * 8;
    puVar2[0xe] = uVar7 & -1 << (4 - uVar3) * 8 | uVar11 >> uVar3 * 8;
    puVar2[0xf] = uVar10 & -1 << (4 - uVar5) * 8 | uVar4 >> uVar5 * 8;
    puVar2[0x10] = uVar12 & -1 << (4 - uVar8) * 8 | uVar6 >> uVar8 * 8;
    puVar2 = puVar2 + 0x11;
  }
  else if (param_2 == 2) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    *puVar2 = 0x3a000000;
    uVar1 = param_3 + 1U & 3;
    uVar3 = -1 << (4 - uVar1) * 8 & 0x3b000000U | *(uint *)((param_3 + 1U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 5U & 3;
    uVar5 = -1 << (4 - uVar1) * 8 & 0x3b000000U | *(uint *)((param_3 + 5U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 9U & 3;
    uVar8 = -1 << (4 - uVar1) * 8 & 0x3b000000U | *(uint *)((param_3 + 9U) - uVar1) >> uVar1 * 8;
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    puVar2[3] = uVar8;
    uVar1 = param_3 + 0x11U & 3;
    uVar3 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x11U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x15U & 3;
    uVar5 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x15U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x19U & 3;
    uVar8 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x19U) - uVar1) >> uVar1 * 8;
    puVar2[4] = uVar3;
    puVar2[5] = uVar5;
    puVar2[6] = uVar8;
    uVar1 = param_3 + 0x21U & 3;
    uVar4 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x21U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x25U & 3;
    uVar6 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x25U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x29U & 3;
    uVar9 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x29U) - uVar1) >> uVar1 * 8;
    puVar2[7] = uVar4;
    puVar2[8] = uVar6;
    puVar2[9] = uVar9;
    uVar1 = param_3 + 0x31U & 3;
    uVar3 = param_3 + 0x35U & 3;
    uVar8 = *(uint *)((param_3 + 0x35U) - uVar3);
    uVar5 = param_3 + 0x39U & 3;
    uVar11 = *(uint *)((param_3 + 0x39U) - uVar5);
    puVar2[10] = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x31U) - uVar1) >> uVar1 * 8;
    puVar2[0xb] = uVar6 & -1 << (4 - uVar3) * 8 | uVar8 >> uVar3 * 8;
    puVar2[0xc] = uVar9 & -1 << (4 - uVar5) * 8 | uVar11 >> uVar5 * 8;
    puVar2 = puVar2 + 0xd;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    *puVar2 = 0x40000000;
    uVar1 = param_3 + 1U & 3;
    uVar3 = -1 << (4 - uVar1) * 8 & 0x41000000U | *(uint *)((param_3 + 1U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 5U & 3;
    uVar5 = -1 << (4 - uVar1) * 8 & 0x41000000U | *(uint *)((param_3 + 5U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 9U & 3;
    uVar8 = -1 << (4 - uVar1) * 8 & 0x41000000U | *(uint *)((param_3 + 9U) - uVar1) >> uVar1 * 8;
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    puVar2[3] = uVar8;
    uVar1 = param_3 + 0x11U & 3;
    uVar3 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x11U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x15U & 3;
    uVar5 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x15U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x19U & 3;
    uVar8 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x19U) - uVar1) >> uVar1 * 8;
    puVar2[4] = uVar3;
    puVar2[5] = uVar5;
    puVar2[6] = uVar8;
    uVar1 = param_3 + 0x21U & 3;
    uVar4 = uVar3 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x21U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x25U & 3;
    uVar6 = uVar5 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x25U) - uVar1) >> uVar1 * 8;
    uVar1 = param_3 + 0x29U & 3;
    uVar9 = uVar8 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x29U) - uVar1) >> uVar1 * 8;
    puVar2[7] = uVar4;
    puVar2[8] = uVar6;
    puVar2[9] = uVar9;
    uVar1 = param_3 + 0x31U & 3;
    uVar3 = param_3 + 0x35U & 3;
    uVar8 = *(uint *)((param_3 + 0x35U) - uVar3);
    uVar5 = param_3 + 0x39U & 3;
    uVar11 = *(uint *)((param_3 + 0x39U) - uVar5);
    puVar2[10] = uVar4 & -1 << (4 - uVar1) * 8 | *(uint *)((param_3 + 0x31U) - uVar1) >> uVar1 * 8;
    puVar2[0xb] = uVar6 & -1 << (4 - uVar3) * 8 | uVar8 >> uVar3 * 8;
    puVar2[0xc] = uVar9 & -1 << (4 - uVar5) * 8 | uVar11 >> uVar5 * 8;
    puVar2 = puVar2 + 0xd;
  }
  *(undefined4 **)(param_1 + 8) = puVar2;
  return;
}

