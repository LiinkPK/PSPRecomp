/* Entry 0x088654D4 | file offset 0x000624AC | FUN_088654d4 | bytes 572 */

void FUN_088654d4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  *param_1 = 0;
  iVar2 = FUN_08940490(param_4,param_5);
  if ((iVar2 != 0) && (iVar2 = FUN_08940528(iVar2,3,0), iVar2 != 0)) {
    iVar7 = 0;
    uVar1 = FUN_089404a8(iVar2,param_3);
    *(undefined2 *)(param_1 + 0x18) = uVar1;
    if (*(short *)(param_1 + 0x18) == 0) {
      return;
    }
    iVar8 = 0;
    if (0 < *(short *)(param_1 + 0x18)) {
      do {
        puVar4 = (ushort *)FUN_08940528(iVar2,param_3,iVar8);
        puVar6 = puVar4 + 8;
        if ((*puVar4 & 0x8000) != 0) {
          puVar6 = (ushort *)&DAT_089c9390;
        }
        iVar9 = FUN_089359e8(puVar6);
        iVar8 = iVar8 + 1;
        iVar7 = iVar9 + iVar7 + 1;
      } while (iVar8 < *(short *)(param_1 + 0x18));
    }
    uVar3 = FUN_0885c6cc(DAT_089d5eb8,iVar7,0,0,1,0);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = FUN_0885c6cc(DAT_089d5eb8,(int)*(short *)(param_1 + 0x18) << 2,0,0,1,0);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    iVar8 = 0;
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 0x18)) {
      iVar9 = 0;
      do {
        puVar4 = (ushort *)FUN_08940528(iVar2,param_3,iVar8);
        puVar6 = (ushort *)&DAT_089c9390;
        if ((*puVar4 & 0x8000) == 0) {
          puVar6 = puVar4 + 8;
        }
        FUN_089359a4(*(int *)(param_1 + 0x10) + iVar7,puVar6);
        *(int *)(*(int *)(param_1 + 0x14) + iVar9) = *(int *)(param_1 + 0x10) + iVar7;
        puVar6 = puVar4 + 8;
        if ((*puVar4 & 0x8000) != 0) {
          puVar6 = (ushort *)&DAT_089c9390;
        }
        iVar5 = FUN_089359e8(puVar6);
        iVar8 = iVar8 + 1;
        iVar7 = iVar5 + iVar7 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar8 < *(short *)(param_1 + 0x18));
    }
  }
  FUN_08935af8(param_1,param_2,0xf);
  param_1[0x1a] = 1;
  return;
}

