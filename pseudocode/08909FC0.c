/* Entry 0x08909FC0 | file offset 0x00106F98 | FUN_08909fc0 | bytes 192 */

void FUN_08909fc0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined1 *)(param_1 + 0x139f8) = *param_2;
    uVar3 = param_2[3];
    *(undefined1 *)(param_1 + 0x139f9) = uVar1;
    uVar1 = param_2[4];
    *(undefined1 *)(param_1 + 0x139fa) = uVar2;
    uVar2 = param_2[5];
    *(undefined1 *)(param_1 + 0x139fb) = uVar3;
    *(undefined1 *)(param_1 + 0x139fc) = uVar1;
    *(undefined1 *)(param_1 + 0x139fd) = uVar2;
    iVar7 = 0;
    iVar6 = 0x24b;
    do {
      uVar8 = ((undefined4 *)(param_3 + iVar7))[1];
      puVar4 = (undefined4 *)(param_1 + 0x13a00 + iVar7);
      *puVar4 = *(undefined4 *)(param_3 + iVar7);
      puVar4[1] = uVar8;
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + 8;
    } while (iVar6 != 0);
    piVar5 = *(int **)(param_1 + 0x14c64);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x3c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x38));
    }
  }
  return;
}

