/* Entry 0x088FA474 | file offset 0x000F744C | FUN_088fa474 | bytes 384 */

void FUN_088fa474(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = param_1 * 0x1060;
  puVar8 = (undefined4 *)(DAT_089d712c + 0x1fecc + param_2 * 0x10a8);
  iVar2 = FUN_088f51ac(puVar8);
  if (iVar2 == 0) {
    iVar2 = FUN_088f51dc(puVar8);
    if (iVar2 != 0) {
      iVar2 = iVar2 + param_3 * 0x2d8;
      FUN_088fa98c(param_1,iVar2,0);
      if ((*(byte *)((int)puVar8 + 0x27) & 8) != 0) {
        (&DAT_09afc7d4)[param_1 * 0x830] = 1;
        *(undefined2 *)(&DAT_09afc7d6 + iVar1) = *(undefined2 *)(iVar2 + 10);
      }
    }
  }
  else {
    FUN_088fa8f4(param_1,iVar2,0);
    if ((*(byte *)((int)puVar8 + 0x27) & 8) != 0) {
      (&DAT_09afc7d4)[param_1 * 0x830] = 1;
      *(undefined2 *)(&DAT_09afc7d6 + iVar1) = *(undefined2 *)(iVar2 + 10);
    }
  }
  iVar2 = 0;
  iVar3 = 0x1c;
  uVar6 = *puVar8;
  puVar5 = puVar8;
  puVar7 = (undefined4 *)(&DAT_09afc018 + iVar1);
  do {
    uVar4 = puVar5[1];
    *puVar7 = uVar6;
    iVar2 = iVar2 + 8;
    puVar7[1] = uVar4;
    puVar5 = (undefined4 *)((int)puVar8 + iVar2);
    iVar3 = iVar3 + -1;
    uVar6 = *puVar5;
    puVar7 = (undefined4 *)((int)(&DAT_09afc018 + iVar1) + iVar2);
  } while (iVar3 != 0);
  *puVar7 = uVar6;
  return;
}

