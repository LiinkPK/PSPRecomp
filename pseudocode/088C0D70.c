/* Entry 0x088C0D70 | file offset 0x000BDD48 | FUN_088c0d70 | bytes 540 */

void FUN_088c0d70(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1 != 0) {
    DAT_089d7408 = FUN_088820d8(param_2 + (0x2ab - *(int *)(param_1 + 8)) * 0x68);
    FUN_08935524(DAT_089d7408,param_1,param_2);
    DAT_089d740c = DAT_089d7408 + 0x10;
    DAT_089d7410 = DAT_089d740c + *(int *)(DAT_089d7408 + 8) * 0x68;
    DAT_089d7414 = DAT_089d7410 + *(int *)(DAT_089d7408 + 0xc) * 0x34;
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(DAT_089d7408 + 8)) {
      do {
        iVar2 = 0;
        iVar6 = DAT_089d740c + iVar4 + 0x1c;
        iVar5 = DAT_089d740c + iVar4 + 0x3c;
        do {
          *(int *)(iVar6 + 4) = iVar5;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 2;
          iVar6 = iVar6 + 8;
        } while (iVar2 < 4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x68;
      } while (iVar3 < *(int *)(DAT_089d7408 + 8));
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(DAT_089d7408 + 0xc)) {
      do {
        iVar2 = 0;
        iVar6 = DAT_089d7410 + iVar4 + 0xc;
        iVar5 = DAT_089d7410 + iVar4 + 0x2c;
        do {
          *(int *)(iVar6 + 4) = iVar5;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 2;
          iVar6 = iVar6 + 8;
        } while (iVar2 < 4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x34;
      } while (iVar3 < *(int *)(DAT_089d7408 + 0xc));
    }
  }
  if (param_3 != 0) {
    iVar3 = FUN_08869ab4(param_3,"item.bin");
    if (iVar3 != 0) {
      uVar7 = *(undefined4 *)(iVar3 + 4);
      uVar8 = *(undefined4 *)(iVar3 + 8);
      uVar1 = FUN_088821c0();
      FUN_0887ac70(&DAT_09b4e828,uVar7,uVar8,uVar1);
    }
    iVar3 = FUN_08869ab4(param_3,"item_help.bin");
    if (iVar3 != 0) {
      uVar8 = *(undefined4 *)(iVar3 + 4);
      uVar7 = *(undefined4 *)(iVar3 + 8);
      uVar1 = FUN_088821c0();
      FUN_0887ac70(&DAT_09b69260,uVar8,uVar7,uVar1);
    }
  }
  return;
}

