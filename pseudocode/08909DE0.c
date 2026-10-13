/* Entry 0x08909DE0 | file offset 0x00106DB8 | FUN_08909de0 | bytes 248 */

void FUN_08909de0(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  FUN_0890a358();
  if (*(int *)(param_1 + 400) != 5) {
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
    iVar4 = 0;
    iVar5 = 0x24b;
    do {
      uVar7 = ((undefined4 *)(param_3 + iVar4))[1];
      puVar8 = (undefined4 *)(param_1 + 0x13a00 + iVar4);
      *puVar8 = *(undefined4 *)(param_3 + iVar4);
      puVar8[1] = uVar7;
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 8;
    } while (iVar5 != 0);
    piVar6 = *(int **)(param_1 + 0x14c64);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x1c))
                ((int)piVar6 + (int)*(short *)(*piVar6 + 0x18),(undefined1 *)(param_1 + 0x139f8));
    }
    *(undefined4 *)(param_1 + 400) = 5;
  }
  return;
}

