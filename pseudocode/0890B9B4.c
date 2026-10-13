/* Entry 0x0890B9B4 | file offset 0x0010898C | FUN_0890b9b4 | bytes 392 */

undefined4 FUN_0890b9b4(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x108);
  if (iVar5 < *(int *)(param_1 + 0x10c)) {
    iVar7 = 0;
    if (0 < iVar5) {
      puVar6 = (undefined1 *)(param_1 + 8);
      do {
        iVar5 = FUN_08935490(puVar6,param_2,6);
        if (iVar5 == 0) {
          uVar1 = param_2[1];
          uVar2 = param_2[2];
          *puVar6 = *param_2;
          uVar3 = param_2[3];
          puVar6[1] = uVar1;
          uVar1 = param_2[4];
          puVar6[2] = uVar2;
          uVar2 = param_2[5];
          puVar6[3] = uVar3;
          puVar6[4] = uVar1;
          puVar6[5] = uVar2;
          FUN_08935524(*(undefined4 *)(puVar6 + 8),param_3,param_4);
          *(undefined4 *)(puVar6 + 0xc) = param_4;
          return 1;
        }
        iVar5 = *(int *)(param_1 + 0x108);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 0x10;
      } while (iVar7 < iVar5);
    }
    iVar5 = param_1 + iVar5 * 0x10;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined1 *)(iVar5 + 8) = *param_2;
    uVar3 = param_2[3];
    *(undefined1 *)(iVar5 + 9) = uVar1;
    uVar1 = param_2[4];
    *(undefined1 *)(iVar5 + 10) = uVar2;
    uVar2 = param_2[5];
    *(undefined1 *)(iVar5 + 0xb) = uVar3;
    *(undefined1 *)(iVar5 + 0xc) = uVar1;
    *(undefined1 *)(iVar5 + 0xd) = uVar2;
    FUN_08935524(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x108) * 0x10 + 0x10),param_3,param_4)
    ;
    iVar5 = *(int *)(param_1 + 0x108);
    uVar4 = 1;
    *(undefined4 *)(param_1 + iVar5 * 0x10 + 0x14) = param_4;
    *(int *)(param_1 + 0x108) = iVar5 + 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

