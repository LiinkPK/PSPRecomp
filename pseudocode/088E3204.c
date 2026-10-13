/* Entry 0x088E3204 | file offset 0x000E01DC | FUN_088e3204 | bytes 484 */

void FUN_088e3204(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  undefined4 uVar12;
  
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  iVar7 = 0;
  iVar9 = 0;
  do {
    puVar5 = *(ushort **)(iVar4 + iVar9 + 0x408);
    iVar8 = 0;
    uVar6 = (uint)*puVar5;
    iVar10 = 0;
    if (uVar6 != 0) {
      do {
        puVar11 = (ushort *)((int)puVar5 + iVar10 + 4);
        uVar1 = *puVar11;
        if (uVar1 < 0xc9) {
          if (199 < uVar1) {
            uVar12 = *(undefined4 *)(param_1 + 0x390);
            uVar3 = FUN_088e38d8(param_1,puVar11);
            uVar3 = FUN_0887ad78(uVar12,0,uVar3,0,0,0);
            *(undefined4 *)(param_1 + *(int *)(param_1 + 0x680) * 4 + 0x394) = uVar3;
            uVar2 = FUN_088e38d8(param_1,puVar11);
            iVar4 = *(int *)(param_1 + 0x680);
            *(undefined2 *)(param_1 + iVar4 * 2 + 0x524) = uVar2;
            FUN_0887b944(*(undefined4 *)(param_1 + iVar4 * 4 + 0x394));
            iVar4 = *(int *)(param_1 + 4);
            *(int *)(param_1 + 0x680) = *(int *)(param_1 + 0x680) + 1;
            puVar5 = *(ushort **)(iVar4 + iVar9 + 0x408);
            uVar6 = (uint)*puVar5;
          }
        }
        else if (uVar1 == 0xd0) {
          uVar12 = *(undefined4 *)(param_1 + 0x390);
          uVar3 = FUN_088e38d8(param_1,puVar11);
          uVar3 = FUN_0887ad78(uVar12,0,uVar3,0,0,0);
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x68c) * 4 + 0x604) = uVar3;
          uVar2 = FUN_088e38d8(param_1,puVar11);
          iVar4 = *(int *)(param_1 + 0x68c);
          *(undefined2 *)(param_1 + iVar4 * 2 + 0x644) = uVar2;
          FUN_0887b944(*(undefined4 *)(param_1 + iVar4 * 4 + 0x604));
          iVar4 = *(int *)(param_1 + 4);
          *(int *)(param_1 + 0x68c) = *(int *)(param_1 + 0x68c) + 1;
          puVar5 = *(ushort **)(iVar4 + iVar9 + 0x408);
          uVar6 = (uint)*puVar5;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 0x20;
      } while (iVar8 < (int)uVar6);
    }
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 4;
  } while (iVar7 < 0x1e);
  return;
}

