/* Entry 0x089160F0 | file offset 0x001130C8 | FUN_089160f0 | bytes 424 */

void FUN_089160f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_0891705c(0xffffffff);
  FUN_08912838(iVar1,*(int *)(param_1 + 0x6d0) + 0x80);
  FUN_0891288c(iVar1,*(int *)(param_1 + 0x6d0) + 0x90);
  iVar3 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x5ac);
  piVar4 = *(int **)(iVar3 + 300 + *(int *)(iVar3 + 0x108) * 4);
  iVar3 = *piVar4;
  uVar8 = (**(code **)(iVar3 + 0x44))((int)piVar4 + (int)*(short *)(iVar3 + 0x40));
  *(undefined4 *)(iVar1 + 0x1cc) = uVar8;
  *(undefined4 *)(iVar1 + 0x264) = *(undefined4 *)(iVar1 + 0x264);
  *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) | 2;
  iVar6 = 0;
  iVar3 = param_1;
  do {
    iVar7 = *(int *)(iVar3 + 0x704);
    if (iVar7 == 0) {
      FUN_08912a04(iVar1,iVar6);
    }
    else {
      uVar8 = func_0x08a641e8(*(undefined4 *)(iVar7 + 0x5c4));
      iVar2 = FUN_08837990(*(undefined4 *)(iVar3 + 0x704));
      uVar5 = 0;
      if ((iVar2 != 0) &&
         (uVar5 = 0, (uint)**(byte **)(*(int *)(iVar3 + 0x704) + 0x5a4) != *(uint *)(param_1 + 0x5c)
         )) {
        uVar5 = 1;
      }
      FUN_089128dc(iVar1,iVar6,iVar7 + 0x80,iVar7 + 0x90,uVar8,uVar5);
      *(undefined4 *)(iVar1 + 0x264) = *(undefined4 *)(iVar1 + 0x264);
      *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) | 4;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar6 < 4);
  FUN_08912af8(iVar1,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  return;
}

